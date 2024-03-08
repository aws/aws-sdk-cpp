/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UserAlias.h>
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

UserAlias::UserAlias() : 
    m_dataSourceIdHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

UserAlias::UserAlias(JsonView jsonValue) : 
    m_dataSourceIdHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserAlias& UserAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indexId"))
  {
    m_indexId = jsonValue.GetString("indexId");

    m_indexIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserAlias::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("indexId", m_indexId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
