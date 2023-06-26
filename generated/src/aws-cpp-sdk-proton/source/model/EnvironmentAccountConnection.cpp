/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/EnvironmentAccountConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

EnvironmentAccountConnection::EnvironmentAccountConnection() : 
    m_arnHasBeenSet(false),
    m_codebuildRoleArnHasBeenSet(false),
    m_componentRoleArnHasBeenSet(false),
    m_environmentAccountIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_managementAccountIdHasBeenSet(false),
    m_requestedAtHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(EnvironmentAccountConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

EnvironmentAccountConnection::EnvironmentAccountConnection(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_codebuildRoleArnHasBeenSet(false),
    m_componentRoleArnHasBeenSet(false),
    m_environmentAccountIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_managementAccountIdHasBeenSet(false),
    m_requestedAtHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(EnvironmentAccountConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentAccountConnection& EnvironmentAccountConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codebuildRoleArn"))
  {
    m_codebuildRoleArn = jsonValue.GetString("codebuildRoleArn");

    m_codebuildRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentRoleArn"))
  {
    m_componentRoleArn = jsonValue.GetString("componentRoleArn");

    m_componentRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentAccountId"))
  {
    m_environmentAccountId = jsonValue.GetString("environmentAccountId");

    m_environmentAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");

    m_environmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managementAccountId"))
  {
    m_managementAccountId = jsonValue.GetString("managementAccountId");

    m_managementAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestedAt"))
  {
    m_requestedAt = jsonValue.GetDouble("requestedAt");

    m_requestedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentAccountConnectionStatusMapper::GetEnvironmentAccountConnectionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentAccountConnection::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_codebuildRoleArnHasBeenSet)
  {
   payload.WithString("codebuildRoleArn", m_codebuildRoleArn);

  }

  if(m_componentRoleArnHasBeenSet)
  {
   payload.WithString("componentRoleArn", m_componentRoleArn);

  }

  if(m_environmentAccountIdHasBeenSet)
  {
   payload.WithString("environmentAccountId", m_environmentAccountId);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_managementAccountIdHasBeenSet)
  {
   payload.WithString("managementAccountId", m_managementAccountId);

  }

  if(m_requestedAtHasBeenSet)
  {
   payload.WithDouble("requestedAt", m_requestedAt.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnvironmentAccountConnectionStatusMapper::GetNameForEnvironmentAccountConnectionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
