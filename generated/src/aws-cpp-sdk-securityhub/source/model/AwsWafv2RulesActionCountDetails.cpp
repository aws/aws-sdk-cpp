/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2RulesActionCountDetails.h>
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

AwsWafv2RulesActionCountDetails::AwsWafv2RulesActionCountDetails() : 
    m_customRequestHandlingHasBeenSet(false)
{
}

AwsWafv2RulesActionCountDetails::AwsWafv2RulesActionCountDetails(JsonView jsonValue) : 
    m_customRequestHandlingHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2RulesActionCountDetails& AwsWafv2RulesActionCountDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomRequestHandling"))
  {
    m_customRequestHandling = jsonValue.GetObject("CustomRequestHandling");

    m_customRequestHandlingHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2RulesActionCountDetails::Jsonize() const
{
  JsonValue payload;

  if(m_customRequestHandlingHasBeenSet)
  {
   payload.WithObject("CustomRequestHandling", m_customRequestHandling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
