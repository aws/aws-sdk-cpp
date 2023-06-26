/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SuppressedDestination.h>
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

SuppressedDestination::SuppressedDestination() : 
    m_emailAddressHasBeenSet(false),
    m_reason(SuppressionListReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

SuppressedDestination::SuppressedDestination(JsonView jsonValue) : 
    m_emailAddressHasBeenSet(false),
    m_reason(SuppressionListReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressedDestination& SuppressedDestination::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Attributes"))
  {
    m_attributes = jsonValue.GetObject("Attributes");

    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressedDestination::Jsonize() const
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

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("Attributes", m_attributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
