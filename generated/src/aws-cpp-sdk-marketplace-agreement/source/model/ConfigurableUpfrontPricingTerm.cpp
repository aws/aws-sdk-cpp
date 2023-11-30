/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/ConfigurableUpfrontPricingTerm.h>
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

ConfigurableUpfrontPricingTerm::ConfigurableUpfrontPricingTerm() : 
    m_configurationHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_rateCardsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ConfigurableUpfrontPricingTerm::ConfigurableUpfrontPricingTerm(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_rateCardsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurableUpfrontPricingTerm& ConfigurableUpfrontPricingTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateCards"))
  {
    Aws::Utils::Array<JsonView> rateCardsJsonList = jsonValue.GetArray("rateCards");
    for(unsigned rateCardsIndex = 0; rateCardsIndex < rateCardsJsonList.GetLength(); ++rateCardsIndex)
    {
      m_rateCards.push_back(rateCardsJsonList[rateCardsIndex].AsObject());
    }
    m_rateCardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurableUpfrontPricingTerm::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", m_currencyCode);

  }

  if(m_rateCardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rateCardsJsonList(m_rateCards.size());
   for(unsigned rateCardsIndex = 0; rateCardsIndex < rateCardsJsonList.GetLength(); ++rateCardsIndex)
   {
     rateCardsJsonList[rateCardsIndex].AsObject(m_rateCards[rateCardsIndex].Jsonize());
   }
   payload.WithArray("rateCards", std::move(rateCardsJsonList));

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
