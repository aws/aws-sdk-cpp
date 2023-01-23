/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/EbsBlockDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

EbsBlockDevice::EbsBlockDevice() : 
    m_snapshotIdHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false)
{
}

EbsBlockDevice::EbsBlockDevice(JsonView jsonValue) : 
    m_snapshotIdHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false)
{
  *this = jsonValue;
}

EbsBlockDevice& EbsBlockDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSize"))
  {
    m_volumeSize = jsonValue.GetInteger("VolumeSize");

    m_volumeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(jsonValue.GetString("VolumeType"));

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("DeleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsBlockDevice::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("VolumeSize", m_volumeSize);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", VolumeTypeMapper::GetNameForVolumeType(m_volumeType));
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("DeleteOnTermination", m_deleteOnTermination);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
