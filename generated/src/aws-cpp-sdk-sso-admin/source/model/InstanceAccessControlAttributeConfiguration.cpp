/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/InstanceAccessControlAttributeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

InstanceAccessControlAttributeConfiguration::InstanceAccessControlAttributeConfiguration() : 
    m_accessControlAttributesHasBeenSet(false)
{
}

InstanceAccessControlAttributeConfiguration::InstanceAccessControlAttributeConfiguration(JsonView jsonValue) : 
    m_accessControlAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAccessControlAttributeConfiguration& InstanceAccessControlAttributeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessControlAttributes"))
  {
    Aws::Utils::Array<JsonView> accessControlAttributesJsonList = jsonValue.GetArray("AccessControlAttributes");
    for(unsigned accessControlAttributesIndex = 0; accessControlAttributesIndex < accessControlAttributesJsonList.GetLength(); ++accessControlAttributesIndex)
    {
      m_accessControlAttributes.push_back(accessControlAttributesJsonList[accessControlAttributesIndex].AsObject());
    }
    m_accessControlAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAccessControlAttributeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accessControlAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessControlAttributesJsonList(m_accessControlAttributes.size());
   for(unsigned accessControlAttributesIndex = 0; accessControlAttributesIndex < accessControlAttributesJsonList.GetLength(); ++accessControlAttributesIndex)
   {
     accessControlAttributesJsonList[accessControlAttributesIndex].AsObject(m_accessControlAttributes[accessControlAttributesIndex].Jsonize());
   }
   payload.WithArray("AccessControlAttributes", std::move(accessControlAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
