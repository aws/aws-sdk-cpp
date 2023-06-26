/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticBeanstalkEnvironmentEnvironmentLink.h>
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

AwsElasticBeanstalkEnvironmentEnvironmentLink::AwsElasticBeanstalkEnvironmentEnvironmentLink() : 
    m_environmentNameHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
}

AwsElasticBeanstalkEnvironmentEnvironmentLink::AwsElasticBeanstalkEnvironmentEnvironmentLink(JsonView jsonValue) : 
    m_environmentNameHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElasticBeanstalkEnvironmentEnvironmentLink& AwsElasticBeanstalkEnvironmentEnvironmentLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnvironmentName"))
  {
    m_environmentName = jsonValue.GetString("EnvironmentName");

    m_environmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkName"))
  {
    m_linkName = jsonValue.GetString("LinkName");

    m_linkNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElasticBeanstalkEnvironmentEnvironmentLink::Jsonize() const
{
  JsonValue payload;

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("EnvironmentName", m_environmentName);

  }

  if(m_linkNameHasBeenSet)
  {
   payload.WithString("LinkName", m_linkName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
