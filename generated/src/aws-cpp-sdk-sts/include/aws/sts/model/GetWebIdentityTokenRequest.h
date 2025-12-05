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

  Aws::Vector<Tag> m_tags;
  bool m_audienceHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
  bool m_signingAlgorithmHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
