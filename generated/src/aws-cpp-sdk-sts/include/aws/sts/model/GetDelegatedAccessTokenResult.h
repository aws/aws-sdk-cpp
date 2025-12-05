/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
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
class GetDelegatedAccessTokenResult {
 public:
  AWS_STS_API GetDelegatedAccessTokenResult() = default;
  AWS_STS_API GetDelegatedAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_STS_API GetDelegatedAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Credentials& GetCredentials() const { return m_credentials; }
  template <typename CredentialsT = Credentials>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = Credentials>
  GetDelegatedAccessTokenResult& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the maximum policy size that is used by the session policy.
   * The policy size is calculated as the sum of all the session policies and
   * permission boundaries attached to the session. If the packed size exceeds 100%,
   * the request fails.</p>
   */
  inline int GetPackedPolicySize() const { return m_packedPolicySize; }
  inline void SetPackedPolicySize(int value) {
    m_packedPolicySizeHasBeenSet = true;
    m_packedPolicySize = value;
  }
  inline GetDelegatedAccessTokenResult& WithPackedPolicySize(int value) {
    SetPackedPolicySize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the principal that was assumed when
   * obtaining the delegated access token. This ARN identifies the IAM entity whose
   * permissions are granted by the temporary credentials.</p>
   */
  inline const Aws::String& GetAssumedPrincipal() const { return m_assumedPrincipal; }
  template <typename AssumedPrincipalT = Aws::String>
  void SetAssumedPrincipal(AssumedPrincipalT&& value) {
    m_assumedPrincipalHasBeenSet = true;
    m_assumedPrincipal = std::forward<AssumedPrincipalT>(value);
  }
  template <typename AssumedPrincipalT = Aws::String>
  GetDelegatedAccessTokenResult& WithAssumedPrincipal(AssumedPrincipalT&& value) {
    SetAssumedPrincipal(std::forward<AssumedPrincipalT>(value));
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
  GetDelegatedAccessTokenResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Credentials m_credentials;

  int m_packedPolicySize{0};

  Aws::String m_assumedPrincipal;

  ResponseMetadata m_responseMetadata;
  bool m_credentialsHasBeenSet = false;
  bool m_packedPolicySizeHasBeenSet = false;
  bool m_assumedPrincipalHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
