/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2RulesActionDetails.h>
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

AwsWafv2RulesActionDetails::AwsWafv2RulesActionDetails() : 
    m_allowHasBeenSet(false),
    m_blockHasBeenSet(false),
    m_captchaHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

AwsWafv2RulesActionDetails::AwsWafv2RulesActionDetails(JsonView jsonValue) : 
    m_allowHasBeenSet(false),
    m_blockHasBeenSet(false),
    m_captchaHasBeenSet(false),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2RulesActionDetails& AwsWafv2RulesActionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Allow"))
  {
    m_allow = jsonValue.GetObject("Allow");

    m_allowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Block"))
  {
    m_block = jsonValue.GetObject("Block");

    m_blockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Captcha"))
  {
    m_captcha = jsonValue.GetObject("Captcha");

    m_captchaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetObject("Count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2RulesActionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_allowHasBeenSet)
  {
   payload.WithObject("Allow", m_allow.Jsonize());

  }

  if(m_blockHasBeenSet)
  {
   payload.WithObject("Block", m_block.Jsonize());

  }

  if(m_captchaHasBeenSet)
  {
   payload.WithObject("Captcha", m_captcha.Jsonize());

  }

  if(m_countHasBeenSet)
  {
   payload.WithObject("Count", m_count.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
