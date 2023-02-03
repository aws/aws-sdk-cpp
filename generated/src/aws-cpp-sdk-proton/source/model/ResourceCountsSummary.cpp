/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ResourceCountsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ResourceCountsSummary::ResourceCountsSummary() : 
    m_behindMajor(0),
    m_behindMajorHasBeenSet(false),
    m_behindMinor(0),
    m_behindMinorHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false),
    m_upToDate(0),
    m_upToDateHasBeenSet(false)
{
}

ResourceCountsSummary::ResourceCountsSummary(JsonView jsonValue) : 
    m_behindMajor(0),
    m_behindMajorHasBeenSet(false),
    m_behindMinor(0),
    m_behindMinorHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false),
    m_upToDate(0),
    m_upToDateHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceCountsSummary& ResourceCountsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("behindMajor"))
  {
    m_behindMajor = jsonValue.GetInteger("behindMajor");

    m_behindMajorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("behindMinor"))
  {
    m_behindMinor = jsonValue.GetInteger("behindMinor");

    m_behindMinorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetInteger("failed");

    m_failedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInteger("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upToDate"))
  {
    m_upToDate = jsonValue.GetInteger("upToDate");

    m_upToDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceCountsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_behindMajorHasBeenSet)
  {
   payload.WithInteger("behindMajor", m_behindMajor);

  }

  if(m_behindMinorHasBeenSet)
  {
   payload.WithInteger("behindMinor", m_behindMinor);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("failed", m_failed);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("total", m_total);

  }

  if(m_upToDateHasBeenSet)
  {
   payload.WithInteger("upToDate", m_upToDate);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
