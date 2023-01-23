/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProtectiveEquipmentSummarizationAttributes.h>
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

ProtectiveEquipmentSummarizationAttributes::ProtectiveEquipmentSummarizationAttributes() : 
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_requiredEquipmentTypesHasBeenSet(false)
{
}

ProtectiveEquipmentSummarizationAttributes::ProtectiveEquipmentSummarizationAttributes(JsonView jsonValue) : 
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_requiredEquipmentTypesHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectiveEquipmentSummarizationAttributes& ProtectiveEquipmentSummarizationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinConfidence"))
  {
    m_minConfidence = jsonValue.GetDouble("MinConfidence");

    m_minConfidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiredEquipmentTypes"))
  {
    Aws::Utils::Array<JsonView> requiredEquipmentTypesJsonList = jsonValue.GetArray("RequiredEquipmentTypes");
    for(unsigned requiredEquipmentTypesIndex = 0; requiredEquipmentTypesIndex < requiredEquipmentTypesJsonList.GetLength(); ++requiredEquipmentTypesIndex)
    {
      m_requiredEquipmentTypes.push_back(ProtectiveEquipmentTypeMapper::GetProtectiveEquipmentTypeForName(requiredEquipmentTypesJsonList[requiredEquipmentTypesIndex].AsString()));
    }
    m_requiredEquipmentTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectiveEquipmentSummarizationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  if(m_requiredEquipmentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredEquipmentTypesJsonList(m_requiredEquipmentTypes.size());
   for(unsigned requiredEquipmentTypesIndex = 0; requiredEquipmentTypesIndex < requiredEquipmentTypesJsonList.GetLength(); ++requiredEquipmentTypesIndex)
   {
     requiredEquipmentTypesJsonList[requiredEquipmentTypesIndex].AsString(ProtectiveEquipmentTypeMapper::GetNameForProtectiveEquipmentType(m_requiredEquipmentTypes[requiredEquipmentTypesIndex]));
   }
   payload.WithArray("RequiredEquipmentTypes", std::move(requiredEquipmentTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
