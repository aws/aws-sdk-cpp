/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AdaptersConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

AdaptersConfig::AdaptersConfig() : 
    m_adaptersHasBeenSet(false)
{
}

AdaptersConfig::AdaptersConfig(JsonView jsonValue) : 
    m_adaptersHasBeenSet(false)
{
  *this = jsonValue;
}

AdaptersConfig& AdaptersConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Adapters"))
  {
    Aws::Utils::Array<JsonView> adaptersJsonList = jsonValue.GetArray("Adapters");
    for(unsigned adaptersIndex = 0; adaptersIndex < adaptersJsonList.GetLength(); ++adaptersIndex)
    {
      m_adapters.push_back(adaptersJsonList[adaptersIndex].AsObject());
    }
    m_adaptersHasBeenSet = true;
  }

  return *this;
}

JsonValue AdaptersConfig::Jsonize() const
{
  JsonValue payload;

  if(m_adaptersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adaptersJsonList(m_adapters.size());
   for(unsigned adaptersIndex = 0; adaptersIndex < adaptersJsonList.GetLength(); ++adaptersIndex)
   {
     adaptersJsonList[adaptersIndex].AsObject(m_adapters[adaptersIndex].Jsonize());
   }
   payload.WithArray("Adapters", std::move(adaptersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
