/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetSource.h>
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

DatasetSource::DatasetSource() : 
    m_groundTruthManifestHasBeenSet(false),
    m_datasetArnHasBeenSet(false)
{
}

DatasetSource::DatasetSource(JsonView jsonValue) : 
    m_groundTruthManifestHasBeenSet(false),
    m_datasetArnHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetSource& DatasetSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroundTruthManifest"))
  {
    m_groundTruthManifest = jsonValue.GetObject("GroundTruthManifest");

    m_groundTruthManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetSource::Jsonize() const
{
  JsonValue payload;

  if(m_groundTruthManifestHasBeenSet)
  {
   payload.WithObject("GroundTruthManifest", m_groundTruthManifest.Jsonize());

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
