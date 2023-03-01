/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/model/PriceList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pricing
{
namespace Model
{

PriceList::PriceList() : 
    m_priceListArnHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_fileFormatsHasBeenSet(false)
{
}

PriceList::PriceList(JsonView jsonValue) : 
    m_priceListArnHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_fileFormatsHasBeenSet(false)
{
  *this = jsonValue;
}

PriceList& PriceList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PriceListArn"))
  {
    m_priceListArn = jsonValue.GetString("PriceListArn");

    m_priceListArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionCode"))
  {
    m_regionCode = jsonValue.GetString("RegionCode");

    m_regionCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileFormats"))
  {
    Aws::Utils::Array<JsonView> fileFormatsJsonList = jsonValue.GetArray("FileFormats");
    for(unsigned fileFormatsIndex = 0; fileFormatsIndex < fileFormatsJsonList.GetLength(); ++fileFormatsIndex)
    {
      m_fileFormats.push_back(fileFormatsJsonList[fileFormatsIndex].AsString());
    }
    m_fileFormatsHasBeenSet = true;
  }

  return *this;
}

JsonValue PriceList::Jsonize() const
{
  JsonValue payload;

  if(m_priceListArnHasBeenSet)
  {
   payload.WithString("PriceListArn", m_priceListArn);

  }

  if(m_regionCodeHasBeenSet)
  {
   payload.WithString("RegionCode", m_regionCode);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_fileFormatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileFormatsJsonList(m_fileFormats.size());
   for(unsigned fileFormatsIndex = 0; fileFormatsIndex < fileFormatsJsonList.GetLength(); ++fileFormatsIndex)
   {
     fileFormatsJsonList[fileFormatsIndex].AsString(m_fileFormats[fileFormatsIndex]);
   }
   payload.WithArray("FileFormats", std::move(fileFormatsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pricing
} // namespace Aws
