/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ProviderConfiguration.h>
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

ProviderConfiguration::ProviderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProviderConfiguration& ProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JiraCloud"))
  {
    m_jiraCloud = jsonValue.GetObject("JiraCloud");
    m_jiraCloudHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceNow"))
  {
    m_serviceNow = jsonValue.GetObject("ServiceNow");
    m_serviceNowHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jiraCloudHasBeenSet)
  {
   payload.WithObject("JiraCloud", m_jiraCloud.Jsonize());

  }

  if(m_serviceNowHasBeenSet)
  {
   payload.WithObject("ServiceNow", m_serviceNow.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
