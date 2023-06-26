/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/EquipmentDetection.h>
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

EquipmentDetection::EquipmentDetection() : 
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_type(ProtectiveEquipmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_coversBodyPartHasBeenSet(false)
{
}

EquipmentDetection::EquipmentDetection(JsonView jsonValue) : 
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_type(ProtectiveEquipmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_coversBodyPartHasBeenSet(false)
{
  *this = jsonValue;
}

EquipmentDetection& EquipmentDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ProtectiveEquipmentTypeMapper::GetProtectiveEquipmentTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoversBodyPart"))
  {
    m_coversBodyPart = jsonValue.GetObject("CoversBodyPart");

    m_coversBodyPartHasBeenSet = true;
  }

  return *this;
}

JsonValue EquipmentDetection::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ProtectiveEquipmentTypeMapper::GetNameForProtectiveEquipmentType(m_type));
  }

  if(m_coversBodyPartHasBeenSet)
  {
   payload.WithObject("CoversBodyPart", m_coversBodyPart.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
