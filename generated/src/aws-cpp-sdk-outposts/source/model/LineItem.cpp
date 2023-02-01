/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/LineItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

LineItem::LineItem() : 
    m_catalogItemIdHasBeenSet(false),
    m_lineItemIdHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_status(LineItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_shipmentInformationHasBeenSet(false),
    m_assetInformationListHasBeenSet(false)
{
}

LineItem::LineItem(JsonView jsonValue) : 
    m_catalogItemIdHasBeenSet(false),
    m_lineItemIdHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_status(LineItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_shipmentInformationHasBeenSet(false),
    m_assetInformationListHasBeenSet(false)
{
  *this = jsonValue;
}

LineItem& LineItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogItemId"))
  {
    m_catalogItemId = jsonValue.GetString("CatalogItemId");

    m_catalogItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineItemId"))
  {
    m_lineItemId = jsonValue.GetString("LineItemId");

    m_lineItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Quantity"))
  {
    m_quantity = jsonValue.GetInteger("Quantity");

    m_quantityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LineItemStatusMapper::GetLineItemStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShipmentInformation"))
  {
    m_shipmentInformation = jsonValue.GetObject("ShipmentInformation");

    m_shipmentInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssetInformationList"))
  {
    Aws::Utils::Array<JsonView> assetInformationListJsonList = jsonValue.GetArray("AssetInformationList");
    for(unsigned assetInformationListIndex = 0; assetInformationListIndex < assetInformationListJsonList.GetLength(); ++assetInformationListIndex)
    {
      m_assetInformationList.push_back(assetInformationListJsonList[assetInformationListIndex].AsObject());
    }
    m_assetInformationListHasBeenSet = true;
  }

  return *this;
}

JsonValue LineItem::Jsonize() const
{
  JsonValue payload;

  if(m_catalogItemIdHasBeenSet)
  {
   payload.WithString("CatalogItemId", m_catalogItemId);

  }

  if(m_lineItemIdHasBeenSet)
  {
   payload.WithString("LineItemId", m_lineItemId);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("Quantity", m_quantity);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LineItemStatusMapper::GetNameForLineItemStatus(m_status));
  }

  if(m_shipmentInformationHasBeenSet)
  {
   payload.WithObject("ShipmentInformation", m_shipmentInformation.Jsonize());

  }

  if(m_assetInformationListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetInformationListJsonList(m_assetInformationList.size());
   for(unsigned assetInformationListIndex = 0; assetInformationListIndex < assetInformationListJsonList.GetLength(); ++assetInformationListIndex)
   {
     assetInformationListJsonList[assetInformationListIndex].AsObject(m_assetInformationList[assetInformationListIndex].Jsonize());
   }
   payload.WithArray("AssetInformationList", std::move(assetInformationListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
