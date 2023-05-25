/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35Descriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Scte35Descriptor::Scte35Descriptor() : 
    m_scte35DescriptorSettingsHasBeenSet(false)
{
}

Scte35Descriptor::Scte35Descriptor(JsonView jsonValue) : 
    m_scte35DescriptorSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35Descriptor& Scte35Descriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scte35DescriptorSettings"))
  {
    m_scte35DescriptorSettings = jsonValue.GetObject("scte35DescriptorSettings");

    m_scte35DescriptorSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35Descriptor::Jsonize() const
{
  JsonValue payload;

  if(m_scte35DescriptorSettingsHasBeenSet)
  {
   payload.WithObject("scte35DescriptorSettings", m_scte35DescriptorSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
