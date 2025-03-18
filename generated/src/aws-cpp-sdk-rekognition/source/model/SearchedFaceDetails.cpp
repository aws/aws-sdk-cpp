/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchedFaceDetails.h>
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

SearchedFaceDetails::SearchedFaceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchedFaceDetails& SearchedFaceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaceDetail"))
  {
    m_faceDetail = jsonValue.GetObject("FaceDetail");
    m_faceDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchedFaceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_faceDetailHasBeenSet)
  {
   payload.WithObject("FaceDetail", m_faceDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
