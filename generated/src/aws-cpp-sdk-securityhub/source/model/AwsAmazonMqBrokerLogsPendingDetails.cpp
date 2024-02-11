/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAmazonMqBrokerLogsPendingDetails.h>
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

AwsAmazonMqBrokerLogsPendingDetails::AwsAmazonMqBrokerLogsPendingDetails() : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false)
{
}

AwsAmazonMqBrokerLogsPendingDetails::AwsAmazonMqBrokerLogsPendingDetails(JsonView jsonValue) : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAmazonMqBrokerLogsPendingDetails& AwsAmazonMqBrokerLogsPendingDetails::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AwsAmazonMqBrokerLogsPendingDetails::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
