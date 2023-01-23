/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProtectiveEquipmentBodyPart.h>
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

ProtectiveEquipmentBodyPart::ProtectiveEquipmentBodyPart() : 
    m_name(BodyPart::NOT_SET),
    m_nameHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_equipmentDetectionsHasBeenSet(false)
{
}

ProtectiveEquipmentBodyPart::ProtectiveEquipmentBodyPart(JsonView jsonValue) : 
    m_name(BodyPart::NOT_SET),
    m_nameHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_equipmentDetectionsHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectiveEquipmentBodyPart& ProtectiveEquipmentBodyPart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = BodyPartMapper::GetBodyPartForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EquipmentDetections"))
  {
    Aws::Utils::Array<JsonView> equipmentDetectionsJsonList = jsonValue.GetArray("EquipmentDetections");
    for(unsigned equipmentDetectionsIndex = 0; equipmentDetectionsIndex < equipmentDetectionsJsonList.GetLength(); ++equipmentDetectionsIndex)
    {
      m_equipmentDetections.push_back(equipmentDetectionsJsonList[equipmentDetectionsIndex].AsObject());
    }
    m_equipmentDetectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectiveEquipmentBodyPart::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", BodyPartMapper::GetNameForBodyPart(m_name));
  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_equipmentDetectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> equipmentDetectionsJsonList(m_equipmentDetections.size());
   for(unsigned equipmentDetectionsIndex = 0; equipmentDetectionsIndex < equipmentDetectionsJsonList.GetLength(); ++equipmentDetectionsIndex)
   {
     equipmentDetectionsJsonList[equipmentDetectionsIndex].AsObject(m_equipmentDetections[equipmentDetectionsIndex].Jsonize());
   }
   payload.WithArray("EquipmentDetections", std::move(equipmentDetectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
