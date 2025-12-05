/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace STS {
namespace Model {
class GetWebIdentityTokenResult {
 public:
  AWS_STS_API GetWebIdentityTokenResult() = default;
  AWS_STS_API GetWebIdentityTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_STS_API GetWebIdentityTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A signed JSON Web Token (JWT) that represents the caller's Amazon Web
   * Services identity. The token contains standard JWT claims such as subject,
   * audience, expiration time, and additional identity attributes added by STS as
   * custom claims. You can also add your own custom claims to the token by passing
   * tags as request parameters to the <code>GetWebIdentityToken</code> API. The
   * token is signed using the specified signing algorithm and can be verified using
   * the verification keys available at the issuer's JWKS endpoint.</p>
   */
  inline const Aws::String& GetWebIdentityToken() const { return m_webIdentityToken; }
  template <typename WebIdentityTokenT = Aws::String>
  void SetWebIdentityToken(WebIdentityTokenT&& value) {
    m_webIdentityTokenHasBeenSet = true;
    m_webIdentityToken = std::forward<WebIdentityTokenT>(value);
  }
  template <typename WebIdentityTokenT = Aws::String>
  GetWebIdentityTokenResult& WithWebIdentityToken(WebIdentityTokenT&& value) {
    SetWebIdentityToken(std::forward<WebIdentityTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the web identity token expires, in UTC. The expiration
   * is determined by adding the <code>DurationSeconds</code> value to the time the
   * token was issued. After this time, the token should no longer be considered
   * valid.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
  template <typename ExpirationT = Aws::Utils::DateTime>
  void SetExpiration(ExpirationT&& value) {
    m_expirationHasBeenSet = true;
    m_expiration = std::forward<ExpirationT>(value);
  }
  template <typename ExpirationT = Aws::Utils::DateTime>
  GetWebIdentityTokenResult& WithExpiration(ExpirationT&& value) {
    SetExpiration(std::forward<ExpirationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetWebIdentityTokenResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_webIdentityToken;

  Aws::Utils::DateTime m_expiration{};

  ResponseMetadata m_responseMetadata;
  bool m_webIdentityTokenHasBeenSet = false;
  bool m_expirationHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
