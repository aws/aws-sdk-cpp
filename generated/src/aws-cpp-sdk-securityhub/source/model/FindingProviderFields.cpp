/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FindingProviderFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

FindingProviderFields::FindingProviderFields(JsonView jsonValue)
{
  *this = jsonValue;
}

FindingProviderFields& FindingProviderFields::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetInteger("Confidence");
    m_confidenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Criticality"))
  {
    m_criticality = jsonValue.GetInteger("Criticality");
    m_criticalityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelatedFindings"))
  {
    Aws::Utils::Array<JsonView> relatedFindingsJsonList = jsonValue.GetArray("RelatedFindings");
    for(unsigned relatedFindingsIndex = 0; relatedFindingsIndex < relatedFindingsJsonList.GetLength(); ++relatedFindingsIndex)
    {
      m_relatedFindings.push_back(relatedFindingsJsonList[relatedFindingsIndex].AsObject());
    }
    m_relatedFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetObject("Severity");
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("Types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(typesJsonList[typesIndex].AsString());
    }
    m_typesHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingProviderFields::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceHasBeenSet)
  {
   payload.WithInteger("Confidence", m_confidence);

  }

  if(m_criticalityHasBeenSet)
  {
   payload.WithInteger("Criticality", m_criticality);

  }

  if(m_relatedFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedFindingsJsonList(m_relatedFindings.size());
   for(unsigned relatedFindingsIndex = 0; relatedFindingsIndex < relatedFindingsJsonList.GetLength(); ++relatedFindingsIndex)
   {
     relatedFindingsJsonList[relatedFindingsIndex].AsObject(m_relatedFindings[relatedFindingsIndex].Jsonize());
   }
   payload.WithArray("RelatedFindings", std::move(relatedFindingsJsonList));

  }

  if(m_severityHasBeenSet)
  {
   payload.WithObject("Severity", m_severity.Jsonize());

  }

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(m_types[typesIndex]);
   }
   payload.WithArray("Types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
