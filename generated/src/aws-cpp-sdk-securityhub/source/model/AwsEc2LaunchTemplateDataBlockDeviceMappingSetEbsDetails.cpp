/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails.h>
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

AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails::AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails() : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeTypeHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails::AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails(JsonView jsonValue) : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("DeleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Throughput"))
  {
    m_throughput = jsonValue.GetInteger("Throughput");

    m_throughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSize"))
  {
    m_volumeSize = jsonValue.GetInteger("VolumeSize");

    m_volumeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");

    m_volumeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("DeleteOnTermination", m_deleteOnTermination);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInteger("Throughput", m_throughput);

  }

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("VolumeSize", m_volumeSize);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
