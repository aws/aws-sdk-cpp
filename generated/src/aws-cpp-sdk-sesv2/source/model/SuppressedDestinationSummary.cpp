/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SuppressedDestinationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

SuppressedDestinationSummary::SuppressedDestinationSummary() : 
    m_emailAddressHasBeenSet(false),
    m_reason(SuppressionListReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

SuppressedDestinationSummary::SuppressedDestinationSummary(JsonView jsonValue) : 
    m_emailAddressHasBeenSet(false),
    m_reason(SuppressionListReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressedDestinationSummary& SuppressedDestinationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = SuppressionListReasonMapper::GetSuppressionListReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressedDestinationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", SuppressionListReasonMapper::GetNameForSuppressionListReason(m_reason));
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
