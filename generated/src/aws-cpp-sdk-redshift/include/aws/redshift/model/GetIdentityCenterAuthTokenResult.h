/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace Redshift {
namespace Model {
/**
 * <p>The response from GetIdentityCenterAuthToken containing the encrypted
 * authentication token and expiration time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetIdentityCenterAuthTokenResponse">AWS
 * API Reference</a></p>
 */
class GetIdentityCenterAuthTokenResult {
 public:
  AWS_REDSHIFT_API GetIdentityCenterAuthTokenResult() = default;
  AWS_REDSHIFT_API GetIdentityCenterAuthTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_REDSHIFT_API GetIdentityCenterAuthTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The encrypted authentication token containing the caller's Amazon Web
   * Services IAM Identity Center identity information. This token is encrypted using
   * Key Management Service and can only be decrypted by the specified Amazon
   * Redshift clusters. Use this token with Amazon Redshift drivers to authenticate
   * using your Amazon Web Services IAM Identity Center identity.</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  GetIdentityCenterAuthTokenResult& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time (UTC) when the token expires. After this timestamp, the token will
   * no longer be valid for authentication.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  GetIdentityCenterAuthTokenResult& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
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
  GetIdentityCenterAuthTokenResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_token;

  Aws::Utils::DateTime m_expirationTime{};

  ResponseMetadata m_responseMetadata;
  bool m_tokenHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
