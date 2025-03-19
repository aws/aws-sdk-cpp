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
    AWS_OUTPOSTS_API LineItem() = default;
    AWS_OUTPOSTS_API LineItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API LineItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the catalog item.</p>
     */
    inline const Aws::String& GetCatalogItemId() const { return m_catalogItemId; }
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }
    template<typename CatalogItemIdT = Aws::String>
    void SetCatalogItemId(CatalogItemIdT&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::forward<CatalogItemIdT>(value); }
    template<typename CatalogItemIdT = Aws::String>
    LineItem& WithCatalogItemId(CatalogItemIdT&& value) { SetCatalogItemId(std::forward<CatalogItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the line item.</p>
     */
    inline const Aws::String& GetLineItemId() const { return m_lineItemId; }
    inline bool LineItemIdHasBeenSet() const { return m_lineItemIdHasBeenSet; }
    template<typename LineItemIdT = Aws::String>
    void SetLineItemId(LineItemIdT&& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = std::forward<LineItemIdT>(value); }
    template<typename LineItemIdT = Aws::String>
    LineItem& WithLineItemId(LineItemIdT&& value) { SetLineItemId(std::forward<LineItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantity of the line item.</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline LineItem& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the line item.</p>
     */
    inline LineItemStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LineItemStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LineItem& WithStatus(LineItemStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about a line item shipment. </p>
     */
    inline const ShipmentInformation& GetShipmentInformation() const { return m_shipmentInformation; }
    inline bool ShipmentInformationHasBeenSet() const { return m_shipmentInformationHasBeenSet; }
    template<typename ShipmentInformationT = ShipmentInformation>
    void SetShipmentInformation(ShipmentInformationT&& value) { m_shipmentInformationHasBeenSet = true; m_shipmentInformation = std::forward<ShipmentInformationT>(value); }
    template<typename ShipmentInformationT = ShipmentInformation>
    LineItem& WithShipmentInformation(ShipmentInformationT&& value) { SetShipmentInformation(std::forward<ShipmentInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about assets. </p>
     */
    inline const Aws::Vector<LineItemAssetInformation>& GetAssetInformationList() const { return m_assetInformationList; }
    inline bool AssetInformationListHasBeenSet() const { return m_assetInformationListHasBeenSet; }
    template<typename AssetInformationListT = Aws::Vector<LineItemAssetInformation>>
    void SetAssetInformationList(AssetInformationListT&& value) { m_assetInformationListHasBeenSet = true; m_assetInformationList = std::forward<AssetInformationListT>(value); }
    template<typename AssetInformationListT = Aws::Vector<LineItemAssetInformation>>
    LineItem& WithAssetInformationList(AssetInformationListT&& value) { SetAssetInformationList(std::forward<AssetInformationListT>(value)); return *this;}
    template<typename AssetInformationListT = LineItemAssetInformation>
    LineItem& AddAssetInformationList(AssetInformationListT&& value) { m_assetInformationListHasBeenSet = true; m_assetInformationList.emplace_back(std::forward<AssetInformationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the previous line item.</p>
     */
    inline const Aws::String& GetPreviousLineItemId() const { return m_previousLineItemId; }
    inline bool PreviousLineItemIdHasBeenSet() const { return m_previousLineItemIdHasBeenSet; }
    template<typename PreviousLineItemIdT = Aws::String>
    void SetPreviousLineItemId(PreviousLineItemIdT&& value) { m_previousLineItemIdHasBeenSet = true; m_previousLineItemId = std::forward<PreviousLineItemIdT>(value); }
    template<typename PreviousLineItemIdT = Aws::String>
    LineItem& WithPreviousLineItemId(PreviousLineItemIdT&& value) { SetPreviousLineItemId(std::forward<PreviousLineItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the previous order.</p>
     */
    inline const Aws::String& GetPreviousOrderId() const { return m_previousOrderId; }
    inline bool PreviousOrderIdHasBeenSet() const { return m_previousOrderIdHasBeenSet; }
    template<typename PreviousOrderIdT = Aws::String>
    void SetPreviousOrderId(PreviousOrderIdT&& value) { m_previousOrderIdHasBeenSet = true; m_previousOrderId = std::forward<PreviousOrderIdT>(value); }
    template<typename PreviousOrderIdT = Aws::String>
    LineItem& WithPreviousOrderId(PreviousOrderIdT&& value) { SetPreviousOrderId(std::forward<PreviousOrderIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet = false;

    Aws::String m_lineItemId;
    bool m_lineItemIdHasBeenSet = false;

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    LineItemStatus m_status{LineItemStatus::NOT_SET};
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
