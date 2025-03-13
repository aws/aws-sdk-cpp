/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/IdentityCenterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

IdentityCenterConfiguration::IdentityCenterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityCenterConfiguration& IdentityCenterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
