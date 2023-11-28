/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SessionIntegrationConfiguration.h>
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

SessionIntegrationConfiguration::SessionIntegrationConfiguration() : 
    m_topicIntegrationArnHasBeenSet(false)
{
}

SessionIntegrationConfiguration::SessionIntegrationConfiguration(JsonView jsonValue) : 
    m_topicIntegrationArnHasBeenSet(false)
{
  *this = jsonValue;
}

SessionIntegrationConfiguration& SessionIntegrationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicIntegrationArn"))
  {
    m_topicIntegrationArn = jsonValue.GetString("topicIntegrationArn");

    m_topicIntegrationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionIntegrationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_topicIntegrationArnHasBeenSet)
  {
   payload.WithString("topicIntegrationArn", m_topicIntegrationArn);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
