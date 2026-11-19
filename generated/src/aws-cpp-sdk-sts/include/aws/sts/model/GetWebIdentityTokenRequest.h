/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sts/STSRequest.h>
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Tag.h>
#include <aws/sts/model/WebIdentityTokenSubjectModeType.h>

#include <utility>

namespace Aws {
namespace STS {
namespace Model {

/**
 */
class GetWebIdentityTokenRequest : public STSRequest {
 public:
  AWS_STS_API GetWebIdentityTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWebIdentityToken"; }

  AWS_STS_API Aws::String SerializePayload() const override;

 protected:
  AWS_STS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The intended recipient of the web identity token. This value populates the
   * <code>aud</code> claim in the JWT and should identify the service or application
   * that will validate and use the token. The external service should verify this
   * claim to ensure the token was intended for their use.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAudience() const { return m_audience; }
  inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }
  template <typename AudienceT = Aws::Vector<Aws::String>>
  void SetAudience(AudienceT&& value) {
    m_audienceHasBeenSet = true;
    m_audience = std::forward<AudienceT>(value);
  }
  template <typename AudienceT = Aws::Vector<Aws::String>>
  GetWebIdentityTokenRequest& WithAudience(AudienceT&& value) {
    SetAudience(std::forward<AudienceT>(value));
    return *this;
  }
  template <typename AudienceT = Aws::String>
  GetWebIdentityTokenRequest& AddAudience(AudienceT&& value) {
    m_audienceHasBeenSet = true;
    m_audience.emplace_back(std::forward<AudienceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration, in seconds, for which the JSON Web Token (JWT) will remain
   * valid. The value can range from 60 seconds (1 minute) to 3600 seconds (1 hour).
   * If not specified, the default duration is 300 seconds (5 minutes). The token is
   * designed to be short-lived and should be used for proof of identity, then
   * exchanged for credentials or short-lived tokens in the external service.</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline GetWebIdentityTokenRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cryptographic algorithm to use for signing the JSON Web Token (JWT).
   * Valid values are RS256 (RSA with SHA-256) and ES384 (ECDSA using P-384 curve
   * with SHA-384). </p>
   */
  inline const Aws::String& GetSigningAlgorithm() const { return m_signingAlgorithm; }
  inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }
  template <typename SigningAlgorithmT = Aws::String>
  void SetSigningAlgorithm(SigningAlgorithmT&& value) {
    m_signingAlgorithmHasBeenSet = true;
    m_signingAlgorithm = std::forward<SigningAlgorithmT>(value);
  }
  template <typename SigningAlgorithmT = Aws::String>
  GetWebIdentityTokenRequest& WithSigningAlgorithm(SigningAlgorithmT&& value) {
    SetSigningAlgorithm(std::forward<SigningAlgorithmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more OAuth 2.0 scope values to include in the JSON Web Token (JWT).
   * Amazon Web Services STS copies the value exactly as you send it into the
   * top-level <code>scope</code> claim of the token. If you don't specify
   * <code>Scope</code>, the token doesn't include a <code>scope</code> claim.</p>
   * <p>Separate multiple values with a single space, as defined in <a
   * href="https://www.rfc-editor.org/rfc/rfc6749#section-3.3">RFC 6749, section
   * 3.3</a> on the IETF website. Don't begin or end <code>Scope</code> with a space.
   * Each scope value can contain printable ASCII characters except spaces, double
   * quotation marks (<code>"</code>), commas (<code>,</code>), and backslashes
   * (<code>\</code>).</p> <p>You can't repeat a scope value. Scope values are case
   * sensitive. This means that <code>read</code> and <code>READ</code> are separate
   * values.</p> <p>You can specify <code>Scope</code> only when
   * <code>SubjectMode</code> is <code>OriginIdentity</code> and you request exactly
   * one audience. To specify <code>Scope</code>, the calling principal must have
   * permission for the <code>sts:SetWebIdentityTokenScope</code> action in addition
   * to <code>sts:GetWebIdentityToken</code>. You can use the multivalued
   * <code>sts:IdentityTokenScope</code> condition key in a policy to control which
   * scope values a principal can request.</p>
   */
  inline const Aws::String& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = Aws::String>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = Aws::String>
  GetWebIdentityTokenRequest& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which identity STS puts in the <code>sub</code> (subject) claim of
   * the JSON Web Token (JWT). Valid values are <code>AWSIdentity</code> and
   * <code>OriginIdentity</code>. If you don't specify a value, Amazon Web Services
   * STS uses <code>AWSIdentity</code>.</p> <ul> <li> <p> <code>AWSIdentity</code> –
   * The <code>sub</code> claim contains the ARN of the calling Amazon Web Services
   * principal.</p> </li> <li> <p> <code>OriginIdentity</code> – The <code>sub</code>
   * claim contains the value of the <code>aws:OriginIdentity/Subject</code> key in
   * the trusted identity propagation context of the calling session. For example,
   * this can identify the human user or workload on whose behalf the calling session
   * acts. Amazon Web Services STS also adds a <code>subject_mode</code> claim to the
   * token.</p> <p>To use <code>OriginIdentity</code>, the trusted identity
   * propagation context of the calling session must contain the
   * <code>aws:OriginIdentity/Subject</code> key and either the
   * <code>aws:OriginIdentity/Issuer</code> key or the
   * <code>aws:OriginIdentity/FederatedProviderArn</code> key. If it doesn't, or if
   * the subject is blank, Amazon Web Services STS rejects the request with a
   * validation error.</p> <p>Amazon Web Services STS denies the request if the
   * subject begins with the text <code>arn:</code>, in any combination of uppercase
   * and lowercase letters. Amazon Web Services STS also denies the request if the
   * subject begins or ends with a space, or contains a control, format, or separator
   * character other than a space.</p> </li> </ul> <p>You can use the
   * <code>sts:SubjectMode</code> condition key in a policy to control which subject
   * modes a principal can request.</p>
   */
  inline WebIdentityTokenSubjectModeType GetSubjectMode() const { return m_subjectMode; }
  inline bool SubjectModeHasBeenSet() const { return m_subjectModeHasBeenSet; }
  inline void SetSubjectMode(WebIdentityTokenSubjectModeType value) {
    m_subjectModeHasBeenSet = true;
    m_subjectMode = value;
  }
  inline GetWebIdentityTokenRequest& WithSubjectMode(WebIdentityTokenSubjectModeType value) {
    SetSubjectMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional list of tags to include in the JSON Web Token (JWT). These tags
   * are added as custom claims to the JWT and can be used by the downstream service
   * for authorization decisions. </p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  GetWebIdentityTokenRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  GetWebIdentityTokenRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_audience;

  int m_durationSeconds{0};

  Aws::String m_signingAlgorithm;

  Aws::String m_scope;

  WebIdentityTokenSubjectModeType m_subjectMode{WebIdentityTokenSubjectModeType::NOT_SET};

  Aws::Vector<Tag> m_tags;
  bool m_audienceHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
  bool m_signingAlgorithmHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_subjectModeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
