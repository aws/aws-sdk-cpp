/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/BrowserExtensionConfiguration.h>
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

BrowserExtensionConfiguration::BrowserExtensionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BrowserExtensionConfiguration& BrowserExtensionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabledBrowserExtensions"))
  {
    Aws::Utils::Array<JsonView> enabledBrowserExtensionsJsonList = jsonValue.GetArray("enabledBrowserExtensions");
    for(unsigned enabledBrowserExtensionsIndex = 0; enabledBrowserExtensionsIndex < enabledBrowserExtensionsJsonList.GetLength(); ++enabledBrowserExtensionsIndex)
    {
      m_enabledBrowserExtensions.push_back(BrowserExtensionMapper::GetBrowserExtensionForName(enabledBrowserExtensionsJsonList[enabledBrowserExtensionsIndex].AsString()));
    }
    m_enabledBrowserExtensionsHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserExtensionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledBrowserExtensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledBrowserExtensionsJsonList(m_enabledBrowserExtensions.size());
   for(unsigned enabledBrowserExtensionsIndex = 0; enabledBrowserExtensionsIndex < enabledBrowserExtensionsJsonList.GetLength(); ++enabledBrowserExtensionsIndex)
   {
     enabledBrowserExtensionsJsonList[enabledBrowserExtensionsIndex].AsString(BrowserExtensionMapper::GetNameForBrowserExtension(m_enabledBrowserExtensions[enabledBrowserExtensionsIndex]));
   }
   payload.WithArray("enabledBrowserExtensions", std::move(enabledBrowserExtensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
