/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Amazon RDS DB cluster snapshot.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterSnapshotDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterSnapshotDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDetails();
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Availability Zones where instances in the DB cluster can be
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline AwsRdsDbClusterSnapshotDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline AwsRdsDbClusterSnapshotDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the snapshot was taken.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    inline void SetSnapshotCreateTime(const Aws::String& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::String&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }
    inline void SetSnapshotCreateTime(const char* value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotCreateTime(const Aws::String& value) { SetSnapshotCreateTime(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotCreateTime(Aws::String&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotCreateTime(const char* value) { SetSnapshotCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine that you want to use for this DB
     * instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbClusterSnapshotDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the DB instances in the DB cluster accept
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AwsRdsDbClusterSnapshotDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID that is associated with the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the DB cluster was created, in Universal Coordinated Time
     * (UTC).</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetClusterCreateTime() const{ return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    inline void SetClusterCreateTime(const Aws::String& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }
    inline void SetClusterCreateTime(Aws::String&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }
    inline void SetClusterCreateTime(const char* value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithClusterCreateTime(const Aws::String& value) { SetClusterCreateTime(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithClusterCreateTime(Aws::String&& value) { SetClusterCreateTime(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithClusterCreateTime(const char* value) { SetClusterCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the master user for the DB cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine to use.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model information for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DB cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline AwsRdsDbClusterSnapshotDetails& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline AwsRdsDbClusterSnapshotDetails& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS master key that is used to encrypt the database instances
     * in the DB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster identifier.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetDbClusterSnapshotIdentifier() const{ return m_dbClusterSnapshotIdentifier; }
    inline bool DbClusterSnapshotIdentifierHasBeenSet() const { return m_dbClusterSnapshotIdentifierHasBeenSet; }
    inline void SetDbClusterSnapshotIdentifier(const Aws::String& value) { m_dbClusterSnapshotIdentifierHasBeenSet = true; m_dbClusterSnapshotIdentifier = value; }
    inline void SetDbClusterSnapshotIdentifier(Aws::String&& value) { m_dbClusterSnapshotIdentifierHasBeenSet = true; m_dbClusterSnapshotIdentifier = std::move(value); }
    inline void SetDbClusterSnapshotIdentifier(const char* value) { m_dbClusterSnapshotIdentifierHasBeenSet = true; m_dbClusterSnapshotIdentifier.assign(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotIdentifier(const Aws::String& value) { SetDbClusterSnapshotIdentifier(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotIdentifier(Aws::String&& value) { SetDbClusterSnapshotIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotIdentifier(const char* value) { SetDbClusterSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether mapping of IAM accounts to database accounts is enabled.</p>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const{ return m_iamDatabaseAuthenticationEnabled; }
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }
    inline AwsRdsDbClusterSnapshotDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the name and values of a manual DB cluster snapshot attribute. </p>
     */
    inline const Aws::Vector<AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute>& GetDbClusterSnapshotAttributes() const{ return m_dbClusterSnapshotAttributes; }
    inline bool DbClusterSnapshotAttributesHasBeenSet() const { return m_dbClusterSnapshotAttributesHasBeenSet; }
    inline void SetDbClusterSnapshotAttributes(const Aws::Vector<AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute>& value) { m_dbClusterSnapshotAttributesHasBeenSet = true; m_dbClusterSnapshotAttributes = value; }
    inline void SetDbClusterSnapshotAttributes(Aws::Vector<AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute>&& value) { m_dbClusterSnapshotAttributesHasBeenSet = true; m_dbClusterSnapshotAttributes = std::move(value); }
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotAttributes(const Aws::Vector<AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute>& value) { SetDbClusterSnapshotAttributes(value); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& WithDbClusterSnapshotAttributes(Aws::Vector<AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute>&& value) { SetDbClusterSnapshotAttributes(std::move(value)); return *this;}
    inline AwsRdsDbClusterSnapshotDetails& AddDbClusterSnapshotAttributes(const AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute& value) { m_dbClusterSnapshotAttributesHasBeenSet = true; m_dbClusterSnapshotAttributes.push_back(value); return *this; }
    inline AwsRdsDbClusterSnapshotDetails& AddDbClusterSnapshotAttributes(AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute&& value) { m_dbClusterSnapshotAttributesHasBeenSet = true; m_dbClusterSnapshotAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    int m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Aws::String m_dbClusterSnapshotIdentifier;
    bool m_dbClusterSnapshotIdentifierHasBeenSet = false;

    bool m_iamDatabaseAuthenticationEnabled;
    bool m_iamDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::Vector<AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute> m_dbClusterSnapshotAttributes;
    bool m_dbClusterSnapshotAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
