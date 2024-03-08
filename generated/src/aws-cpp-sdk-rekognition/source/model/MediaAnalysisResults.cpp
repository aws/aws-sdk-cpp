/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisResults.h>
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

MediaAnalysisResults::MediaAnalysisResults() : 
    m_s3ObjectHasBeenSet(false),
    m_modelVersionsHasBeenSet(false)
{
}

MediaAnalysisResults::MediaAnalysisResults(JsonView jsonValue) : 
    m_s3ObjectHasBeenSet(false),
    m_modelVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

MediaAnalysisResults& MediaAnalysisResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Object"))
  {
    m_s3Object = jsonValue.GetObject("S3Object");

    m_s3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersions"))
  {
    m_modelVersions = jsonValue.GetObject("ModelVersions");

    m_modelVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaAnalysisResults::Jsonize() const
{
  JsonValue payload;

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("S3Object", m_s3Object.Jsonize());

  }

  if(m_modelVersionsHasBeenSet)
  {
   payload.WithObject("ModelVersions", m_modelVersions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
