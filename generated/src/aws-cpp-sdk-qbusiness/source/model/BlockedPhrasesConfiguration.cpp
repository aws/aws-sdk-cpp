/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/BlockedPhrasesConfiguration.h>
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

BlockedPhrasesConfiguration::BlockedPhrasesConfiguration() : 
    m_blockedPhrasesHasBeenSet(false),
    m_systemMessageOverrideHasBeenSet(false)
{
}

BlockedPhrasesConfiguration::BlockedPhrasesConfiguration(JsonView jsonValue) : 
    m_blockedPhrasesHasBeenSet(false),
    m_systemMessageOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

BlockedPhrasesConfiguration& BlockedPhrasesConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blockedPhrases"))
  {
    Aws::Utils::Array<JsonView> blockedPhrasesJsonList = jsonValue.GetArray("blockedPhrases");
    for(unsigned blockedPhrasesIndex = 0; blockedPhrasesIndex < blockedPhrasesJsonList.GetLength(); ++blockedPhrasesIndex)
    {
      m_blockedPhrases.push_back(blockedPhrasesJsonList[blockedPhrasesIndex].AsString());
    }
    m_blockedPhrasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemMessageOverride"))
  {
    m_systemMessageOverride = jsonValue.GetString("systemMessageOverride");

    m_systemMessageOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockedPhrasesConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_blockedPhrasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedPhrasesJsonList(m_blockedPhrases.size());
   for(unsigned blockedPhrasesIndex = 0; blockedPhrasesIndex < blockedPhrasesJsonList.GetLength(); ++blockedPhrasesIndex)
   {
     blockedPhrasesJsonList[blockedPhrasesIndex].AsString(m_blockedPhrases[blockedPhrasesIndex]);
   }
   payload.WithArray("blockedPhrases", std::move(blockedPhrasesJsonList));

  }

  if(m_systemMessageOverrideHasBeenSet)
  {
   payload.WithString("systemMessageOverride", m_systemMessageOverride);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
