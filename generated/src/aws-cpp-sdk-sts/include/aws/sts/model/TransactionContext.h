/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace STS {
namespace Model {

/**
 * <p>The session's <code>aws:TransactionContext/IdentityProvider/ *</code>
 * keys.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/TransactionContext">AWS
 * API Reference</a></p>
 */
class TransactionContext {
 public:
  AWS_STS_API TransactionContext() = default;
  AWS_STS_API TransactionContext(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_STS_API TransactionContext& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_STS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_STS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The session's <code>aws:TransactionContext/IdentityProvider/ *</code> keys,
   * keyed by the part of the key name after
   * <code>aws:TransactionContext/IdentityProvider/</code>. Each value is up to 128
   * characters.</p> <p>The number of entries is bounded twice. IAM limits how many
   * keys a context provider maps when you configure it on the identity provider, and
   * Amazon Web Services STS rejects a session whose session token exceeds the
   * maximum size with <code>PackedPolicyTooLarge</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetIdentityProvider() const { return m_identityProvider; }
  inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
  template <typename IdentityProviderT = Aws::Map<Aws::String, Aws::String>>
  void SetIdentityProvider(IdentityProviderT&& value) {
    m_identityProviderHasBeenSet = true;
    m_identityProvider = std::forward<IdentityProviderT>(value);
  }
  template <typename IdentityProviderT = Aws::Map<Aws::String, Aws::String>>
  TransactionContext& WithIdentityProvider(IdentityProviderT&& value) {
    SetIdentityProvider(std::forward<IdentityProviderT>(value));
    return *this;
  }
  template <typename IdentityProviderKeyT = Aws::String, typename IdentityProviderValueT = Aws::String>
  TransactionContext& AddIdentityProvider(IdentityProviderKeyT&& key, IdentityProviderValueT&& value) {
    m_identityProviderHasBeenSet = true;
    m_identityProvider.emplace(std::forward<IdentityProviderKeyT>(key), std::forward<IdentityProviderValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_identityProvider;
  bool m_identityProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
