/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/ConfigurationItem.h>
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

ConfigurationItem::ConfigurationItem() : 
    m_cognitoUserPoolConfigurationHasBeenSet(false)
{
}

ConfigurationItem::ConfigurationItem(JsonView jsonValue) : 
    m_cognitoUserPoolConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationItem& ConfigurationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cognitoUserPoolConfiguration"))
  {
    m_cognitoUserPoolConfiguration = jsonValue.GetObject("cognitoUserPoolConfiguration");

    m_cognitoUserPoolConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationItem::Jsonize() const
{
  JsonValue payload;

  if(m_cognitoUserPoolConfigurationHasBeenSet)
  {
   payload.WithObject("cognitoUserPoolConfiguration", m_cognitoUserPoolConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
