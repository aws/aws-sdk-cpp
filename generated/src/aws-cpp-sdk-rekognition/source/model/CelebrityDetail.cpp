/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CelebrityDetail.h>
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

CelebrityDetail::CelebrityDetail() : 
    m_urlsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_faceHasBeenSet(false),
    m_knownGenderHasBeenSet(false)
{
}

CelebrityDetail::CelebrityDetail(JsonView jsonValue) : 
    m_urlsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_faceHasBeenSet(false),
    m_knownGenderHasBeenSet(false)
{
  *this = jsonValue;
}

CelebrityDetail& CelebrityDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Urls"))
  {
    Aws::Utils::Array<JsonView> urlsJsonList = jsonValue.GetArray("Urls");
    for(unsigned urlsIndex = 0; urlsIndex < urlsJsonList.GetLength(); ++urlsIndex)
    {
      m_urls.push_back(urlsJsonList[urlsIndex].AsString());
    }
    m_urlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");

    m_faceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KnownGender"))
  {
    m_knownGender = jsonValue.GetObject("KnownGender");

    m_knownGenderHasBeenSet = true;
  }

  return *this;
}

JsonValue CelebrityDetail::Jsonize() const
{
  JsonValue payload;

  if(m_urlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> urlsJsonList(m_urls.size());
   for(unsigned urlsIndex = 0; urlsIndex < urlsJsonList.GetLength(); ++urlsIndex)
   {
     urlsJsonList[urlsIndex].AsString(m_urls[urlsIndex]);
   }
   payload.WithArray("Urls", std::move(urlsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_faceHasBeenSet)
  {
   payload.WithObject("Face", m_face.Jsonize());

  }

  if(m_knownGenderHasBeenSet)
  {
   payload.WithObject("KnownGender", m_knownGender.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
