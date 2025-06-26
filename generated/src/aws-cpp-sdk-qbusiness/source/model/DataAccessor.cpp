/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DataAccessor.h>
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

DataAccessor::DataAccessor(JsonView jsonValue)
{
  *this = jsonValue;
}

DataAccessor& DataAccessor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataAccessorId"))
  {
    m_dataAccessorId = jsonValue.GetString("dataAccessorId");
    m_dataAccessorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataAccessorArn"))
  {
    m_dataAccessorArn = jsonValue.GetString("dataAccessorArn");
    m_dataAccessorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idcApplicationArn"))
  {
    m_idcApplicationArn = jsonValue.GetString("idcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetString("principal");
    m_principalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationDetail"))
  {
    m_authenticationDetail = jsonValue.GetObject("authenticationDetail");
    m_authenticationDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAccessor::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_dataAccessorIdHasBeenSet)
  {
   payload.WithString("dataAccessorId", m_dataAccessorId);

  }

  if(m_dataAccessorArnHasBeenSet)
  {
   payload.WithString("dataAccessorArn", m_dataAccessorArn);

  }

  if(m_idcApplicationArnHasBeenSet)
  {
   payload.WithString("idcApplicationArn", m_idcApplicationArn);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_authenticationDetailHasBeenSet)
  {
   payload.WithObject("authenticationDetail", m_authenticationDetail.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
