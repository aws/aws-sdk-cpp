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
 * <p>A complex type that contains the name of an HTTP namespace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HttpProperties">AWS
 * API Reference</a></p>
 */
class HttpProperties {
 public:
  AWS_SERVICEDISCOVERY_API HttpProperties() = default;
  AWS_SERVICEDISCOVERY_API HttpProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API HttpProperties& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of an HTTP namespace.</p>
   */
  inline const Aws::String& GetHttpName() const { return m_httpName; }
  inline bool HttpNameHasBeenSet() const { return m_httpNameHasBeenSet; }
  template <typename HttpNameT = Aws::String>
  void SetHttpName(HttpNameT&& value) {
    m_httpNameHasBeenSet = true;
    m_httpName = std::forward<HttpNameT>(value);
  }
  template <typename HttpNameT = Aws::String>
  HttpProperties& WithHttpName(HttpNameT&& value) {
    SetHttpName(std::forward<HttpNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_httpName;
  bool m_httpNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
