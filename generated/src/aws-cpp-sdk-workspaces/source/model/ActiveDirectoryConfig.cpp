/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ActiveDirectoryConfig.h>
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

ActiveDirectoryConfig::ActiveDirectoryConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ActiveDirectoryConfig& ActiveDirectoryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceAccountSecretArn"))
  {
    m_serviceAccountSecretArn = jsonValue.GetString("ServiceAccountSecretArn");
    m_serviceAccountSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ActiveDirectoryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_serviceAccountSecretArnHasBeenSet)
  {
   payload.WithString("ServiceAccountSecretArn", m_serviceAccountSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
