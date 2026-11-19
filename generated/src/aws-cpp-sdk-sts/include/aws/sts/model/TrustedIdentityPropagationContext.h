/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/OriginIdentity.h>
#include <aws/sts/model/TransactionContext.h>

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
 * <p>The trusted identity propagation context that Amazon Web Services STS set in
 * a session from the identity provider's token. A member is absent when the
 * session has none of its keys.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/TrustedIdentityPropagationContext">AWS
 * API Reference</a></p>
 */
class TrustedIdentityPropagationContext {
 public:
  AWS_STS_API TrustedIdentityPropagationContext() = default;
  AWS_STS_API TrustedIdentityPropagationContext(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_STS_API TrustedIdentityPropagationContext& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_STS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_STS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The identity of the end user on whose behalf the session acts.</p>
   */
  inline const OriginIdentity& GetOriginIdentity() const { return m_originIdentity; }
  inline bool OriginIdentityHasBeenSet() const { return m_originIdentityHasBeenSet; }
  template <typename OriginIdentityT = OriginIdentity>
  void SetOriginIdentity(OriginIdentityT&& value) {
    m_originIdentityHasBeenSet = true;
    m_originIdentity = std::forward<OriginIdentityT>(value);
  }
  template <typename OriginIdentityT = OriginIdentity>
  TrustedIdentityPropagationContext& WithOriginIdentity(OriginIdentityT&& value) {
    SetOriginIdentity(std::forward<OriginIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional claims about the request that the identity provider asserted.</p>
   */
  inline const TransactionContext& GetTransactionContext() const { return m_transactionContext; }
  inline bool TransactionContextHasBeenSet() const { return m_transactionContextHasBeenSet; }
  template <typename TransactionContextT = TransactionContext>
  void SetTransactionContext(TransactionContextT&& value) {
    m_transactionContextHasBeenSet = true;
    m_transactionContext = std::forward<TransactionContextT>(value);
  }
  template <typename TransactionContextT = TransactionContext>
  TrustedIdentityPropagationContext& WithTransactionContext(TransactionContextT&& value) {
    SetTransactionContext(std::forward<TransactionContextT>(value));
    return *this;
  }
  ///@}
 private:
  OriginIdentity m_originIdentity;

  TransactionContext m_transactionContext;
  bool m_originIdentityHasBeenSet = false;
  bool m_transactionContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
