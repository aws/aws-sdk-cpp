/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/StatisticsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

StatisticsSummary::StatisticsSummary() : 
    m_signatureCount(0),
    m_signatureCountHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_predicateCount(0),
    m_predicateCountHasBeenSet(false)
{
}

StatisticsSummary::StatisticsSummary(JsonView jsonValue) : 
    m_signatureCount(0),
    m_signatureCountHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_predicateCount(0),
    m_predicateCountHasBeenSet(false)
{
  *this = jsonValue;
}

StatisticsSummary& StatisticsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signatureCount"))
  {
    m_signatureCount = jsonValue.GetInteger("signatureCount");

    m_signatureCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("instanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predicateCount"))
  {
    m_predicateCount = jsonValue.GetInteger("predicateCount");

    m_predicateCountHasBeenSet = true;
  }

  return *this;
}

JsonValue StatisticsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_signatureCountHasBeenSet)
  {
   payload.WithInteger("signatureCount", m_signatureCount);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("instanceCount", m_instanceCount);

  }

  if(m_predicateCountHasBeenSet)
  {
   payload.WithInteger("predicateCount", m_predicateCount);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
