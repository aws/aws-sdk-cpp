/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/WebACL.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

WebACL::WebACL() : 
    m_webACLIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_webACLArnHasBeenSet(false)
{
}

WebACL::WebACL(JsonView jsonValue) : 
    m_webACLIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_webACLArnHasBeenSet(false)
{
  *this = jsonValue;
}

WebACL& WebACL::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebACLId"))
  {
    m_webACLId = jsonValue.GetString("WebACLId");

    m_webACLIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = jsonValue.GetObject("DefaultAction");

    m_defaultActionHasBeenSet = true;
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

  if(jsonValue.ValueExists("WebACLArn"))
  {
    m_webACLArn = jsonValue.GetString("WebACLArn");

    m_webACLArnHasBeenSet = true;
  }

  return *this;
}

JsonValue WebACL::Jsonize() const
{
  JsonValue payload;

  if(m_webACLIdHasBeenSet)
  {
   payload.WithString("WebACLId", m_webACLId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithObject("DefaultAction", m_defaultAction.Jsonize());

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

  if(m_webACLArnHasBeenSet)
  {
   payload.WithString("WebACLArn", m_webACLArn);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
