/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Asset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Asset::Asset() : 
    m_groundTruthManifestHasBeenSet(false)
{
}

Asset::Asset(JsonView jsonValue) : 
    m_groundTruthManifestHasBeenSet(false)
{
  *this = jsonValue;
}

Asset& Asset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroundTruthManifest"))
  {
    m_groundTruthManifest = jsonValue.GetObject("GroundTruthManifest");

    m_groundTruthManifestHasBeenSet = true;
  }

  return *this;
}

JsonValue Asset::Jsonize() const
{
  JsonValue payload;

  if(m_groundTruthManifestHasBeenSet)
  {
   payload.WithObject("GroundTruthManifest", m_groundTruthManifest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
