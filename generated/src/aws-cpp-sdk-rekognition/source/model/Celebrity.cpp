/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Celebrity.h>
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

Celebrity::Celebrity() : 
    m_urlsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_faceHasBeenSet(false),
    m_matchConfidence(0.0),
    m_matchConfidenceHasBeenSet(false),
    m_knownGenderHasBeenSet(false)
{
}

Celebrity::Celebrity(JsonView jsonValue) : 
    m_urlsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_faceHasBeenSet(false),
    m_matchConfidence(0.0),
    m_matchConfidenceHasBeenSet(false),
    m_knownGenderHasBeenSet(false)
{
  *this = jsonValue;
}

Celebrity& Celebrity::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");

    m_faceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchConfidence"))
  {
    m_matchConfidence = jsonValue.GetDouble("MatchConfidence");

    m_matchConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KnownGender"))
  {
    m_knownGender = jsonValue.GetObject("KnownGender");

    m_knownGenderHasBeenSet = true;
  }

  return *this;
}

JsonValue Celebrity::Jsonize() const
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

  if(m_faceHasBeenSet)
  {
   payload.WithObject("Face", m_face.Jsonize());

  }

  if(m_matchConfidenceHasBeenSet)
  {
   payload.WithDouble("MatchConfidence", m_matchConfidence);

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
