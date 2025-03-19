/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UrlConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

UrlConfiguration::UrlConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

UrlConfiguration& UrlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("seedUrls"))
  {
    Aws::Utils::Array<JsonView> seedUrlsJsonList = jsonValue.GetArray("seedUrls");
    for(unsigned seedUrlsIndex = 0; seedUrlsIndex < seedUrlsJsonList.GetLength(); ++seedUrlsIndex)
    {
      m_seedUrls.push_back(seedUrlsJsonList[seedUrlsIndex].AsObject());
    }
    m_seedUrlsHasBeenSet = true;
  }
  return *this;
}

JsonValue UrlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_seedUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> seedUrlsJsonList(m_seedUrls.size());
   for(unsigned seedUrlsIndex = 0; seedUrlsIndex < seedUrlsJsonList.GetLength(); ++seedUrlsIndex)
   {
     seedUrlsJsonList[seedUrlsIndex].AsObject(m_seedUrls[seedUrlsIndex].Jsonize());
   }
   payload.WithArray("seedUrls", std::move(seedUrlsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
