/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CompareFacesMatch.h>
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

CompareFacesMatch::CompareFacesMatch(JsonView jsonValue)
{
  *this = jsonValue;
}

CompareFacesMatch& CompareFacesMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Similarity"))
  {
    m_similarity = jsonValue.GetDouble("Similarity");
    m_similarityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Face"))
  {
    m_face = jsonValue.GetObject("Face");
    m_faceHasBeenSet = true;
  }
  return *this;
}

JsonValue CompareFacesMatch::Jsonize() const
{
  JsonValue payload;

  if(m_similarityHasBeenSet)
  {
   payload.WithDouble("Similarity", m_similarity);

  }

  if(m_faceHasBeenSet)
  {
   payload.WithObject("Face", m_face.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
