/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The session's <code>aws:OriginIdentity/Subject</code>,
 * <code>aws:OriginIdentity/SubjectType</code>,
 * <code>aws:OriginIdentity/Issuer</code> and
 * <code>aws:OriginIdentity/FederatedProviderArn</code> keys. A member is absent
 * when the session does not have the key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/OriginIdentity">AWS
 * API Reference</a></p>
 */
class OriginIdentity {
 public:
  AWS_STS_API OriginIdentity() = default;
  AWS_STS_API OriginIdentity(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_STS_API OriginIdentity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_STS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_STS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The value of the <code>aws:OriginIdentity/Subject</code> key: the end user's
   * identifier, taken from the token claim that the context provider maps as the
   * subject.</p>
   */
  inline const Aws::String& GetSubject() const { return m_subject; }
  inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
  template <typename SubjectT = Aws::String>
  void SetSubject(SubjectT&& value) {
    m_subjectHasBeenSet = true;
    m_subject = std::forward<SubjectT>(value);
  }
  template <typename SubjectT = Aws::String>
  OriginIdentity& WithSubject(SubjectT&& value) {
    SetSubject(std::forward<SubjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the <code>aws:OriginIdentity/SubjectType</code> key, which
   * indicates whether the end user is a person (<code>user</code>) or a non-human
   * caller such as an application or service (<code>workload</code>).</p>
   */
  inline const Aws::String& GetSubjectType() const { return m_subjectType; }
  inline bool SubjectTypeHasBeenSet() const { return m_subjectTypeHasBeenSet; }
  template <typename SubjectTypeT = Aws::String>
  void SetSubjectType(SubjectTypeT&& value) {
    m_subjectTypeHasBeenSet = true;
    m_subjectType = std::forward<SubjectTypeT>(value);
  }
  template <typename SubjectTypeT = Aws::String>
  OriginIdentity& WithSubjectType(SubjectTypeT&& value) {
    SetSubjectType(std::forward<SubjectTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the <code>aws:OriginIdentity/Issuer</code> key. For
   * <code>AssumeRoleWithWebIdentity</code>, this is the <code>iss</code> claim of
   * the token without the <code>https://</code> prefix. For
   * <code>AssumeRoleWithSAML</code>, this is a hash of the key that signed the SAML
   * assertion, not the <code>Issuer</code> element of the assertion.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  OriginIdentity& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the <code>aws:OriginIdentity/FederatedProviderArn</code> key:
   * the ARN of the IAM identity provider that the request federated through.</p>
   */
  inline const Aws::String& GetFederatedProviderArn() const { return m_federatedProviderArn; }
  inline bool FederatedProviderArnHasBeenSet() const { return m_federatedProviderArnHasBeenSet; }
  template <typename FederatedProviderArnT = Aws::String>
  void SetFederatedProviderArn(FederatedProviderArnT&& value) {
    m_federatedProviderArnHasBeenSet = true;
    m_federatedProviderArn = std::forward<FederatedProviderArnT>(value);
  }
  template <typename FederatedProviderArnT = Aws::String>
  OriginIdentity& WithFederatedProviderArn(FederatedProviderArnT&& value) {
    SetFederatedProviderArn(std::forward<FederatedProviderArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subject;

  Aws::String m_subjectType;

  Aws::String m_issuer;

  Aws::String m_federatedProviderArn;
  bool m_subjectHasBeenSet = false;
  bool m_subjectTypeHasBeenSet = false;
  bool m_issuerHasBeenSet = false;
  bool m_federatedProviderArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
