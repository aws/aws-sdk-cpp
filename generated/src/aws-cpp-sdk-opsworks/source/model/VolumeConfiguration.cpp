/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/VolumeConfiguration.h>
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

VolumeConfiguration::VolumeConfiguration() : 
    m_mountPointHasBeenSet(false),
    m_raidLevel(0),
    m_raidLevelHasBeenSet(false),
    m_numberOfDisks(0),
    m_numberOfDisksHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false)
{
}

VolumeConfiguration::VolumeConfiguration(JsonView jsonValue) : 
    m_mountPointHasBeenSet(false),
    m_raidLevel(0),
    m_raidLevelHasBeenSet(false),
    m_numberOfDisks(0),
    m_numberOfDisksHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeConfiguration& VolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MountPoint"))
  {
    m_mountPoint = jsonValue.GetString("MountPoint");

    m_mountPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RaidLevel"))
  {
    m_raidLevel = jsonValue.GetInteger("RaidLevel");

    m_raidLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfDisks"))
  {
    m_numberOfDisks = jsonValue.GetInteger("NumberOfDisks");

    m_numberOfDisksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

    m_encryptedHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_mountPointHasBeenSet)
  {
   payload.WithString("MountPoint", m_mountPoint);

  }

  if(m_raidLevelHasBeenSet)
  {
   payload.WithInteger("RaidLevel", m_raidLevel);

  }

  if(m_numberOfDisksHasBeenSet)
  {
   payload.WithInteger("NumberOfDisks", m_numberOfDisks);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
