/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LaunchTemplateDiskConf.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LaunchTemplateDiskConf::LaunchTemplateDiskConf(JsonView jsonValue)
{
  *this = jsonValue;
}

LaunchTemplateDiskConf& LaunchTemplateDiskConf::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInt64("iops");
    m_iopsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("throughput"))
  {
    m_throughput = jsonValue.GetInt64("throughput");
    m_throughputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(jsonValue.GetString("volumeType"));
    m_volumeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue LaunchTemplateDiskConf::Jsonize() const
{
  JsonValue payload;

  if(m_iopsHasBeenSet)
  {
   payload.WithInt64("iops", m_iops);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInt64("throughput", m_throughput);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", VolumeTypeMapper::GetNameForVolumeType(m_volumeType));
  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
