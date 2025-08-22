/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyDBSnapshotRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBSnapshot"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the DB snapshot to modify.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const { return m_dBSnapshotIdentifier; }
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
    template<typename DBSnapshotIdentifierT = Aws::String>
    void SetDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::forward<DBSnapshotIdentifierT>(value); }
    template<typename DBSnapshotIdentifierT = Aws::String>
    ModifyDBSnapshotRequest& WithDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { SetDBSnapshotIdentifier(std::forward<DBSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version to upgrade the DB snapshot to.</p> <p>The following are
     * the database engines and engine versions that are available when you upgrade a
     * DB snapshot.</p> <p> <b>MariaDB</b> </p> <p>For the list of engine versions that
     * are available for upgrading a DB snapshot, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/mariadb-upgrade-snapshot.html">
     * Upgrading a MariaDB DB snapshot engine version</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p> <b>MySQL</b> </p> <p>For the list of engine versions that
     * are available for upgrading a DB snapshot, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/mysql-upgrade-snapshot.html">
     * Upgrading a MySQL DB snapshot engine version</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p> <b>Oracle</b> </p> <ul> <li> <p>
     * <code>21.0.0.0.ru-2025-04.rur-2025-04.r1</code> (supported for
     * 21.0.0.0.ru-2022-01.rur-2022-01.r1, 21.0.0.0.ru-2022-04.rur-2022-04.r1,
     * 21.0.0.0.ru-2022-07.rur-2022-07.r1, 21.0.0.0.ru-2022-10.rur-2022-10.r1,
     * 21.0.0.0.ru-2023-01.rur-2023-01.r1 and 21.0.0.0.ru-2023-01.rur-2023-01.r2 DB
     * snapshots)</p> </li> <li> <p> <code>19.0.0.0.ru-2025-04.rur-2025-04.r1</code>
     * (supported for 19.0.0.0.ru-2019-07.rur-2019-07.r1,
     * 19.0.0.0.ru-2019-10.rur-2019-10.r1 and 0.0.0.ru-2020-01.rur-2020-01.r1 DB
     * snapshots)</p> </li> <li> <p> <code>19.0.0.0.ru-2022-01.rur-2022-01.r1</code>
     * (supported for 12.2.0.1 DB snapshots)</p> </li> <li> <p>
     * <code>19.0.0.0.ru-2022-07.rur-2022-07.r1</code> (supported for 12.1.0.2 DB
     * snapshots)</p> </li> <li> <p> <code>12.1.0.2.v8</code> (supported for 12.1.0.1
     * DB snapshots)</p> </li> <li> <p> <code>11.2.0.4.v12</code> (supported for
     * 11.2.0.2 DB snapshots)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported
     * for 11.2.0.3 DB snapshots)</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>For the
     * list of engine versions that are available for upgrading a DB snapshot, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBSnapshot.PostgreSQL.html">
     * Upgrading a PostgreSQL DB snapshot engine version</a> in the <i>Amazon RDS User
     * Guide.</i> </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ModifyDBSnapshotRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group to identify with the upgraded DB snapshot.</p> <p>You can
     * specify this parameter when you upgrade an Oracle DB snapshot. The same option
     * group considerations apply when upgrading a DB snapshot as when upgrading a DB
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Oracle.html#USER_UpgradeDBInstance.Oracle.OGPG.OG">Option
     * group considerations</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    ModifyDBSnapshotRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
