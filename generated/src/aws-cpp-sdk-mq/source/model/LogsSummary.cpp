/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/LogsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

LogsSummary::LogsSummary() : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_auditLogGroupHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false),
    m_generalLogGroupHasBeenSet(false),
    m_pendingHasBeenSet(false)
{
}

LogsSummary::LogsSummary(JsonView jsonValue) : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_auditLogGroupHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false),
    m_generalLogGroupHasBeenSet(false),
    m_pendingHasBeenSet(false)
{
  *this = jsonValue;
}

LogsSummary& LogsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audit"))
  {
    m_audit = jsonValue.GetBool("audit");

    m_auditHasBeenSet = true;
  }

  if(jsonValue.ValueExists("auditLogGroup"))
  {
    m_auditLogGroup = jsonValue.GetString("auditLogGroup");

    m_auditLogGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("general"))
  {
    m_general = jsonValue.GetBool("general");

    m_generalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generalLogGroup"))
  {
    m_generalLogGroup = jsonValue.GetString("generalLogGroup");

    m_generalLogGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pending"))
  {
    m_pending = jsonValue.GetObject("pending");

    m_pendingHasBeenSet = true;
  }

  return *this;
}

JsonValue LogsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_auditHasBeenSet)
  {
   payload.WithBool("audit", m_audit);

  }

  if(m_auditLogGroupHasBeenSet)
  {
   payload.WithString("auditLogGroup", m_auditLogGroup);

  }

  if(m_generalHasBeenSet)
  {
   payload.WithBool("general", m_general);

  }

  if(m_generalLogGroupHasBeenSet)
  {
   payload.WithString("generalLogGroup", m_generalLogGroup);

  }

  if(m_pendingHasBeenSet)
  {
   payload.WithObject("pending", m_pending.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
