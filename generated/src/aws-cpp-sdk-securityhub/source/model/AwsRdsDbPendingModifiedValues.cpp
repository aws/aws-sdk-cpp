/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbPendingModifiedValues.h>
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

AwsRdsDbPendingModifiedValues::AwsRdsDbPendingModifiedValues() : 
    m_dbInstanceClassHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_caCertificateIdentifierHasBeenSet(false),
    m_dbSubnetGroupNameHasBeenSet(false),
    m_pendingCloudWatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false)
{
}

AwsRdsDbPendingModifiedValues::AwsRdsDbPendingModifiedValues(JsonView jsonValue) : 
    m_dbInstanceClassHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_caCertificateIdentifierHasBeenSet(false),
    m_dbSubnetGroupNameHasBeenSet(false),
    m_pendingCloudWatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbPendingModifiedValues& AwsRdsDbPendingModifiedValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DbInstanceClass"))
  {
    m_dbInstanceClass = jsonValue.GetString("DbInstanceClass");

    m_dbInstanceClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("AllocatedStorage");

    m_allocatedStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUserPassword"))
  {
    m_masterUserPassword = jsonValue.GetString("MasterUserPassword");

    m_masterUserPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupRetentionPeriod"))
  {
    m_backupRetentionPeriod = jsonValue.GetInteger("BackupRetentionPeriod");

    m_backupRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiAZ"))
  {
    m_multiAZ = jsonValue.GetBool("MultiAZ");

    m_multiAZHasBeenSet = true;
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

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbInstanceIdentifier"))
  {
    m_dbInstanceIdentifier = jsonValue.GetString("DbInstanceIdentifier");

    m_dbInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaCertificateIdentifier"))
  {
    m_caCertificateIdentifier = jsonValue.GetString("CaCertificateIdentifier");

    m_caCertificateIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSubnetGroupName"))
  {
    m_dbSubnetGroupName = jsonValue.GetString("DbSubnetGroupName");

    m_dbSubnetGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingCloudWatchLogsExports"))
  {
    m_pendingCloudWatchLogsExports = jsonValue.GetObject("PendingCloudWatchLogsExports");

    m_pendingCloudWatchLogsExportsHasBeenSet = true;
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

  return *this;
}

JsonValue AwsRdsDbPendingModifiedValues::Jsonize() const
{
  JsonValue payload;

  if(m_dbInstanceClassHasBeenSet)
  {
   payload.WithString("DbInstanceClass", m_dbInstanceClass);

  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("AllocatedStorage", m_allocatedStorage);

  }

  if(m_masterUserPasswordHasBeenSet)
  {
   payload.WithString("MasterUserPassword", m_masterUserPassword);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("BackupRetentionPeriod", m_backupRetentionPeriod);

  }

  if(m_multiAZHasBeenSet)
  {
   payload.WithBool("MultiAZ", m_multiAZ);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("LicenseModel", m_licenseModel);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_dbInstanceIdentifierHasBeenSet)
  {
   payload.WithString("DbInstanceIdentifier", m_dbInstanceIdentifier);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_caCertificateIdentifierHasBeenSet)
  {
   payload.WithString("CaCertificateIdentifier", m_caCertificateIdentifier);

  }

  if(m_dbSubnetGroupNameHasBeenSet)
  {
   payload.WithString("DbSubnetGroupName", m_dbSubnetGroupName);

  }

  if(m_pendingCloudWatchLogsExportsHasBeenSet)
  {
   payload.WithObject("PendingCloudWatchLogsExports", m_pendingCloudWatchLogsExports.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
