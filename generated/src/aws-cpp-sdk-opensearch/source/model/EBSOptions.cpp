﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/EBSOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

EBSOptions::EBSOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

EBSOptions& EBSOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EBSEnabled"))
  {
    m_eBSEnabled = jsonValue.GetBool("EBSEnabled");
    m_eBSEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(jsonValue.GetString("VolumeType"));
    m_volumeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeSize"))
  {
    m_volumeSize = jsonValue.GetInteger("VolumeSize");
    m_volumeSizeHasBeenSet = true;
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
  return *this;
}

JsonValue EBSOptions::Jsonize() const
{
  JsonValue payload;

  if(m_eBSEnabledHasBeenSet)
  {
   payload.WithBool("EBSEnabled", m_eBSEnabled);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", VolumeTypeMapper::GetNameForVolumeType(m_volumeType));
  }

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("VolumeSize", m_volumeSize);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInteger("Throughput", m_throughput);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
