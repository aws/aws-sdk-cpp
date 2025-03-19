/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ManagedSourceConfiguration.h>
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

ManagedSourceConfiguration::ManagedSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedSourceConfiguration& ManagedSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("webCrawlerConfiguration"))
  {
    m_webCrawlerConfiguration = jsonValue.GetObject("webCrawlerConfiguration");
    m_webCrawlerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_webCrawlerConfigurationHasBeenSet)
  {
   payload.WithObject("webCrawlerConfiguration", m_webCrawlerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
