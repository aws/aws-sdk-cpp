/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/PartnerWatermarking.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

PartnerWatermarking::PartnerWatermarking() : 
    m_nexguardFileMarkerSettingsHasBeenSet(false)
{
}

PartnerWatermarking::PartnerWatermarking(JsonView jsonValue) : 
    m_nexguardFileMarkerSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

PartnerWatermarking& PartnerWatermarking::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nexguardFileMarkerSettings"))
  {
    m_nexguardFileMarkerSettings = jsonValue.GetObject("nexguardFileMarkerSettings");

    m_nexguardFileMarkerSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue PartnerWatermarking::Jsonize() const
{
  JsonValue payload;

  if(m_nexguardFileMarkerSettingsHasBeenSet)
  {
   payload.WithObject("nexguardFileMarkerSettings", m_nexguardFileMarkerSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
