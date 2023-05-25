/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StatelessCustomActionDefinition.h>
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

StatelessCustomActionDefinition::StatelessCustomActionDefinition() : 
    m_publishMetricActionHasBeenSet(false)
{
}

StatelessCustomActionDefinition::StatelessCustomActionDefinition(JsonView jsonValue) : 
    m_publishMetricActionHasBeenSet(false)
{
  *this = jsonValue;
}

StatelessCustomActionDefinition& StatelessCustomActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PublishMetricAction"))
  {
    m_publishMetricAction = jsonValue.GetObject("PublishMetricAction");

    m_publishMetricActionHasBeenSet = true;
  }

  return *this;
}

JsonValue StatelessCustomActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_publishMetricActionHasBeenSet)
  {
   payload.WithObject("PublishMetricAction", m_publishMetricAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
