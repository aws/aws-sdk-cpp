/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableBillingModeSummary.h>
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

AwsDynamoDbTableBillingModeSummary::AwsDynamoDbTableBillingModeSummary() : 
    m_billingModeHasBeenSet(false),
    m_lastUpdateToPayPerRequestDateTimeHasBeenSet(false)
{
}

AwsDynamoDbTableBillingModeSummary::AwsDynamoDbTableBillingModeSummary(JsonView jsonValue) : 
    m_billingModeHasBeenSet(false),
    m_lastUpdateToPayPerRequestDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableBillingModeSummary& AwsDynamoDbTableBillingModeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BillingMode"))
  {
    m_billingMode = jsonValue.GetString("BillingMode");

    m_billingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateToPayPerRequestDateTime"))
  {
    m_lastUpdateToPayPerRequestDateTime = jsonValue.GetString("LastUpdateToPayPerRequestDateTime");

    m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableBillingModeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_billingModeHasBeenSet)
  {
   payload.WithString("BillingMode", m_billingMode);

  }

  if(m_lastUpdateToPayPerRequestDateTimeHasBeenSet)
  {
   payload.WithString("LastUpdateToPayPerRequestDateTime", m_lastUpdateToPayPerRequestDateTime);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
