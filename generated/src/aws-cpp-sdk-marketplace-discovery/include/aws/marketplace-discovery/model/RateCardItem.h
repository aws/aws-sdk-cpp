/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/DimensionLabel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A per-unit rate within a rate card, defining the price for a specific
 * dimension.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/RateCardItem">AWS
 * API Reference</a></p>
 */
class RateCardItem {
 public:
  AWS_MARKETPLACEDISCOVERY_API RateCardItem() = default;
  AWS_MARKETPLACEDISCOVERY_API RateCardItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API RateCardItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine-readable key identifying the dimension being priced.</p>
   */
  inline const Aws::String& GetDimensionKey() const { return m_dimensionKey; }
  inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }
  template <typename DimensionKeyT = Aws::String>
  void SetDimensionKey(DimensionKeyT&& value) {
    m_dimensionKeyHasBeenSet = true;
    m_dimensionKey = std::forward<DimensionKeyT>(value);
  }
  template <typename DimensionKeyT = Aws::String>
  RateCardItem& WithDimensionKey(DimensionKeyT&& value) {
    SetDimensionKey(std::forward<DimensionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the dimension.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  RateCardItem& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the dimension being priced.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RateCardItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Labels used to categorize this dimension, such as by region.</p>
   */
  inline const Aws::Vector<DimensionLabel>& GetDimensionLabels() const { return m_dimensionLabels; }
  inline bool DimensionLabelsHasBeenSet() const { return m_dimensionLabelsHasBeenSet; }
  template <typename DimensionLabelsT = Aws::Vector<DimensionLabel>>
  void SetDimensionLabels(DimensionLabelsT&& value) {
    m_dimensionLabelsHasBeenSet = true;
    m_dimensionLabels = std::forward<DimensionLabelsT>(value);
  }
  template <typename DimensionLabelsT = Aws::Vector<DimensionLabel>>
  RateCardItem& WithDimensionLabels(DimensionLabelsT&& value) {
    SetDimensionLabels(std::forward<DimensionLabelsT>(value));
    return *this;
  }
  template <typename DimensionLabelsT = DimensionLabel>
  RateCardItem& AddDimensionLabels(DimensionLabelsT&& value) {
    m_dimensionLabelsHasBeenSet = true;
    m_dimensionLabels.emplace_back(std::forward<DimensionLabelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of measurement for the dimension.</p>
   */
  inline const Aws::String& GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  template <typename UnitT = Aws::String>
  void SetUnit(UnitT&& value) {
    m_unitHasBeenSet = true;
    m_unit = std::forward<UnitT>(value);
  }
  template <typename UnitT = Aws::String>
  RateCardItem& WithUnit(UnitT&& value) {
    SetUnit(std::forward<UnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The price per unit for the dimension.</p>
   */
  inline const Aws::String& GetPrice() const { return m_price; }
  inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
  template <typename PriceT = Aws::String>
  void SetPrice(PriceT&& value) {
    m_priceHasBeenSet = true;
    m_price = std::forward<PriceT>(value);
  }
  template <typename PriceT = Aws::String>
  RateCardItem& WithPrice(PriceT&& value) {
    SetPrice(std::forward<PriceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dimensionKey;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::Vector<DimensionLabel> m_dimensionLabels;

  Aws::String m_unit;

  Aws::String m_price;
  bool m_dimensionKeyHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dimensionLabelsHasBeenSet = false;
  bool m_unitHasBeenSet = false;
  bool m_priceHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
