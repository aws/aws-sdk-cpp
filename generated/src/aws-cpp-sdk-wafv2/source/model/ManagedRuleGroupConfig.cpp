/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleGroupConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedRuleGroupConfig::ManagedRuleGroupConfig() : 
    m_loginPathHasBeenSet(false),
    m_payloadType(PayloadType::NOT_SET),
    m_payloadTypeHasBeenSet(false),
    m_usernameFieldHasBeenSet(false),
    m_passwordFieldHasBeenSet(false),
    m_aWSManagedRulesBotControlRuleSetHasBeenSet(false)
{
}

ManagedRuleGroupConfig::ManagedRuleGroupConfig(JsonView jsonValue) : 
    m_loginPathHasBeenSet(false),
    m_payloadType(PayloadType::NOT_SET),
    m_payloadTypeHasBeenSet(false),
    m_usernameFieldHasBeenSet(false),
    m_passwordFieldHasBeenSet(false),
    m_aWSManagedRulesBotControlRuleSetHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedRuleGroupConfig& ManagedRuleGroupConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LoginPath"))
  {
    m_loginPath = jsonValue.GetString("LoginPath");

    m_loginPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PayloadType"))
  {
    m_payloadType = PayloadTypeMapper::GetPayloadTypeForName(jsonValue.GetString("PayloadType"));

    m_payloadTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsernameField"))
  {
    m_usernameField = jsonValue.GetObject("UsernameField");

    m_usernameFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PasswordField"))
  {
    m_passwordField = jsonValue.GetObject("PasswordField");

    m_passwordFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AWSManagedRulesBotControlRuleSet"))
  {
    m_aWSManagedRulesBotControlRuleSet = jsonValue.GetObject("AWSManagedRulesBotControlRuleSet");

    m_aWSManagedRulesBotControlRuleSetHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedRuleGroupConfig::Jsonize() const
{
  JsonValue payload;

  if(m_loginPathHasBeenSet)
  {
   payload.WithString("LoginPath", m_loginPath);

  }

  if(m_payloadTypeHasBeenSet)
  {
   payload.WithString("PayloadType", PayloadTypeMapper::GetNameForPayloadType(m_payloadType));
  }

  if(m_usernameFieldHasBeenSet)
  {
   payload.WithObject("UsernameField", m_usernameField.Jsonize());

  }

  if(m_passwordFieldHasBeenSet)
  {
   payload.WithObject("PasswordField", m_passwordField.Jsonize());

  }

  if(m_aWSManagedRulesBotControlRuleSetHasBeenSet)
  {
   payload.WithObject("AWSManagedRulesBotControlRuleSet", m_aWSManagedRulesBotControlRuleSet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
