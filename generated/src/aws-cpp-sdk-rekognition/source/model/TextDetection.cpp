/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TextDetection.h>
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

TextDetection::TextDetection() : 
    m_detectedTextHasBeenSet(false),
    m_type(TextTypes::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_parentId(0),
    m_parentIdHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_geometryHasBeenSet(false)
{
}

TextDetection::TextDetection(JsonView jsonValue) : 
    m_detectedTextHasBeenSet(false),
    m_type(TextTypes::NOT_SET),
    m_typeHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_parentId(0),
    m_parentIdHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_geometryHasBeenSet(false)
{
  *this = jsonValue;
}

TextDetection& TextDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetectedText"))
  {
    m_detectedText = jsonValue.GetString("DetectedText");

    m_detectedTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TextTypesMapper::GetTextTypesForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentId"))
  {
    m_parentId = jsonValue.GetInteger("ParentId");

    m_parentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  return *this;
}

JsonValue TextDetection::Jsonize() const
{
  JsonValue payload;

  if(m_detectedTextHasBeenSet)
  {
   payload.WithString("DetectedText", m_detectedText);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TextTypesMapper::GetNameForTextTypes(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  if(m_parentIdHasBeenSet)
  {
   payload.WithInteger("ParentId", m_parentId);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
