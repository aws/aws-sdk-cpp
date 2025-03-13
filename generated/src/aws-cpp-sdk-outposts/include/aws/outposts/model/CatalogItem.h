/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CatalogItemStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/EC2Capacity.h>
#include <aws/outposts/model/SupportedStorageEnum.h>
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
   * <p> Information about a catalog item. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CatalogItem">AWS
   * API Reference</a></p>
   */
  class CatalogItem
  {
  public:
    AWS_OUTPOSTS_API CatalogItem() = default;
    AWS_OUTPOSTS_API CatalogItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API CatalogItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the catalog item. </p>
     */
    inline const Aws::String& GetCatalogItemId() const { return m_catalogItemId; }
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }
    template<typename CatalogItemIdT = Aws::String>
    void SetCatalogItemId(CatalogItemIdT&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::forward<CatalogItemIdT>(value); }
    template<typename CatalogItemIdT = Aws::String>
    CatalogItem& WithCatalogItemId(CatalogItemIdT&& value) { SetCatalogItemId(std::forward<CatalogItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of a catalog item. </p>
     */
    inline CatalogItemStatus GetItemStatus() const { return m_itemStatus; }
    inline bool ItemStatusHasBeenSet() const { return m_itemStatusHasBeenSet; }
    inline void SetItemStatus(CatalogItemStatus value) { m_itemStatusHasBeenSet = true; m_itemStatus = value; }
    inline CatalogItem& WithItemStatus(CatalogItemStatus value) { SetItemStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the EC2 capacity of an item. </p>
     */
    inline const Aws::Vector<EC2Capacity>& GetEC2Capacities() const { return m_eC2Capacities; }
    inline bool EC2CapacitiesHasBeenSet() const { return m_eC2CapacitiesHasBeenSet; }
    template<typename EC2CapacitiesT = Aws::Vector<EC2Capacity>>
    void SetEC2Capacities(EC2CapacitiesT&& value) { m_eC2CapacitiesHasBeenSet = true; m_eC2Capacities = std::forward<EC2CapacitiesT>(value); }
    template<typename EC2CapacitiesT = Aws::Vector<EC2Capacity>>
    CatalogItem& WithEC2Capacities(EC2CapacitiesT&& value) { SetEC2Capacities(std::forward<EC2CapacitiesT>(value)); return *this;}
    template<typename EC2CapacitiesT = EC2Capacity>
    CatalogItem& AddEC2Capacities(EC2CapacitiesT&& value) { m_eC2CapacitiesHasBeenSet = true; m_eC2Capacities.emplace_back(std::forward<EC2CapacitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Information about the power draw of an item. </p>
     */
    inline double GetPowerKva() const { return m_powerKva; }
    inline bool PowerKvaHasBeenSet() const { return m_powerKvaHasBeenSet; }
    inline void SetPowerKva(double value) { m_powerKvaHasBeenSet = true; m_powerKva = value; }
    inline CatalogItem& WithPowerKva(double value) { SetPowerKva(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The weight of the item in pounds. </p>
     */
    inline int GetWeightLbs() const { return m_weightLbs; }
    inline bool WeightLbsHasBeenSet() const { return m_weightLbsHasBeenSet; }
    inline void SetWeightLbs(int value) { m_weightLbsHasBeenSet = true; m_weightLbs = value; }
    inline CatalogItem& WithWeightLbs(int value) { SetWeightLbs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The uplink speed this catalog item requires for the connection to the
     * Region. </p>
     */
    inline const Aws::Vector<int>& GetSupportedUplinkGbps() const { return m_supportedUplinkGbps; }
    inline bool SupportedUplinkGbpsHasBeenSet() const { return m_supportedUplinkGbpsHasBeenSet; }
    template<typename SupportedUplinkGbpsT = Aws::Vector<int>>
    void SetSupportedUplinkGbps(SupportedUplinkGbpsT&& value) { m_supportedUplinkGbpsHasBeenSet = true; m_supportedUplinkGbps = std::forward<SupportedUplinkGbpsT>(value); }
    template<typename SupportedUplinkGbpsT = Aws::Vector<int>>
    CatalogItem& WithSupportedUplinkGbps(SupportedUplinkGbpsT&& value) { SetSupportedUplinkGbps(std::forward<SupportedUplinkGbpsT>(value)); return *this;}
    inline CatalogItem& AddSupportedUplinkGbps(int value) { m_supportedUplinkGbpsHasBeenSet = true; m_supportedUplinkGbps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The supported storage options for the catalog item. </p>
     */
    inline const Aws::Vector<SupportedStorageEnum>& GetSupportedStorage() const { return m_supportedStorage; }
    inline bool SupportedStorageHasBeenSet() const { return m_supportedStorageHasBeenSet; }
    template<typename SupportedStorageT = Aws::Vector<SupportedStorageEnum>>
    void SetSupportedStorage(SupportedStorageT&& value) { m_supportedStorageHasBeenSet = true; m_supportedStorage = std::forward<SupportedStorageT>(value); }
    template<typename SupportedStorageT = Aws::Vector<SupportedStorageEnum>>
    CatalogItem& WithSupportedStorage(SupportedStorageT&& value) { SetSupportedStorage(std::forward<SupportedStorageT>(value)); return *this;}
    inline CatalogItem& AddSupportedStorage(SupportedStorageEnum value) { m_supportedStorageHasBeenSet = true; m_supportedStorage.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet = false;

    CatalogItemStatus m_itemStatus{CatalogItemStatus::NOT_SET};
    bool m_itemStatusHasBeenSet = false;

    Aws::Vector<EC2Capacity> m_eC2Capacities;
    bool m_eC2CapacitiesHasBeenSet = false;

    double m_powerKva{0.0};
    bool m_powerKvaHasBeenSet = false;

    int m_weightLbs{0};
    bool m_weightLbsHasBeenSet = false;

    Aws::Vector<int> m_supportedUplinkGbps;
    bool m_supportedUplinkGbpsHasBeenSet = false;

    Aws::Vector<SupportedStorageEnum> m_supportedStorage;
    bool m_supportedStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
