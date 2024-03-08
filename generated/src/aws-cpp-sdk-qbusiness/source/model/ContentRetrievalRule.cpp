/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ContentRetrievalRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ContentRetrievalRule::ContentRetrievalRule() : 
    m_eligibleDataSourcesHasBeenSet(false)
{
}

ContentRetrievalRule::ContentRetrievalRule(JsonView jsonValue) : 
    m_eligibleDataSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ContentRetrievalRule& ContentRetrievalRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eligibleDataSources"))
  {
    Aws::Utils::Array<JsonView> eligibleDataSourcesJsonList = jsonValue.GetArray("eligibleDataSources");
    for(unsigned eligibleDataSourcesIndex = 0; eligibleDataSourcesIndex < eligibleDataSourcesJsonList.GetLength(); ++eligibleDataSourcesIndex)
    {
      m_eligibleDataSources.push_back(eligibleDataSourcesJsonList[eligibleDataSourcesIndex].AsObject());
    }
    m_eligibleDataSourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentRetrievalRule::Jsonize() const
{
  JsonValue payload;

  if(m_eligibleDataSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eligibleDataSourcesJsonList(m_eligibleDataSources.size());
   for(unsigned eligibleDataSourcesIndex = 0; eligibleDataSourcesIndex < eligibleDataSourcesJsonList.GetLength(); ++eligibleDataSourcesIndex)
   {
     eligibleDataSourcesJsonList[eligibleDataSourcesIndex].AsObject(m_eligibleDataSources[eligibleDataSourcesIndex].Jsonize());
   }
   payload.WithArray("eligibleDataSources", std::move(eligibleDataSourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
