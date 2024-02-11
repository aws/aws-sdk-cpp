/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/UnsuccessfulFaceDisassociation.h>
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

UnsuccessfulFaceDisassociation::UnsuccessfulFaceDisassociation() : 
    m_faceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
}

UnsuccessfulFaceDisassociation::UnsuccessfulFaceDisassociation(JsonView jsonValue) : 
    m_faceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
  *this = jsonValue;
}

UnsuccessfulFaceDisassociation& UnsuccessfulFaceDisassociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaceId"))
  {
    m_faceId = jsonValue.GetString("FaceId");

    m_faceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("Reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(UnsuccessfulFaceDisassociationReasonMapper::GetUnsuccessfulFaceDisassociationReasonForName(reasonsJsonList[reasonsIndex].AsString()));
    }
    m_reasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsuccessfulFaceDisassociation::Jsonize() const
{
  JsonValue payload;

  if(m_faceIdHasBeenSet)
  {
   payload.WithString("FaceId", m_faceId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_reasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonsJsonList(m_reasons.size());
   for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
   {
     reasonsJsonList[reasonsIndex].AsString(UnsuccessfulFaceDisassociationReasonMapper::GetNameForUnsuccessfulFaceDisassociationReason(m_reasons[reasonsIndex]));
   }
   payload.WithArray("Reasons", std::move(reasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
