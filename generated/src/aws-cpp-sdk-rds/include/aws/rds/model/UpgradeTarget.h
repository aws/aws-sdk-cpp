/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>The version of the database engine that a DB instance can be upgraded
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/UpgradeTarget">AWS
   * API Reference</a></p>
   */
  class UpgradeTarget
  {
  public:
    AWS_RDS_API UpgradeTarget();
    AWS_RDS_API UpgradeTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API UpgradeTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline UpgradeTarget& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline UpgradeTarget& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline UpgradeTarget& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline UpgradeTarget& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline UpgradeTarget& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline UpgradeTarget& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpgradeTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpgradeTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpgradeTarget& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the target version is applied to any source DB instances
     * that have <code>AutoMinorVersionUpgrade</code> set to true.</p> <p>This
     * parameter is dynamic, and is set by RDS.</p>
     */
    inline bool GetAutoUpgrade() const{ return m_autoUpgrade; }
    inline bool AutoUpgradeHasBeenSet() const { return m_autoUpgradeHasBeenSet; }
    inline void SetAutoUpgrade(bool value) { m_autoUpgradeHasBeenSet = true; m_autoUpgrade = value; }
    inline UpgradeTarget& WithAutoUpgrade(bool value) { SetAutoUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether upgrading to the target version requires upgrading the
     * major version of the database engine.</p>
     */
    inline bool GetIsMajorVersionUpgrade() const{ return m_isMajorVersionUpgrade; }
    inline bool IsMajorVersionUpgradeHasBeenSet() const { return m_isMajorVersionUpgradeHasBeenSet; }
    inline void SetIsMajorVersionUpgrade(bool value) { m_isMajorVersionUpgradeHasBeenSet = true; m_isMajorVersionUpgrade = value; }
    inline UpgradeTarget& WithIsMajorVersionUpgrade(bool value) { SetIsMajorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = value; }
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::move(value); }
    inline UpgradeTarget& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}
    inline UpgradeTarget& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}
    inline UpgradeTarget& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }
    inline UpgradeTarget& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(std::move(value)); return *this; }
    inline UpgradeTarget& AddSupportedEngineModes(const char* value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora parallel query with the target engine
     * version.</p>
     */
    inline bool GetSupportsParallelQuery() const{ return m_supportsParallelQuery; }
    inline bool SupportsParallelQueryHasBeenSet() const { return m_supportsParallelQueryHasBeenSet; }
    inline void SetSupportsParallelQuery(bool value) { m_supportsParallelQueryHasBeenSet = true; m_supportsParallelQuery = value; }
    inline UpgradeTarget& WithSupportsParallelQuery(bool value) { SetSupportsParallelQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora global databases with the target engine
     * version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }
    inline bool SupportsGlobalDatabasesHasBeenSet() const { return m_supportsGlobalDatabasesHasBeenSet; }
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }
    inline UpgradeTarget& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Babelfish for Aurora PostgreSQL with the target
     * engine version.</p>
     */
    inline bool GetSupportsBabelfish() const{ return m_supportsBabelfish; }
    inline bool SupportsBabelfishHasBeenSet() const { return m_supportsBabelfishHasBeenSet; }
    inline void SetSupportsBabelfish(bool value) { m_supportsBabelfishHasBeenSet = true; m_supportsBabelfish = value; }
    inline UpgradeTarget& WithSupportsBabelfish(bool value) { SetSupportsBabelfish(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports Aurora Limitless
     * Database.</p>
     */
    inline bool GetSupportsLimitlessDatabase() const{ return m_supportsLimitlessDatabase; }
    inline bool SupportsLimitlessDatabaseHasBeenSet() const { return m_supportsLimitlessDatabaseHasBeenSet; }
    inline void SetSupportsLimitlessDatabase(bool value) { m_supportsLimitlessDatabaseHasBeenSet = true; m_supportsLimitlessDatabase = value; }
    inline UpgradeTarget& WithSupportsLimitlessDatabase(bool value) { SetSupportsLimitlessDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the target engine version supports forwarding write
     * operations from reader DB instances to the writer DB instance in the DB cluster.
     * By default, write operations aren't allowed on reader DB instances.</p> <p>Valid
     * for: Aurora DB clusters only</p>
     */
    inline bool GetSupportsLocalWriteForwarding() const{ return m_supportsLocalWriteForwarding; }
    inline bool SupportsLocalWriteForwardingHasBeenSet() const { return m_supportsLocalWriteForwardingHasBeenSet; }
    inline void SetSupportsLocalWriteForwarding(bool value) { m_supportsLocalWriteForwardingHasBeenSet = true; m_supportsLocalWriteForwarding = value; }
    inline UpgradeTarget& WithSupportsLocalWriteForwarding(bool value) { SetSupportsLocalWriteForwarding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB engine version supports zero-ETL integrations with
     * Amazon Redshift.</p>
     */
    inline bool GetSupportsIntegrations() const{ return m_supportsIntegrations; }
    inline bool SupportsIntegrationsHasBeenSet() const { return m_supportsIntegrationsHasBeenSet; }
    inline void SetSupportsIntegrations(bool value) { m_supportsIntegrationsHasBeenSet = true; m_supportsIntegrations = value; }
    inline UpgradeTarget& WithSupportsIntegrations(bool value) { SetSupportsIntegrations(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoUpgrade;
    bool m_autoUpgradeHasBeenSet = false;

    bool m_isMajorVersionUpgrade;
    bool m_isMajorVersionUpgradeHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet = false;

    bool m_supportsParallelQuery;
    bool m_supportsParallelQueryHasBeenSet = false;

    bool m_supportsGlobalDatabases;
    bool m_supportsGlobalDatabasesHasBeenSet = false;

    bool m_supportsBabelfish;
    bool m_supportsBabelfishHasBeenSet = false;

    bool m_supportsLimitlessDatabase;
    bool m_supportsLimitlessDatabaseHasBeenSet = false;

    bool m_supportsLocalWriteForwarding;
    bool m_supportsLocalWriteForwardingHasBeenSet = false;

    bool m_supportsIntegrations;
    bool m_supportsIntegrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
