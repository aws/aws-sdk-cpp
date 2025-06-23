/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/EbsBlockDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

EbsBlockDevice::EbsBlockDevice(JsonView jsonValue)
{
  *this = jsonValue;
}

EbsBlockDevice& EbsBlockDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = VolumeTypeEnumMapper::GetVolumeTypeEnumForName(jsonValue.GetString("VolumeType"));
    m_volumeTypeHasBeenSet = true;
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
  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");
    m_iopsHasBeenSet = true;
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
  return *this;
}

JsonValue EbsBlockDevice::Jsonize() const
{
  JsonValue payload;

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", VolumeTypeEnumMapper::GetNameForVolumeTypeEnum(m_volumeType));
  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInteger("Throughput", m_throughput);

  }

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("VolumeSize", m_volumeSize);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
