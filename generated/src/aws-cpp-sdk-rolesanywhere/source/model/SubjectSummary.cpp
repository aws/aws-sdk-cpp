/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/SubjectSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

SubjectSummary::SubjectSummary() : 
    m_createdAtHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lastSeenAtHasBeenSet(false),
    m_subjectArnHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_x509SubjectHasBeenSet(false)
{
}

SubjectSummary::SubjectSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lastSeenAtHasBeenSet(false),
    m_subjectArnHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_x509SubjectHasBeenSet(false)
{
  *this = jsonValue;
}

SubjectSummary& SubjectSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSeenAt"))
  {
    m_lastSeenAt = jsonValue.GetString("lastSeenAt");

    m_lastSeenAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subjectArn"))
  {
    m_subjectArn = jsonValue.GetString("subjectArn");

    m_subjectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");

    m_subjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("x509Subject"))
  {
    m_x509Subject = jsonValue.GetString("x509Subject");

    m_x509SubjectHasBeenSet = true;
  }

  return *this;
}

JsonValue SubjectSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_lastSeenAtHasBeenSet)
  {
   payload.WithString("lastSeenAt", m_lastSeenAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_subjectArnHasBeenSet)
  {
   payload.WithString("subjectArn", m_subjectArn);

  }

  if(m_subjectIdHasBeenSet)
  {
   payload.WithString("subjectId", m_subjectId);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_x509SubjectHasBeenSet)
  {
   payload.WithString("x509Subject", m_x509Subject);

  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
