/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/ConfigurableUpfrontRateCardItem.h>
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

ConfigurableUpfrontRateCardItem::ConfigurableUpfrontRateCardItem() : 
    m_constraintsHasBeenSet(false),
    m_rateCardHasBeenSet(false),
    m_selectorHasBeenSet(false)
{
}

ConfigurableUpfrontRateCardItem::ConfigurableUpfrontRateCardItem(JsonView jsonValue) : 
    m_constraintsHasBeenSet(false),
    m_rateCardHasBeenSet(false),
    m_selectorHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurableUpfrontRateCardItem& ConfigurableUpfrontRateCardItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("constraints"))
  {
    m_constraints = jsonValue.GetObject("constraints");

    m_constraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateCard"))
  {
    Aws::Utils::Array<JsonView> rateCardJsonList = jsonValue.GetArray("rateCard");
    for(unsigned rateCardIndex = 0; rateCardIndex < rateCardJsonList.GetLength(); ++rateCardIndex)
    {
      m_rateCard.push_back(rateCardJsonList[rateCardIndex].AsObject());
    }
    m_rateCardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selector"))
  {
    m_selector = jsonValue.GetObject("selector");

    m_selectorHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurableUpfrontRateCardItem::Jsonize() const
{
  JsonValue payload;

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("constraints", m_constraints.Jsonize());

  }

  if(m_rateCardHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rateCardJsonList(m_rateCard.size());
   for(unsigned rateCardIndex = 0; rateCardIndex < rateCardJsonList.GetLength(); ++rateCardIndex)
   {
     rateCardJsonList[rateCardIndex].AsObject(m_rateCard[rateCardIndex].Jsonize());
   }
   payload.WithArray("rateCard", std::move(rateCardJsonList));

  }

  if(m_selectorHasBeenSet)
  {
   payload.WithObject("selector", m_selector.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
