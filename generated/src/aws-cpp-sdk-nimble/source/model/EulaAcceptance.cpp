/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/EulaAcceptance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

EulaAcceptance::EulaAcceptance() : 
    m_acceptedAtHasBeenSet(false),
    m_acceptedByHasBeenSet(false),
    m_accepteeIdHasBeenSet(false),
    m_eulaAcceptanceIdHasBeenSet(false),
    m_eulaIdHasBeenSet(false)
{
}

EulaAcceptance::EulaAcceptance(JsonView jsonValue) : 
    m_acceptedAtHasBeenSet(false),
    m_acceptedByHasBeenSet(false),
    m_accepteeIdHasBeenSet(false),
    m_eulaAcceptanceIdHasBeenSet(false),
    m_eulaIdHasBeenSet(false)
{
  *this = jsonValue;
}

EulaAcceptance& EulaAcceptance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acceptedAt"))
  {
    m_acceptedAt = jsonValue.GetString("acceptedAt");

    m_acceptedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acceptedBy"))
  {
    m_acceptedBy = jsonValue.GetString("acceptedBy");

    m_acceptedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accepteeId"))
  {
    m_accepteeId = jsonValue.GetString("accepteeId");

    m_accepteeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eulaAcceptanceId"))
  {
    m_eulaAcceptanceId = jsonValue.GetString("eulaAcceptanceId");

    m_eulaAcceptanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eulaId"))
  {
    m_eulaId = jsonValue.GetString("eulaId");

    m_eulaIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EulaAcceptance::Jsonize() const
{
  JsonValue payload;

  if(m_acceptedAtHasBeenSet)
  {
   payload.WithString("acceptedAt", m_acceptedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_acceptedByHasBeenSet)
  {
   payload.WithString("acceptedBy", m_acceptedBy);

  }

  if(m_accepteeIdHasBeenSet)
  {
   payload.WithString("accepteeId", m_accepteeId);

  }

  if(m_eulaAcceptanceIdHasBeenSet)
  {
   payload.WithString("eulaAcceptanceId", m_eulaAcceptanceId);

  }

  if(m_eulaIdHasBeenSet)
  {
   payload.WithString("eulaId", m_eulaId);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
