/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UnindexedFace.h>
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

UnindexedFace::UnindexedFace() : 
    m_reasonsHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
}

UnindexedFace::UnindexedFace(JsonView jsonValue) : 
    m_reasonsHasBeenSet(false),
    m_faceDetailHasBeenSet(false)
{
  *this = jsonValue;
}

UnindexedFace& UnindexedFace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("Reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(ReasonMapper::GetReasonForName(reasonsJsonList[reasonsIndex].AsString()));
    }
    m_reasonsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaceDetail"))
  {
    m_faceDetail = jsonValue.GetObject("FaceDetail");

    m_faceDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue UnindexedFace::Jsonize() const
{
  JsonValue payload;

  if(m_reasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonsJsonList(m_reasons.size());
   for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
   {
     reasonsJsonList[reasonsIndex].AsString(ReasonMapper::GetNameForReason(m_reasons[reasonsIndex]));
   }
   payload.WithArray("Reasons", std::move(reasonsJsonList));

  }

  if(m_faceDetailHasBeenSet)
  {
   payload.WithObject("FaceDetail", m_faceDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
