/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Face.h>
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

Face::Face(JsonView jsonValue)
{
  *this = jsonValue;
}

Face& Face::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FaceId"))
  {
    m_faceId = jsonValue.GetString("FaceId");
    m_faceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");
    m_boundingBoxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");
    m_imageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExternalImageId"))
  {
    m_externalImageId = jsonValue.GetString("ExternalImageId");
    m_externalImageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");
    m_confidenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexFacesModelVersion"))
  {
    m_indexFacesModelVersion = jsonValue.GetString("IndexFacesModelVersion");
    m_indexFacesModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Face::Jsonize() const
{
  JsonValue payload;

  if(m_faceIdHasBeenSet)
  {
   payload.WithString("FaceId", m_faceId);

  }

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_externalImageIdHasBeenSet)
  {
   payload.WithString("ExternalImageId", m_externalImageId);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_indexFacesModelVersionHasBeenSet)
  {
   payload.WithString("IndexFacesModelVersion", m_indexFacesModelVersion);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
