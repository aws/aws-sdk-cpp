/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EventDetails.h>
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

EventDetails::EventDetails() : 
    m_bounceHasBeenSet(false),
    m_complaintHasBeenSet(false)
{
}

EventDetails::EventDetails(JsonView jsonValue) : 
    m_bounceHasBeenSet(false),
    m_complaintHasBeenSet(false)
{
  *this = jsonValue;
}

EventDetails& EventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bounce"))
  {
    m_bounce = jsonValue.GetObject("Bounce");

    m_bounceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Complaint"))
  {
    m_complaint = jsonValue.GetObject("Complaint");

    m_complaintHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_bounceHasBeenSet)
  {
   payload.WithObject("Bounce", m_bounce.Jsonize());

  }

  if(m_complaintHasBeenSet)
  {
   payload.WithObject("Complaint", m_complaint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
