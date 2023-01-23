/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamAccessKeyDetails.h>
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

AwsIamAccessKeyDetails::AwsIamAccessKeyDetails() : 
    m_status(AwsIamAccessKeyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_principalNameHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

AwsIamAccessKeyDetails::AwsIamAccessKeyDetails(JsonView jsonValue) : 
    m_status(AwsIamAccessKeyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_principalNameHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamAccessKeyDetails& AwsIamAccessKeyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = AwsIamAccessKeyStatusMapper::GetAwsIamAccessKeyStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalType"))
  {
    m_principalType = jsonValue.GetString("PrincipalType");

    m_principalTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalName"))
  {
    m_principalName = jsonValue.GetString("PrincipalName");

    m_principalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("AccessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionContext"))
  {
    m_sessionContext = jsonValue.GetObject("SessionContext");

    m_sessionContextHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamAccessKeyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AwsIamAccessKeyStatusMapper::GetNameForAwsIamAccessKeyStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("PrincipalType", m_principalType);

  }

  if(m_principalNameHasBeenSet)
  {
   payload.WithString("PrincipalName", m_principalName);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("AccessKeyId", m_accessKeyId);

  }

  if(m_sessionContextHasBeenSet)
  {
   payload.WithObject("SessionContext", m_sessionContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
