/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamAccessKeySessionContextSessionIssuer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamAccessKeySessionContextSessionIssuer::AwsIamAccessKeySessionContextSessionIssuer() : 
    m_typeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

AwsIamAccessKeySessionContextSessionIssuer::AwsIamAccessKeySessionContextSessionIssuer(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamAccessKeySessionContextSessionIssuer& AwsIamAccessKeySessionContextSessionIssuer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamAccessKeySessionContextSessionIssuer::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
