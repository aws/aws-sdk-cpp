/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ResourceContentType.h>
#include <aws/marketplace-discovery/model/TrustCenterProvider.h>

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
 * <p>Summary information for a source of trust center information.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TrustCenterSourceSummary">AWS
 * API Reference</a></p>
 */
class TrustCenterSourceSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API TrustCenterSourceSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API TrustCenterSourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TrustCenterSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the trust center source value.</p>
   */
  inline ResourceContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ResourceContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline TrustCenterSourceSummary& WithContentType(ResourceContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the trust center.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  TrustCenterSourceSummary& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust center provider name displayed to you.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  TrustCenterSourceSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider hosting the trust center.</p>
   */
  inline TrustCenterProvider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(TrustCenterProvider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline TrustCenterSourceSummary& WithProvider(TrustCenterProvider value) {
    SetProvider(value);
    return *this;
  }
  ///@}
 private:
  ResourceContentType m_contentType{ResourceContentType::NOT_SET};

  Aws::String m_value;

  Aws::String m_displayName;

  TrustCenterProvider m_provider{TrustCenterProvider::NOT_SET};
  bool m_contentTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_providerHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
