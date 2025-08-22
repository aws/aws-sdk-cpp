/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/EngineConfig.h>
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

EngineConfig::EngineConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EngineConfig& EngineConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineArn"))
  {
    m_engineArn = jsonValue.GetString("EngineArn");
    m_engineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BrowserType"))
  {
    m_browserType = BrowserTypeMapper::GetBrowserTypeForName(jsonValue.GetString("BrowserType"));
    m_browserTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EngineConfig::Jsonize() const
{
  JsonValue payload;

  if(m_engineArnHasBeenSet)
  {
   payload.WithString("EngineArn", m_engineArn);

  }

  if(m_browserTypeHasBeenSet)
  {
   payload.WithString("BrowserType", BrowserTypeMapper::GetNameForBrowserType(m_browserType));
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
