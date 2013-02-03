#ifndef INSTALLERQUICK_H
#define INSTALLERQUICK_H

#include <iplugininstallersimple.h>

class InstallerQuick : public IPluginInstallerSimple
{
  Q_OBJECT
  Q_INTERFACES(IPlugin IPluginInstaller IPluginInstallerSimple)

public:

  InstallerQuick();

  virtual bool init(IOrganizer *moInfo);
  virtual QString name() const;
  virtual QString author() const;
  virtual QString description() const;
  virtual VersionInfo version() const;
  virtual bool isActive() const;
  virtual QList<PluginSetting> settings() const;

  virtual unsigned int priority() const;
  virtual bool isManualInstaller() const;

  virtual bool isArchiveSupported(const DirectoryTree &tree) const;
  virtual EInstallResult install(QString &modName, DirectoryTree &tree);

private:

  bool isSimpleArchiveTopLayer(const DirectoryTree::Node *node) const;
  const DirectoryTree::Node *getSimpleArchiveBase(const DirectoryTree &dataTree) const;

private:

  const IOrganizer *m_MOInfo;

};

#endif // INSTALLERQUICK_H
