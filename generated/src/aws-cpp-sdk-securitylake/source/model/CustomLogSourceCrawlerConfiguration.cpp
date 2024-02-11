/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CustomLogSourceCrawlerConfiguration.h>
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

CustomLogSourceCrawlerConfiguration::CustomLogSourceCrawlerConfiguration() : 
    m_roleArnHasBeenSet(false)
{
}

CustomLogSourceCrawlerConfiguration::CustomLogSourceCrawlerConfiguration(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLogSourceCrawlerConfiguration& CustomLogSourceCrawlerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLogSourceCrawlerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
