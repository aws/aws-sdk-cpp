/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbSnapshotDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsDbSnapshotDetails::AwsRdsDbSnapshotDetails() : 
    m_dbSnapshotIdentifierHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceDbSnapshotIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_iamDatabaseAuthenticationEnabled(false),
    m_iamDatabaseAuthenticationEnabledHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false)
{
}

AwsRdsDbSnapshotDetails::AwsRdsDbSnapshotDetails(JsonView jsonValue) : 
    m_dbSnapshotIdentifierHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceDbSnapshotIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_iamDatabaseAuthenticationEnabled(false),
    m_iamDatabaseAuthenticationEnabledHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbSnapshotDetails& AwsRdsDbSnapshotDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DbSnapshotIdentifier"))
  {
    m_dbSnapshotIdentifier = jsonValue.GetString("DbSnapshotIdentifier");

    m_dbSnapshotIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbInstanceIdentifier"))
  {
    m_dbInstanceIdentifier = jsonValue.GetString("DbInstanceIdentifier");

    m_dbInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotCreateTime"))
  {
    m_snapshotCreateTime = jsonValue.GetString("SnapshotCreateTime");

    m_snapshotCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCreateTime"))
  {
    m_instanceCreateTime = jsonValue.GetString("InstanceCreateTime");

    m_instanceCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUsername"))
  {
    m_masterUsername = jsonValue.GetString("MasterUsername");

    m_masterUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseModel"))
  {
    m_licenseModel = jsonValue.GetString("LicenseModel");

    m_licenseModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotType"))
  {
    m_snapshotType = jsonValue.GetString("SnapshotType");

    m_snapshotTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptionGroupName"))
  {
    m_optionGroupName = jsonValue.GetString("OptionGroupName");

    m_optionGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentProgress"))
  {
    m_percentProgress = jsonValue.GetInteger("PercentProgress");

    m_percentProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("SourceRegion");

    m_sourceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDbSnapshotIdentifier"))
  {
    m_sourceDbSnapshotIdentifier = jsonValue.GetString("SourceDbSnapshotIdentifier");

    m_sourceDbSnapshotIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TdeCredentialArn"))
  {
    m_tdeCredentialArn = jsonValue.GetString("TdeCredentialArn");

    m_tdeCredentialArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamDatabaseAuthenticationEnabled"))
  {
    m_iamDatabaseAuthenticationEnabled = jsonValue.GetBool("IamDatabaseAuthenticationEnabled");

    m_iamDatabaseAuthenticationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessorFeatures"))
  {
    Aws::Utils::Array<JsonView> processorFeaturesJsonList = jsonValue.GetArray("ProcessorFeatures");
    for(unsigned processorFeaturesIndex = 0; processorFeaturesIndex < processorFeaturesJsonList.GetLength(); ++processorFeaturesIndex)
    {
      m_processorFeatures.push_back(processorFeaturesJsonList[processorFeaturesIndex].AsObject());
    }
    m_processorFeaturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbiResourceId"))
  {
    m_dbiResourceId = jsonValue.GetString("DbiResourceId");

    m_dbiResourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbSnapshotDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dbSnapshotIdentifierHasBeenSet)
  {
   payload.WithString("DbSnapshotIdentifier", m_dbSnapshotIdentifier);

  }

  if(m_dbInstanceIdentifierHasBeenSet)
  {
   payload.WithString("DbInstanceIdentifier", m_dbInstanceIdentifier);

  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
   payload.WithString("SnapshotCreateTime", m_snapshotCreateTime);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_instanceCreateTimeHasBeenSet)
  {
   payload.WithString("InstanceCreateTime", m_instanceCreateTime);

  }

  if(m_masterUsernameHasBeenSet)
  {
   payload.WithString("MasterUsername", m_masterUsername);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("LicenseModel", m_licenseModel);

  }

  if(m_snapshotTypeHasBeenSet)
  {
   payload.WithString("SnapshotType", m_snapshotType);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_optionGroupNameHasBeenSet)
  {
   payload.WithString("OptionGroupName", m_optionGroupName);

  }

  if(m_percentProgressHasBeenSet)
  {
   payload.WithInteger("PercentProgress", m_percentProgress);

  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("SourceRegion", m_sourceRegion);

  }

  if(m_sourceDbSnapshotIdentifierHasBeenSet)
  {
   payload.WithString("SourceDbSnapshotIdentifier", m_sourceDbSnapshotIdentifier);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_tdeCredentialArnHasBeenSet)
  {
   payload.WithString("TdeCredentialArn", m_tdeCredentialArn);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_iamDatabaseAuthenticationEnabledHasBeenSet)
  {
   payload.WithBool("IamDatabaseAuthenticationEnabled", m_iamDatabaseAuthenticationEnabled);

  }

  if(m_processorFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processorFeaturesJsonList(m_processorFeatures.size());
   for(unsigned processorFeaturesIndex = 0; processorFeaturesIndex < processorFeaturesJsonList.GetLength(); ++processorFeaturesIndex)
   {
     processorFeaturesJsonList[processorFeaturesIndex].AsObject(m_processorFeatures[processorFeaturesIndex].Jsonize());
   }
   payload.WithArray("ProcessorFeatures", std::move(processorFeaturesJsonList));

  }

  if(m_dbiResourceIdHasBeenSet)
  {
   payload.WithString("DbiResourceId", m_dbiResourceId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
