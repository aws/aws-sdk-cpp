/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/HlsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

HlsConfiguration::HlsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

HlsConfiguration& HlsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestEndpointPrefix"))
  {
    m_manifestEndpointPrefix = jsonValue.GetString("ManifestEndpointPrefix");
    m_manifestEndpointPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue HlsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestEndpointPrefixHasBeenSet)
  {
   payload.WithString("ManifestEndpointPrefix", m_manifestEndpointPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
