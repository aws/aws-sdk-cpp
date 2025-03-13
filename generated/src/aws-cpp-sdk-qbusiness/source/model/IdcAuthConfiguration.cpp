/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/IdcAuthConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

IdcAuthConfiguration::IdcAuthConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IdcAuthConfiguration& IdcAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idcApplicationArn"))
  {
    m_idcApplicationArn = jsonValue.GetString("idcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdcAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_idcApplicationArnHasBeenSet)
  {
   payload.WithString("idcApplicationArn", m_idcApplicationArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
