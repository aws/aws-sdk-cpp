/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAmazonMqBrokerLogsDetails.h>
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

AwsAmazonMqBrokerLogsDetails::AwsAmazonMqBrokerLogsDetails() : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false),
    m_auditLogGroupHasBeenSet(false),
    m_generalLogGroupHasBeenSet(false),
    m_pendingHasBeenSet(false)
{
}

AwsAmazonMqBrokerLogsDetails::AwsAmazonMqBrokerLogsDetails(JsonView jsonValue) : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false),
    m_auditLogGroupHasBeenSet(false),
    m_generalLogGroupHasBeenSet(false),
    m_pendingHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAmazonMqBrokerLogsDetails& AwsAmazonMqBrokerLogsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Audit"))
  {
    m_audit = jsonValue.GetBool("Audit");

    m_auditHasBeenSet = true;
  }

  if(jsonValue.ValueExists("General"))
  {
    m_general = jsonValue.GetBool("General");

    m_generalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuditLogGroup"))
  {
    m_auditLogGroup = jsonValue.GetString("AuditLogGroup");

    m_auditLogGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneralLogGroup"))
  {
    m_generalLogGroup = jsonValue.GetString("GeneralLogGroup");

    m_generalLogGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pending"))
  {
    m_pending = jsonValue.GetObject("Pending");

    m_pendingHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAmazonMqBrokerLogsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_auditHasBeenSet)
  {
   payload.WithBool("Audit", m_audit);

  }

  if(m_generalHasBeenSet)
  {
   payload.WithBool("General", m_general);

  }

  if(m_auditLogGroupHasBeenSet)
  {
   payload.WithString("AuditLogGroup", m_auditLogGroup);

  }

  if(m_generalLogGroupHasBeenSet)
  {
   payload.WithString("GeneralLogGroup", m_generalLogGroup);

  }

  if(m_pendingHasBeenSet)
  {
   payload.WithObject("Pending", m_pending.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
