/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/FreeTrialPricingTerm.h>
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

FreeTrialPricingTerm::FreeTrialPricingTerm() : 
    m_durationHasBeenSet(false),
    m_grantsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

FreeTrialPricingTerm::FreeTrialPricingTerm(JsonView jsonValue) : 
    m_durationHasBeenSet(false),
    m_grantsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

FreeTrialPricingTerm& FreeTrialPricingTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetString("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("grants"))
  {
    Aws::Utils::Array<JsonView> grantsJsonList = jsonValue.GetArray("grants");
    for(unsigned grantsIndex = 0; grantsIndex < grantsJsonList.GetLength(); ++grantsIndex)
    {
      m_grants.push_back(grantsJsonList[grantsIndex].AsObject());
    }
    m_grantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue FreeTrialPricingTerm::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithString("duration", m_duration);

  }

  if(m_grantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantsJsonList(m_grants.size());
   for(unsigned grantsIndex = 0; grantsIndex < grantsJsonList.GetLength(); ++grantsIndex)
   {
     grantsJsonList[grantsIndex].AsObject(m_grants[grantsIndex].Jsonize());
   }
   payload.WithArray("grants", std::move(grantsJsonList));

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
