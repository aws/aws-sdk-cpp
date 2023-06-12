/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UnsearchedFace.h>
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

UnsearchedFace::UnsearchedFace() : 
    m_faceDetailsHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
}

UnsearchedFace::UnsearchedFace(JsonView jsonValue) : 
    m_faceDetailsHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
  *this = jsonValue;
}

UnsearchedFace& UnsearchedFace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaceDetails"))
  {
    m_faceDetails = jsonValue.GetObject("FaceDetails");

    m_faceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("Reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(UnsearchedFaceReasonMapper::GetUnsearchedFaceReasonForName(reasonsJsonList[reasonsIndex].AsString()));
    }
    m_reasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsearchedFace::Jsonize() const
{
  JsonValue payload;

  if(m_faceDetailsHasBeenSet)
  {
   payload.WithObject("FaceDetails", m_faceDetails.Jsonize());

  }

  if(m_reasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonsJsonList(m_reasons.size());
   for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
   {
     reasonsJsonList[reasonsIndex].AsString(UnsearchedFaceReasonMapper::GetNameForUnsearchedFaceReason(m_reasons[reasonsIndex]));
   }
   payload.WithArray("Reasons", std::move(reasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
