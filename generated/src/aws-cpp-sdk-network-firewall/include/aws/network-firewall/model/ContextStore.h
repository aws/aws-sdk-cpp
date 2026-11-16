/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Contains details about a context store, including its unique identifier and
 * the account that owns it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ContextStore">AWS
 * API Reference</a></p>
 */
class ContextStore {
 public:
  AWS_NETWORKFIREWALL_API ContextStore() = default;
  AWS_NETWORKFIREWALL_API ContextStore(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ContextStore& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the context store. Use this value in
   * <code>ListResourcesInContextStore</code> to list the resources that the context
   * store records.</p>
   */
  inline const Aws::String& GetContextStoreId() const { return m_contextStoreId; }
  inline bool ContextStoreIdHasBeenSet() const { return m_contextStoreIdHasBeenSet; }
  template <typename ContextStoreIdT = Aws::String>
  void SetContextStoreId(ContextStoreIdT&& value) {
    m_contextStoreIdHasBeenSet = true;
    m_contextStoreId = std::forward<ContextStoreIdT>(value);
  }
  template <typename ContextStoreIdT = Aws::String>
  ContextStore& WithContextStoreId(ContextStoreIdT&& value) {
    SetContextStoreId(std::forward<ContextStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the context store.</p>
   */
  inline const Aws::String& GetContextStoreOwnerAccountId() const { return m_contextStoreOwnerAccountId; }
  inline bool ContextStoreOwnerAccountIdHasBeenSet() const { return m_contextStoreOwnerAccountIdHasBeenSet; }
  template <typename ContextStoreOwnerAccountIdT = Aws::String>
  void SetContextStoreOwnerAccountId(ContextStoreOwnerAccountIdT&& value) {
    m_contextStoreOwnerAccountIdHasBeenSet = true;
    m_contextStoreOwnerAccountId = std::forward<ContextStoreOwnerAccountIdT>(value);
  }
  template <typename ContextStoreOwnerAccountIdT = Aws::String>
  ContextStore& WithContextStoreOwnerAccountId(ContextStoreOwnerAccountIdT&& value) {
    SetContextStoreOwnerAccountId(std::forward<ContextStoreOwnerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contextStoreId;

  Aws::String m_contextStoreOwnerAccountId;
  bool m_contextStoreIdHasBeenSet = false;
  bool m_contextStoreOwnerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
