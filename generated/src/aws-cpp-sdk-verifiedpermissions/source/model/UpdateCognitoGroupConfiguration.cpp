/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdateCognitoGroupConfiguration.h>
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

UpdateCognitoGroupConfiguration::UpdateCognitoGroupConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateCognitoGroupConfiguration& UpdateCognitoGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupEntityType"))
  {
    m_groupEntityType = jsonValue.GetString("groupEntityType");
    m_groupEntityTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateCognitoGroupConfiguration::Jsonize() const
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
