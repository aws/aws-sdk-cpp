/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/BrowserConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

BrowserConfig::BrowserConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

BrowserConfig& BrowserConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BrowserType"))
  {
    m_browserType = BrowserTypeMapper::GetBrowserTypeForName(jsonValue.GetString("BrowserType"));
    m_browserTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserConfig::Jsonize() const
{
  JsonValue payload;

  if(m_browserTypeHasBeenSet)
  {
   payload.WithString("BrowserType", BrowserTypeMapper::GetNameForBrowserType(m_browserType));
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
