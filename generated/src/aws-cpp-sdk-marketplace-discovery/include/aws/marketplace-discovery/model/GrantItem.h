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
 * <p>An entitlement granted to the buyer as part of a pricing term.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/GrantItem">AWS
 * API Reference</a></p>
 */
class GrantItem {
 public:
  AWS_MARKETPLACEDISCOVERY_API GrantItem() = default;
  AWS_MARKETPLACEDISCOVERY_API GrantItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API GrantItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine-readable key identifying the entitlement dimension.</p>
   */
  inline const Aws::String& GetDimensionKey() const { return m_dimensionKey; }
  inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }
  template <typename DimensionKeyT = Aws::String>
  void SetDimensionKey(DimensionKeyT&& value) {
    m_dimensionKeyHasBeenSet = true;
    m_dimensionKey = std::forward<DimensionKeyT>(value);
  }
  template <typename DimensionKeyT = Aws::String>
  GrantItem& WithDimensionKey(DimensionKeyT&& value) {
    SetDimensionKey(std::forward<DimensionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the entitlement dimension.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GrantItem& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the entitlement.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GrantItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Labels used to categorize this entitlement, such as by region.</p>
   */
  inline const Aws::Vector<DimensionLabel>& GetDimensionLabels() const { return m_dimensionLabels; }
  inline bool DimensionLabelsHasBeenSet() const { return m_dimensionLabelsHasBeenSet; }
  template <typename DimensionLabelsT = Aws::Vector<DimensionLabel>>
  void SetDimensionLabels(DimensionLabelsT&& value) {
    m_dimensionLabelsHasBeenSet = true;
    m_dimensionLabels = std::forward<DimensionLabelsT>(value);
  }
  template <typename DimensionLabelsT = Aws::Vector<DimensionLabel>>
  GrantItem& WithDimensionLabels(DimensionLabelsT&& value) {
    SetDimensionLabels(std::forward<DimensionLabelsT>(value));
    return *this;
  }
  template <typename DimensionLabelsT = DimensionLabel>
  GrantItem& AddDimensionLabels(DimensionLabelsT&& value) {
    m_dimensionLabelsHasBeenSet = true;
    m_dimensionLabels.emplace_back(std::forward<DimensionLabelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of measurement for the entitlement.</p>
   */
  inline const Aws::String& GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  template <typename UnitT = Aws::String>
  void SetUnit(UnitT&& value) {
    m_unitHasBeenSet = true;
    m_unit = std::forward<UnitT>(value);
  }
  template <typename UnitT = Aws::String>
  GrantItem& WithUnit(UnitT&& value) {
    SetUnit(std::forward<UnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum quantity of the entitlement that can be granted.</p>
   */
  inline int GetMaxQuantity() const { return m_maxQuantity; }
  inline bool MaxQuantityHasBeenSet() const { return m_maxQuantityHasBeenSet; }
  inline void SetMaxQuantity(int value) {
    m_maxQuantityHasBeenSet = true;
    m_maxQuantity = value;
  }
  inline GrantItem& WithMaxQuantity(int value) {
    SetMaxQuantity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_dimensionKey;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::Vector<DimensionLabel> m_dimensionLabels;

  Aws::String m_unit;

  int m_maxQuantity{0};
  bool m_dimensionKeyHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dimensionLabelsHasBeenSet = false;
  bool m_unitHasBeenSet = false;
  bool m_maxQuantityHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
