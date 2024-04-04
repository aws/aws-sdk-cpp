/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/CognitoGroupConfigurationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

CognitoGroupConfigurationItem::CognitoGroupConfigurationItem() : 
    m_groupEntityTypeHasBeenSet(false)
{
}

CognitoGroupConfigurationItem::CognitoGroupConfigurationItem(JsonView jsonValue) : 
    m_groupEntityTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoGroupConfigurationItem& CognitoGroupConfigurationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupEntityType"))
  {
    m_groupEntityType = jsonValue.GetString("groupEntityType");

    m_groupEntityTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoGroupConfigurationItem::Jsonize() const
{
  JsonValue payload;

  if(m_groupEntityTypeHasBeenSet)
  {
   payload.WithString("groupEntityType", m_groupEntityType);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
