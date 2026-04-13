/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

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
 * <p>A category used to classify a listing or product into a logical
 * group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/Category">AWS
 * API Reference</a></p>
 */
class Category {
 public:
  AWS_MARKETPLACEDISCOVERY_API Category() = default;
  AWS_MARKETPLACEDISCOVERY_API Category(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Category& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine-readable identifier of the category.</p>
   */
  inline const Aws::String& GetCategoryId() const { return m_categoryId; }
  inline bool CategoryIdHasBeenSet() const { return m_categoryIdHasBeenSet; }
  template <typename CategoryIdT = Aws::String>
  void SetCategoryId(CategoryIdT&& value) {
    m_categoryIdHasBeenSet = true;
    m_categoryId = std::forward<CategoryIdT>(value);
  }
  template <typename CategoryIdT = Aws::String>
  Category& WithCategoryId(CategoryIdT&& value) {
    SetCategoryId(std::forward<CategoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the category.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  Category& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_categoryId;

  Aws::String m_displayName;
  bool m_categoryIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
