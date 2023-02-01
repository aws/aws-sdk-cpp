/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesTcpFlags.h>
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

RuleGroupSourceStatelessRuleMatchAttributesTcpFlags::RuleGroupSourceStatelessRuleMatchAttributesTcpFlags() : 
    m_flagsHasBeenSet(false),
    m_masksHasBeenSet(false)
{
}

RuleGroupSourceStatelessRuleMatchAttributesTcpFlags::RuleGroupSourceStatelessRuleMatchAttributesTcpFlags(JsonView jsonValue) : 
    m_flagsHasBeenSet(false),
    m_masksHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& RuleGroupSourceStatelessRuleMatchAttributesTcpFlags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Flags"))
  {
    Aws::Utils::Array<JsonView> flagsJsonList = jsonValue.GetArray("Flags");
    for(unsigned flagsIndex = 0; flagsIndex < flagsJsonList.GetLength(); ++flagsIndex)
    {
      m_flags.push_back(flagsJsonList[flagsIndex].AsString());
    }
    m_flagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Masks"))
  {
    Aws::Utils::Array<JsonView> masksJsonList = jsonValue.GetArray("Masks");
    for(unsigned masksIndex = 0; masksIndex < masksJsonList.GetLength(); ++masksIndex)
    {
      m_masks.push_back(masksJsonList[masksIndex].AsString());
    }
    m_masksHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatelessRuleMatchAttributesTcpFlags::Jsonize() const
{
  JsonValue payload;

  if(m_flagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> flagsJsonList(m_flags.size());
   for(unsigned flagsIndex = 0; flagsIndex < flagsJsonList.GetLength(); ++flagsIndex)
   {
     flagsJsonList[flagsIndex].AsString(m_flags[flagsIndex]);
   }
   payload.WithArray("Flags", std::move(flagsJsonList));

  }

  if(m_masksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> masksJsonList(m_masks.size());
   for(unsigned masksIndex = 0; masksIndex < masksJsonList.GetLength(); ++masksIndex)
   {
     masksJsonList[masksIndex].AsString(m_masks[masksIndex]);
   }
   payload.WithArray("Masks", std::move(masksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
