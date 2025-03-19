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

ResourceCountsSummary::ResourceCountsSummary(JsonView jsonValue)
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
