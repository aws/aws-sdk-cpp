/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/PaymentScheduleTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

PaymentScheduleTerm::PaymentScheduleTerm() : 
    m_currencyCodeHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

PaymentScheduleTerm::PaymentScheduleTerm(JsonView jsonValue) : 
    m_currencyCodeHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PaymentScheduleTerm& PaymentScheduleTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedule"))
  {
    Aws::Utils::Array<JsonView> scheduleJsonList = jsonValue.GetArray("schedule");
    for(unsigned scheduleIndex = 0; scheduleIndex < scheduleJsonList.GetLength(); ++scheduleIndex)
    {
      m_schedule.push_back(scheduleJsonList[scheduleIndex].AsObject());
    }
    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PaymentScheduleTerm::Jsonize() const
{
  JsonValue payload;

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", m_currencyCode);

  }

  if(m_scheduleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scheduleJsonList(m_schedule.size());
   for(unsigned scheduleIndex = 0; scheduleIndex < scheduleJsonList.GetLength(); ++scheduleIndex)
   {
     scheduleJsonList[scheduleIndex].AsObject(m_schedule[scheduleIndex].Jsonize());
   }
   payload.WithArray("schedule", std::move(scheduleJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
