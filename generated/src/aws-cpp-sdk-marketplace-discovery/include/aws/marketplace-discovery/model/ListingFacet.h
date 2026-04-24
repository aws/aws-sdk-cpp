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
 * <p>A facet value with display information and a count of matching listings. Used
 * to build filter and browse experiences.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListingFacet">AWS
 * API Reference</a></p>
 */
class ListingFacet {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListingFacet() = default;
  AWS_MARKETPLACEDISCOVERY_API ListingFacet(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ListingFacet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The internal value used for filtering when passed back in a search
   * filter.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ListingFacet& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the facet value, suitable for display in a user
   * interface.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  ListingFacet& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent facet value for hierarchical facets, such as subcategories.</p>
   */
  inline const Aws::String& GetParent() const { return m_parent; }
  inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }
  template <typename ParentT = Aws::String>
  void SetParent(ParentT&& value) {
    m_parentHasBeenSet = true;
    m_parent = std::forward<ParentT>(value);
  }
  template <typename ParentT = Aws::String>
  ListingFacet& WithParent(ParentT&& value) {
    SetParent(std::forward<ParentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of listings matching this facet value.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline ListingFacet& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  Aws::String m_displayName;

  Aws::String m_parent;

  long long m_count{0};
  bool m_valueHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_parentHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
