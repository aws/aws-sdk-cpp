/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/DeobfuscationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

DeobfuscationConfiguration::DeobfuscationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DeobfuscationConfiguration& DeobfuscationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JavaScriptSourceMaps"))
  {
    m_javaScriptSourceMaps = jsonValue.GetObject("JavaScriptSourceMaps");
    m_javaScriptSourceMapsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeobfuscationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_javaScriptSourceMapsHasBeenSet)
  {
   payload.WithObject("JavaScriptSourceMaps", m_javaScriptSourceMaps.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
