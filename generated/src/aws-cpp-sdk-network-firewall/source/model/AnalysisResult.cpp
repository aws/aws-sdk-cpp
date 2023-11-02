/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AnalysisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

AnalysisResult::AnalysisResult() : 
    m_identifiedRuleIdsHasBeenSet(false),
    m_identifiedType(IdentifiedType::NOT_SET),
    m_identifiedTypeHasBeenSet(false),
    m_analysisDetailHasBeenSet(false)
{
}

AnalysisResult::AnalysisResult(JsonView jsonValue) : 
    m_identifiedRuleIdsHasBeenSet(false),
    m_identifiedType(IdentifiedType::NOT_SET),
    m_identifiedTypeHasBeenSet(false),
    m_analysisDetailHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisResult& AnalysisResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentifiedRuleIds"))
  {
    Aws::Utils::Array<JsonView> identifiedRuleIdsJsonList = jsonValue.GetArray("IdentifiedRuleIds");
    for(unsigned identifiedRuleIdsIndex = 0; identifiedRuleIdsIndex < identifiedRuleIdsJsonList.GetLength(); ++identifiedRuleIdsIndex)
    {
      m_identifiedRuleIds.push_back(identifiedRuleIdsJsonList[identifiedRuleIdsIndex].AsString());
    }
    m_identifiedRuleIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifiedType"))
  {
    m_identifiedType = IdentifiedTypeMapper::GetIdentifiedTypeForName(jsonValue.GetString("IdentifiedType"));

    m_identifiedTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalysisDetail"))
  {
    m_analysisDetail = jsonValue.GetString("AnalysisDetail");

    m_analysisDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisResult::Jsonize() const
{
  JsonValue payload;

  if(m_identifiedRuleIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifiedRuleIdsJsonList(m_identifiedRuleIds.size());
   for(unsigned identifiedRuleIdsIndex = 0; identifiedRuleIdsIndex < identifiedRuleIdsJsonList.GetLength(); ++identifiedRuleIdsIndex)
   {
     identifiedRuleIdsJsonList[identifiedRuleIdsIndex].AsString(m_identifiedRuleIds[identifiedRuleIdsIndex]);
   }
   payload.WithArray("IdentifiedRuleIds", std::move(identifiedRuleIdsJsonList));

  }

  if(m_identifiedTypeHasBeenSet)
  {
   payload.WithString("IdentifiedType", IdentifiedTypeMapper::GetNameForIdentifiedType(m_identifiedType));
  }

  if(m_analysisDetailHasBeenSet)
  {
   payload.WithString("AnalysisDetail", m_analysisDetail);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
