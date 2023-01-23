/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/BackendConnectionErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

BackendConnectionErrors::BackendConnectionErrors() : 
    m_timeoutCount(0),
    m_timeoutCountHasBeenSet(false),
    m_connectionRefusedCount(0),
    m_connectionRefusedCountHasBeenSet(false),
    m_hTTPCode4XXCount(0),
    m_hTTPCode4XXCountHasBeenSet(false),
    m_hTTPCode5XXCount(0),
    m_hTTPCode5XXCountHasBeenSet(false),
    m_unknownHostCount(0),
    m_unknownHostCountHasBeenSet(false),
    m_otherCount(0),
    m_otherCountHasBeenSet(false)
{
}

BackendConnectionErrors::BackendConnectionErrors(JsonView jsonValue) : 
    m_timeoutCount(0),
    m_timeoutCountHasBeenSet(false),
    m_connectionRefusedCount(0),
    m_connectionRefusedCountHasBeenSet(false),
    m_hTTPCode4XXCount(0),
    m_hTTPCode4XXCountHasBeenSet(false),
    m_hTTPCode5XXCount(0),
    m_hTTPCode5XXCountHasBeenSet(false),
    m_unknownHostCount(0),
    m_unknownHostCountHasBeenSet(false),
    m_otherCount(0),
    m_otherCountHasBeenSet(false)
{
  *this = jsonValue;
}

BackendConnectionErrors& BackendConnectionErrors::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeoutCount"))
  {
    m_timeoutCount = jsonValue.GetInteger("TimeoutCount");

    m_timeoutCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionRefusedCount"))
  {
    m_connectionRefusedCount = jsonValue.GetInteger("ConnectionRefusedCount");

    m_connectionRefusedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HTTPCode4XXCount"))
  {
    m_hTTPCode4XXCount = jsonValue.GetInteger("HTTPCode4XXCount");

    m_hTTPCode4XXCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HTTPCode5XXCount"))
  {
    m_hTTPCode5XXCount = jsonValue.GetInteger("HTTPCode5XXCount");

    m_hTTPCode5XXCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnknownHostCount"))
  {
    m_unknownHostCount = jsonValue.GetInteger("UnknownHostCount");

    m_unknownHostCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OtherCount"))
  {
    m_otherCount = jsonValue.GetInteger("OtherCount");

    m_otherCountHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendConnectionErrors::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutCountHasBeenSet)
  {
   payload.WithInteger("TimeoutCount", m_timeoutCount);

  }

  if(m_connectionRefusedCountHasBeenSet)
  {
   payload.WithInteger("ConnectionRefusedCount", m_connectionRefusedCount);

  }

  if(m_hTTPCode4XXCountHasBeenSet)
  {
   payload.WithInteger("HTTPCode4XXCount", m_hTTPCode4XXCount);

  }

  if(m_hTTPCode5XXCountHasBeenSet)
  {
   payload.WithInteger("HTTPCode5XXCount", m_hTTPCode5XXCount);

  }

  if(m_unknownHostCountHasBeenSet)
  {
   payload.WithInteger("UnknownHostCount", m_unknownHostCount);

  }

  if(m_otherCountHasBeenSet)
  {
   payload.WithInteger("OtherCount", m_otherCount);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
