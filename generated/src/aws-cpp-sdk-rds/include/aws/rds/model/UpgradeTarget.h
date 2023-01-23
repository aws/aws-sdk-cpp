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


    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline UpgradeTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline UpgradeTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline UpgradeTarget& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline bool GetAutoUpgrade() const{ return m_autoUpgrade; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline bool AutoUpgradeHasBeenSet() const { return m_autoUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline void SetAutoUpgrade(bool value) { m_autoUpgradeHasBeenSet = true; m_autoUpgrade = value; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline UpgradeTarget& WithAutoUpgrade(bool value) { SetAutoUpgrade(value); return *this;}


    /**
     * <p>A value that indicates whether upgrading to the target version requires
     * upgrading the major version of the database engine.</p>
     */
    inline bool GetIsMajorVersionUpgrade() const{ return m_isMajorVersionUpgrade; }

    /**
     * <p>A value that indicates whether upgrading to the target version requires
     * upgrading the major version of the database engine.</p>
     */
    inline bool IsMajorVersionUpgradeHasBeenSet() const { return m_isMajorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether upgrading to the target version requires
     * upgrading the major version of the database engine.</p>
     */
    inline void SetIsMajorVersionUpgrade(bool value) { m_isMajorVersionUpgradeHasBeenSet = true; m_isMajorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether upgrading to the target version requires
     * upgrading the major version of the database engine.</p>
     */
    inline UpgradeTarget& WithIsMajorVersionUpgrade(bool value) { SetIsMajorVersionUpgrade(value); return *this;}


    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = value; }

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::move(value); }

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline UpgradeTarget& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline UpgradeTarget& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline UpgradeTarget& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline UpgradeTarget& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the supported DB engine modes for the target engine version.</p>
     */
    inline UpgradeTarget& AddSupportedEngineModes(const char* value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether you can use Aurora parallel query with the
     * target engine version.</p>
     */
    inline bool GetSupportsParallelQuery() const{ return m_supportsParallelQuery; }

    /**
     * <p>A value that indicates whether you can use Aurora parallel query with the
     * target engine version.</p>
     */
    inline bool SupportsParallelQueryHasBeenSet() const { return m_supportsParallelQueryHasBeenSet; }

    /**
     * <p>A value that indicates whether you can use Aurora parallel query with the
     * target engine version.</p>
     */
    inline void SetSupportsParallelQuery(bool value) { m_supportsParallelQueryHasBeenSet = true; m_supportsParallelQuery = value; }

    /**
     * <p>A value that indicates whether you can use Aurora parallel query with the
     * target engine version.</p>
     */
    inline UpgradeTarget& WithSupportsParallelQuery(bool value) { SetSupportsParallelQuery(value); return *this;}


    /**
     * <p>A value that indicates whether you can use Aurora global databases with the
     * target engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }

    /**
     * <p>A value that indicates whether you can use Aurora global databases with the
     * target engine version.</p>
     */
    inline bool SupportsGlobalDatabasesHasBeenSet() const { return m_supportsGlobalDatabasesHasBeenSet; }

    /**
     * <p>A value that indicates whether you can use Aurora global databases with the
     * target engine version.</p>
     */
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }

    /**
     * <p>A value that indicates whether you can use Aurora global databases with the
     * target engine version.</p>
     */
    inline UpgradeTarget& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}


    /**
     * <p>A value that indicates whether you can use Babelfish for Aurora PostgreSQL
     * with the target engine version.</p>
     */
    inline bool GetSupportsBabelfish() const{ return m_supportsBabelfish; }

    /**
     * <p>A value that indicates whether you can use Babelfish for Aurora PostgreSQL
     * with the target engine version.</p>
     */
    inline bool SupportsBabelfishHasBeenSet() const { return m_supportsBabelfishHasBeenSet; }

    /**
     * <p>A value that indicates whether you can use Babelfish for Aurora PostgreSQL
     * with the target engine version.</p>
     */
    inline void SetSupportsBabelfish(bool value) { m_supportsBabelfishHasBeenSet = true; m_supportsBabelfish = value; }

    /**
     * <p>A value that indicates whether you can use Babelfish for Aurora PostgreSQL
     * with the target engine version.</p>
     */
    inline UpgradeTarget& WithSupportsBabelfish(bool value) { SetSupportsBabelfish(value); return *this;}

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
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
