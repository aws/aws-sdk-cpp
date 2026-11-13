/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Route53Domains {
namespace Model {

/**
 * <p>The top-level domain is currently undergoing maintenance and the request
 * cannot be processed. Try again later.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TLDInMaintenance">AWS
 * API Reference</a></p>
 */
class TLDInMaintenance {
 public:
  AWS_ROUTE53DOMAINS_API TLDInMaintenance() = default;
  AWS_ROUTE53DOMAINS_API TLDInMaintenance(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ROUTE53DOMAINS_API TLDInMaintenance& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ROUTE53DOMAINS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The top-level domain is currently undergoing maintenance and the request
   * cannot be processed. Try again later.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  TLDInMaintenance& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The top-level domain that is currently undergoing maintenance.</p>
   */
  inline const Aws::String& GetTld() const { return m_tld; }
  inline bool TldHasBeenSet() const { return m_tldHasBeenSet; }
  template <typename TldT = Aws::String>
  void SetTld(TldT&& value) {
    m_tldHasBeenSet = true;
    m_tld = std::forward<TldT>(value);
  }
  template <typename TldT = Aws::String>
  TLDInMaintenance& WithTld(TldT&& value) {
    SetTld(std::forward<TldT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_tld;
  bool m_messageHasBeenSet = false;
  bool m_tldHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws
