/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2WebAclDetails.h>
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

AwsWafv2WebAclDetails::AwsWafv2WebAclDetails() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_managedbyFirewallManager(false),
    m_managedbyFirewallManagerHasBeenSet(false),
    m_idHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_captchaConfigHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false)
{
}

AwsWafv2WebAclDetails::AwsWafv2WebAclDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_managedbyFirewallManager(false),
    m_managedbyFirewallManagerHasBeenSet(false),
    m_idHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_captchaConfigHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2WebAclDetails& AwsWafv2WebAclDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedbyFirewallManager"))
  {
    m_managedbyFirewallManager = jsonValue.GetBool("ManagedbyFirewallManager");

    m_managedbyFirewallManagerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptchaConfig"))
  {
    m_captchaConfig = jsonValue.GetObject("CaptchaConfig");

    m_captchaConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = jsonValue.GetObject("DefaultAction");

    m_defaultActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibilityConfig"))
  {
    m_visibilityConfig = jsonValue.GetObject("VisibilityConfig");

    m_visibilityConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2WebAclDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_managedbyFirewallManagerHasBeenSet)
  {
   payload.WithBool("ManagedbyFirewallManager", m_managedbyFirewallManager);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInt64("Capacity", m_capacity);

  }

  if(m_captchaConfigHasBeenSet)
  {
   payload.WithObject("CaptchaConfig", m_captchaConfig.Jsonize());

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithObject("DefaultAction", m_defaultAction.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
