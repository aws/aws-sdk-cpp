/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/HarvestedLowLatencyHlsManifest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

HarvestedLowLatencyHlsManifest::HarvestedLowLatencyHlsManifest(JsonView jsonValue)
{
  *this = jsonValue;
}

HarvestedLowLatencyHlsManifest& HarvestedLowLatencyHlsManifest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestName"))
  {
    m_manifestName = jsonValue.GetString("ManifestName");
    m_manifestNameHasBeenSet = true;
  }
  return *this;
}

JsonValue HarvestedLowLatencyHlsManifest::Jsonize() const
{
  JsonValue payload;

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("ManifestName", m_manifestName);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
