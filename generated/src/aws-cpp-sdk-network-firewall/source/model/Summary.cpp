/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/Summary.h>
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

Summary::Summary(JsonView jsonValue)
{
  *this = jsonValue;
}

Summary& Summary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleSummaries"))
  {
    Aws::Utils::Array<JsonView> ruleSummariesJsonList = jsonValue.GetArray("RuleSummaries");
    for(unsigned ruleSummariesIndex = 0; ruleSummariesIndex < ruleSummariesJsonList.GetLength(); ++ruleSummariesIndex)
    {
      m_ruleSummaries.push_back(ruleSummariesJsonList[ruleSummariesIndex].AsObject());
    }
    m_ruleSummariesHasBeenSet = true;
  }
  return *this;
}

JsonValue Summary::Jsonize() const
{
  JsonValue payload;

  if(m_ruleSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleSummariesJsonList(m_ruleSummaries.size());
   for(unsigned ruleSummariesIndex = 0; ruleSummariesIndex < ruleSummariesJsonList.GetLength(); ++ruleSummariesIndex)
   {
     ruleSummariesJsonList[ruleSummariesIndex].AsObject(m_ruleSummaries[ruleSummariesIndex].Jsonize());
   }
   payload.WithArray("RuleSummaries", std::move(ruleSummariesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
