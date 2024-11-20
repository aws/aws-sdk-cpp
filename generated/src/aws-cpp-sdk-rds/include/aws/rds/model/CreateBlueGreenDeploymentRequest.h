/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateBlueGreenDeploymentRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateBlueGreenDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBlueGreenDeployment"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the blue/green deployment.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be the same as an existing blue/green deployment name in the same
     * account and Amazon Web Services Region.</p> </li> </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentName() const{ return m_blueGreenDeploymentName; }
    inline bool BlueGreenDeploymentNameHasBeenSet() const { return m_blueGreenDeploymentNameHasBeenSet; }
    inline void SetBlueGreenDeploymentName(const Aws::String& value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName = value; }
    inline void SetBlueGreenDeploymentName(Aws::String&& value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName = std::move(value); }
    inline void SetBlueGreenDeploymentName(const char* value) { m_blueGreenDeploymentNameHasBeenSet = true; m_blueGreenDeploymentName.assign(value); }
    inline CreateBlueGreenDeploymentRequest& WithBlueGreenDeploymentName(const Aws::String& value) { SetBlueGreenDeploymentName(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithBlueGreenDeploymentName(Aws::String&& value) { SetBlueGreenDeploymentName(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithBlueGreenDeploymentName(const char* value) { SetBlueGreenDeploymentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source production database.</p>
     * <p>Specify the database that you want to clone. The blue/green deployment
     * creates this database in the green environment. You can make updates to the
     * database in the green environment, such as an engine version upgrade. When you
     * are ready, you can switch the database in the green environment to be the
     * production database.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline CreateBlueGreenDeploymentRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version of the database in the green environment.</p> <p>Specify
     * the engine version to upgrade to in the green environment.</p>
     */
    inline const Aws::String& GetTargetEngineVersion() const{ return m_targetEngineVersion; }
    inline bool TargetEngineVersionHasBeenSet() const { return m_targetEngineVersionHasBeenSet; }
    inline void SetTargetEngineVersion(const Aws::String& value) { m_targetEngineVersionHasBeenSet = true; m_targetEngineVersion = value; }
    inline void SetTargetEngineVersion(Aws::String&& value) { m_targetEngineVersionHasBeenSet = true; m_targetEngineVersion = std::move(value); }
    inline void SetTargetEngineVersion(const char* value) { m_targetEngineVersionHasBeenSet = true; m_targetEngineVersion.assign(value); }
    inline CreateBlueGreenDeploymentRequest& WithTargetEngineVersion(const Aws::String& value) { SetTargetEngineVersion(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetEngineVersion(Aws::String&& value) { SetTargetEngineVersion(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetEngineVersion(const char* value) { SetTargetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB parameter group associated with the DB instance in the green
     * environment.</p> <p>To test parameter changes, specify a DB parameter group that
     * is different from the one associated with the source DB instance.</p>
     */
    inline const Aws::String& GetTargetDBParameterGroupName() const{ return m_targetDBParameterGroupName; }
    inline bool TargetDBParameterGroupNameHasBeenSet() const { return m_targetDBParameterGroupNameHasBeenSet; }
    inline void SetTargetDBParameterGroupName(const Aws::String& value) { m_targetDBParameterGroupNameHasBeenSet = true; m_targetDBParameterGroupName = value; }
    inline void SetTargetDBParameterGroupName(Aws::String&& value) { m_targetDBParameterGroupNameHasBeenSet = true; m_targetDBParameterGroupName = std::move(value); }
    inline void SetTargetDBParameterGroupName(const char* value) { m_targetDBParameterGroupNameHasBeenSet = true; m_targetDBParameterGroupName.assign(value); }
    inline CreateBlueGreenDeploymentRequest& WithTargetDBParameterGroupName(const Aws::String& value) { SetTargetDBParameterGroupName(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetDBParameterGroupName(Aws::String&& value) { SetTargetDBParameterGroupName(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetDBParameterGroupName(const char* value) { SetTargetDBParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster parameter group associated with the Aurora DB cluster in the
     * green environment.</p> <p>To test parameter changes, specify a DB cluster
     * parameter group that is different from the one associated with the source DB
     * cluster.</p>
     */
    inline const Aws::String& GetTargetDBClusterParameterGroupName() const{ return m_targetDBClusterParameterGroupName; }
    inline bool TargetDBClusterParameterGroupNameHasBeenSet() const { return m_targetDBClusterParameterGroupNameHasBeenSet; }
    inline void SetTargetDBClusterParameterGroupName(const Aws::String& value) { m_targetDBClusterParameterGroupNameHasBeenSet = true; m_targetDBClusterParameterGroupName = value; }
    inline void SetTargetDBClusterParameterGroupName(Aws::String&& value) { m_targetDBClusterParameterGroupNameHasBeenSet = true; m_targetDBClusterParameterGroupName = std::move(value); }
    inline void SetTargetDBClusterParameterGroupName(const char* value) { m_targetDBClusterParameterGroupNameHasBeenSet = true; m_targetDBClusterParameterGroupName.assign(value); }
    inline CreateBlueGreenDeploymentRequest& WithTargetDBClusterParameterGroupName(const Aws::String& value) { SetTargetDBClusterParameterGroupName(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetDBClusterParameterGroupName(Aws::String&& value) { SetTargetDBClusterParameterGroupName(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetDBClusterParameterGroupName(const char* value) { SetTargetDBClusterParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the blue/green deployment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateBlueGreenDeploymentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateBlueGreenDeploymentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the DB instance class for the databases in the green environment.</p>
     * <p>This parameter only applies to RDS DB instances, because DB instances within
     * an Aurora DB cluster can have multiple different instance classes. If you're
     * creating a blue/green deployment from an Aurora DB cluster, don't specify this
     * parameter. After the green environment is created, you can individually modify
     * the instance classes of the DB instances within the green DB cluster.</p>
     */
    inline const Aws::String& GetTargetDBInstanceClass() const{ return m_targetDBInstanceClass; }
    inline bool TargetDBInstanceClassHasBeenSet() const { return m_targetDBInstanceClassHasBeenSet; }
    inline void SetTargetDBInstanceClass(const Aws::String& value) { m_targetDBInstanceClassHasBeenSet = true; m_targetDBInstanceClass = value; }
    inline void SetTargetDBInstanceClass(Aws::String&& value) { m_targetDBInstanceClassHasBeenSet = true; m_targetDBInstanceClass = std::move(value); }
    inline void SetTargetDBInstanceClass(const char* value) { m_targetDBInstanceClassHasBeenSet = true; m_targetDBInstanceClass.assign(value); }
    inline CreateBlueGreenDeploymentRequest& WithTargetDBInstanceClass(const Aws::String& value) { SetTargetDBInstanceClass(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetDBInstanceClass(Aws::String&& value) { SetTargetDBInstanceClass(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetDBInstanceClass(const char* value) { SetTargetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to upgrade the storage file system configuration on the green
     * database. This option migrates the green DB instance from the older 32-bit file
     * system to the preferred configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.UpgradeFileSystem">Upgrading
     * the storage file system for a DB instance</a>.</p>
     */
    inline bool GetUpgradeTargetStorageConfig() const{ return m_upgradeTargetStorageConfig; }
    inline bool UpgradeTargetStorageConfigHasBeenSet() const { return m_upgradeTargetStorageConfigHasBeenSet; }
    inline void SetUpgradeTargetStorageConfig(bool value) { m_upgradeTargetStorageConfigHasBeenSet = true; m_upgradeTargetStorageConfig = value; }
    inline CreateBlueGreenDeploymentRequest& WithUpgradeTargetStorageConfig(bool value) { SetUpgradeTargetStorageConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * allocate for the green DB instance. For information about valid IOPS values, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html">Amazon
     * RDS DB instance storage</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to Amazon Aurora blue/green deployments.</p>
     */
    inline int GetTargetIops() const{ return m_targetIops; }
    inline bool TargetIopsHasBeenSet() const { return m_targetIopsHasBeenSet; }
    inline void SetTargetIops(int value) { m_targetIopsHasBeenSet = true; m_targetIops = value; }
    inline CreateBlueGreenDeploymentRequest& WithTargetIops(int value) { SetTargetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the green DB instance.</p> <p>Valid
     * Values: <code>gp2 | gp3 | io1 | io2</code> </p> <p>This setting doesn't apply to
     * Amazon Aurora blue/green deployments.</p>
     */
    inline const Aws::String& GetTargetStorageType() const{ return m_targetStorageType; }
    inline bool TargetStorageTypeHasBeenSet() const { return m_targetStorageTypeHasBeenSet; }
    inline void SetTargetStorageType(const Aws::String& value) { m_targetStorageTypeHasBeenSet = true; m_targetStorageType = value; }
    inline void SetTargetStorageType(Aws::String&& value) { m_targetStorageTypeHasBeenSet = true; m_targetStorageType = std::move(value); }
    inline void SetTargetStorageType(const char* value) { m_targetStorageTypeHasBeenSet = true; m_targetStorageType.assign(value); }
    inline CreateBlueGreenDeploymentRequest& WithTargetStorageType(const Aws::String& value) { SetTargetStorageType(value); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetStorageType(Aws::String&& value) { SetTargetStorageType(std::move(value)); return *this;}
    inline CreateBlueGreenDeploymentRequest& WithTargetStorageType(const char* value) { SetTargetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate for the green DB
     * instance. You can choose to increase or decrease the allocated storage on the
     * green DB instance.</p> <p>This setting doesn't apply to Amazon Aurora blue/green
     * deployments.</p>
     */
    inline int GetTargetAllocatedStorage() const{ return m_targetAllocatedStorage; }
    inline bool TargetAllocatedStorageHasBeenSet() const { return m_targetAllocatedStorageHasBeenSet; }
    inline void SetTargetAllocatedStorage(int value) { m_targetAllocatedStorageHasBeenSet = true; m_targetAllocatedStorage = value; }
    inline CreateBlueGreenDeploymentRequest& WithTargetAllocatedStorage(int value) { SetTargetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput value for the green DB instance.</p> <p>This setting
     * applies only to the <code>gp3</code> storage type.</p> <p>This setting doesn't
     * apply to Amazon Aurora blue/green deployments.</p>
     */
    inline int GetTargetStorageThroughput() const{ return m_targetStorageThroughput; }
    inline bool TargetStorageThroughputHasBeenSet() const { return m_targetStorageThroughputHasBeenSet; }
    inline void SetTargetStorageThroughput(int value) { m_targetStorageThroughputHasBeenSet = true; m_targetStorageThroughput = value; }
    inline CreateBlueGreenDeploymentRequest& WithTargetStorageThroughput(int value) { SetTargetStorageThroughput(value); return *this;}
    ///@}
  private:

    Aws::String m_blueGreenDeploymentName;
    bool m_blueGreenDeploymentNameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_targetEngineVersion;
    bool m_targetEngineVersionHasBeenSet = false;

    Aws::String m_targetDBParameterGroupName;
    bool m_targetDBParameterGroupNameHasBeenSet = false;

    Aws::String m_targetDBClusterParameterGroupName;
    bool m_targetDBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_targetDBInstanceClass;
    bool m_targetDBInstanceClassHasBeenSet = false;

    bool m_upgradeTargetStorageConfig;
    bool m_upgradeTargetStorageConfigHasBeenSet = false;

    int m_targetIops;
    bool m_targetIopsHasBeenSet = false;

    Aws::String m_targetStorageType;
    bool m_targetStorageTypeHasBeenSet = false;

    int m_targetAllocatedStorage;
    bool m_targetAllocatedStorageHasBeenSet = false;

    int m_targetStorageThroughput;
    bool m_targetStorageThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
