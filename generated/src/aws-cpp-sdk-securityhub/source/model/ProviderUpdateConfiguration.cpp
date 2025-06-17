/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ProviderUpdateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ProviderUpdateConfiguration::ProviderUpdateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProviderUpdateConfiguration& ProviderUpdateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JiraCloud"))
  {
    m_jiraCloud = jsonValue.GetObject("JiraCloud");
    m_jiraCloudHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderUpdateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jiraCloudHasBeenSet)
  {
   payload.WithObject("JiraCloud", m_jiraCloud.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
