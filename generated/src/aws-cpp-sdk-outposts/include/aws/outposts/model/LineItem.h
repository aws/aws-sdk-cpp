/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/LineItemStatus.h>
#include <aws/outposts/model/ShipmentInformation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/LineItemAssetInformation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about a line item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/LineItem">AWS
   * API Reference</a></p>
   */
  class LineItem
  {
  public:
    AWS_OUTPOSTS_API LineItem();
    AWS_OUTPOSTS_API LineItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API LineItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the catalog item.</p>
     */
    inline const Aws::String& GetCatalogItemId() const{ return m_catalogItemId; }
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }
    inline void SetCatalogItemId(const Aws::String& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = value; }
    inline void SetCatalogItemId(Aws::String&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::move(value); }
    inline void SetCatalogItemId(const char* value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId.assign(value); }
    inline LineItem& WithCatalogItemId(const Aws::String& value) { SetCatalogItemId(value); return *this;}
    inline LineItem& WithCatalogItemId(Aws::String&& value) { SetCatalogItemId(std::move(value)); return *this;}
    inline LineItem& WithCatalogItemId(const char* value) { SetCatalogItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the line item.</p>
     */
    inline const Aws::String& GetLineItemId() const{ return m_lineItemId; }
    inline bool LineItemIdHasBeenSet() const { return m_lineItemIdHasBeenSet; }
    inline void SetLineItemId(const Aws::String& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = value; }
    inline void SetLineItemId(Aws::String&& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = std::move(value); }
    inline void SetLineItemId(const char* value) { m_lineItemIdHasBeenSet = true; m_lineItemId.assign(value); }
    inline LineItem& WithLineItemId(const Aws::String& value) { SetLineItemId(value); return *this;}
    inline LineItem& WithLineItemId(Aws::String&& value) { SetLineItemId(std::move(value)); return *this;}
    inline LineItem& WithLineItemId(const char* value) { SetLineItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantity of the line item.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline LineItem& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the line item.</p>
     */
    inline const LineItemStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LineItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LineItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LineItem& WithStatus(const LineItemStatus& value) { SetStatus(value); return *this;}
    inline LineItem& WithStatus(LineItemStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about a line item shipment. </p>
     */
    inline const ShipmentInformation& GetShipmentInformation() const{ return m_shipmentInformation; }
    inline bool ShipmentInformationHasBeenSet() const { return m_shipmentInformationHasBeenSet; }
    inline void SetShipmentInformation(const ShipmentInformation& value) { m_shipmentInformationHasBeenSet = true; m_shipmentInformation = value; }
    inline void SetShipmentInformation(ShipmentInformation&& value) { m_shipmentInformationHasBeenSet = true; m_shipmentInformation = std::move(value); }
    inline LineItem& WithShipmentInformation(const ShipmentInformation& value) { SetShipmentInformation(value); return *this;}
    inline LineItem& WithShipmentInformation(ShipmentInformation&& value) { SetShipmentInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about assets. </p>
     */
    inline const Aws::Vector<LineItemAssetInformation>& GetAssetInformationList() const{ return m_assetInformationList; }
    inline bool AssetInformationListHasBeenSet() const { return m_assetInformationListHasBeenSet; }
    inline void SetAssetInformationList(const Aws::Vector<LineItemAssetInformation>& value) { m_assetInformationListHasBeenSet = true; m_assetInformationList = value; }
    inline void SetAssetInformationList(Aws::Vector<LineItemAssetInformation>&& value) { m_assetInformationListHasBeenSet = true; m_assetInformationList = std::move(value); }
    inline LineItem& WithAssetInformationList(const Aws::Vector<LineItemAssetInformation>& value) { SetAssetInformationList(value); return *this;}
    inline LineItem& WithAssetInformationList(Aws::Vector<LineItemAssetInformation>&& value) { SetAssetInformationList(std::move(value)); return *this;}
    inline LineItem& AddAssetInformationList(const LineItemAssetInformation& value) { m_assetInformationListHasBeenSet = true; m_assetInformationList.push_back(value); return *this; }
    inline LineItem& AddAssetInformationList(LineItemAssetInformation&& value) { m_assetInformationListHasBeenSet = true; m_assetInformationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the previous line item.</p>
     */
    inline const Aws::String& GetPreviousLineItemId() const{ return m_previousLineItemId; }
    inline bool PreviousLineItemIdHasBeenSet() const { return m_previousLineItemIdHasBeenSet; }
    inline void SetPreviousLineItemId(const Aws::String& value) { m_previousLineItemIdHasBeenSet = true; m_previousLineItemId = value; }
    inline void SetPreviousLineItemId(Aws::String&& value) { m_previousLineItemIdHasBeenSet = true; m_previousLineItemId = std::move(value); }
    inline void SetPreviousLineItemId(const char* value) { m_previousLineItemIdHasBeenSet = true; m_previousLineItemId.assign(value); }
    inline LineItem& WithPreviousLineItemId(const Aws::String& value) { SetPreviousLineItemId(value); return *this;}
    inline LineItem& WithPreviousLineItemId(Aws::String&& value) { SetPreviousLineItemId(std::move(value)); return *this;}
    inline LineItem& WithPreviousLineItemId(const char* value) { SetPreviousLineItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the previous order.</p>
     */
    inline const Aws::String& GetPreviousOrderId() const{ return m_previousOrderId; }
    inline bool PreviousOrderIdHasBeenSet() const { return m_previousOrderIdHasBeenSet; }
    inline void SetPreviousOrderId(const Aws::String& value) { m_previousOrderIdHasBeenSet = true; m_previousOrderId = value; }
    inline void SetPreviousOrderId(Aws::String&& value) { m_previousOrderIdHasBeenSet = true; m_previousOrderId = std::move(value); }
    inline void SetPreviousOrderId(const char* value) { m_previousOrderIdHasBeenSet = true; m_previousOrderId.assign(value); }
    inline LineItem& WithPreviousOrderId(const Aws::String& value) { SetPreviousOrderId(value); return *this;}
    inline LineItem& WithPreviousOrderId(Aws::String&& value) { SetPreviousOrderId(std::move(value)); return *this;}
    inline LineItem& WithPreviousOrderId(const char* value) { SetPreviousOrderId(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet = false;

    Aws::String m_lineItemId;
    bool m_lineItemIdHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    LineItemStatus m_status;
    bool m_statusHasBeenSet = false;

    ShipmentInformation m_shipmentInformation;
    bool m_shipmentInformationHasBeenSet = false;

    Aws::Vector<LineItemAssetInformation> m_assetInformationList;
    bool m_assetInformationListHasBeenSet = false;

    Aws::String m_previousLineItemId;
    bool m_previousLineItemIdHasBeenSet = false;

    Aws::String m_previousOrderId;
    bool m_previousOrderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
