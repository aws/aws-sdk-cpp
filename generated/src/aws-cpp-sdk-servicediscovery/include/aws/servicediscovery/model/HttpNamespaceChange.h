/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ServiceDiscovery {
namespace Model {

/**
 * <p>Updated properties for the HTTP namespace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HttpNamespaceChange">AWS
 * API Reference</a></p>
 */
class HttpNamespaceChange {
 public:
  AWS_SERVICEDISCOVERY_API HttpNamespaceChange() = default;
  AWS_SERVICEDISCOVERY_API HttpNamespaceChange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API HttpNamespaceChange& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>An updated description for the HTTP namespace.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  HttpNamespaceChange& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
