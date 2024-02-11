/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/LogSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

LogSource::LogSource() : 
    m_accountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

LogSource::LogSource(JsonView jsonValue) : 
    m_accountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
  *this = jsonValue;
}

LogSource& LogSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("account"))
  {
    m_account = jsonValue.GetString("account");

    m_accountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue LogSource::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("account", m_account);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
