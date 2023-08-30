/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ValidityPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

ValidityPeriod::ValidityPeriod() : 
    m_period(0),
    m_periodHasBeenSet(false),
    m_periodType(ValidityPeriodType::NOT_SET),
    m_periodTypeHasBeenSet(false)
{
}

ValidityPeriod::ValidityPeriod(JsonView jsonValue) : 
    m_period(0),
    m_periodHasBeenSet(false),
    m_periodType(ValidityPeriodType::NOT_SET),
    m_periodTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ValidityPeriod& ValidityPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetInt64("Period");

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeriodType"))
  {
    m_periodType = ValidityPeriodTypeMapper::GetValidityPeriodTypeForName(jsonValue.GetString("PeriodType"));

    m_periodTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidityPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_periodHasBeenSet)
  {
   payload.WithInt64("Period", m_period);

  }

  if(m_periodTypeHasBeenSet)
  {
   payload.WithString("PeriodType", ValidityPeriodTypeMapper::GetNameForValidityPeriodType(m_periodType));
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
