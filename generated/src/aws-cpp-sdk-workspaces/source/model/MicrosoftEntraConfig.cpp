/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/MicrosoftEntraConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

MicrosoftEntraConfig::MicrosoftEntraConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

MicrosoftEntraConfig& MicrosoftEntraConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TenantId"))
  {
    m_tenantId = jsonValue.GetString("TenantId");
    m_tenantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationConfigSecretArn"))
  {
    m_applicationConfigSecretArn = jsonValue.GetString("ApplicationConfigSecretArn");
    m_applicationConfigSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrosoftEntraConfig::Jsonize() const
{
  JsonValue payload;

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("TenantId", m_tenantId);

  }

  if(m_applicationConfigSecretArnHasBeenSet)
  {
   payload.WithString("ApplicationConfigSecretArn", m_applicationConfigSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
