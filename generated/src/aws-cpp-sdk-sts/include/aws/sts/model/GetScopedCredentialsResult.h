/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
#include <aws/sts/model/ResponseMetadata.h>
#include <aws/sts/model/ScopedSession.h>

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
/**
 * <p>Contains the response to a successful <a>GetScopedCredentials</a> request,
 * including the scoped-down temporary Amazon Web Services credentials and metadata
 * about the resulting session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/GetScopedCredentialsResponse">AWS
 * API Reference</a></p>
 */
class GetScopedCredentialsResult {
 public:
  AWS_STS_API GetScopedCredentialsResult() = default;
  AWS_STS_API GetScopedCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_STS_API GetScopedCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The temporary security credentials for the scoped down session, which include
   * an access key ID, a secret access key, and a security token.</p>  <p>The
   * size of the security token that STS API operations return is not fixed. We
   * strongly recommend that you make no assumptions about the maximum size.</p>
   *
   */
  inline const Credentials& GetCredentials() const { return m_credentials; }
  template <typename CredentialsT = Credentials>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = Credentials>
  GetScopedCredentialsResult& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata about the resulting scoped session, including its identifier and
   * ARN. Because the identity does not change, the identifiers reflect the same
   * principal and session name as the calling session.</p>
   */
  inline const ScopedSession& GetSessionInfo() const { return m_sessionInfo; }
  template <typename SessionInfoT = ScopedSession>
  void SetSessionInfo(SessionInfoT&& value) {
    m_sessionInfoHasBeenSet = true;
    m_sessionInfo = std::forward<SessionInfoT>(value);
  }
  template <typename SessionInfoT = ScopedSession>
  GetScopedCredentialsResult& WithSessionInfo(SessionInfoT&& value) {
    SetSessionInfo(std::forward<SessionInfoT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetSessionTokenUtilization() const { return m_sessionTokenUtilization; }
  inline void SetSessionTokenUtilization(int value) {
    m_sessionTokenUtilizationHasBeenSet = true;
    m_sessionTokenUtilization = value;
  }
  inline GetScopedCredentialsResult& WithSessionTokenUtilization(int value) {
    SetSessionTokenUtilization(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetSessionTokenSize() const { return m_sessionTokenSize; }
  inline void SetSessionTokenSize(int value) {
    m_sessionTokenSizeHasBeenSet = true;
    m_sessionTokenSize = value;
  }
  inline GetScopedCredentialsResult& WithSessionTokenSize(int value) {
    SetSessionTokenSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <code>GetScopedCredentials</code> can be called recursively and
   * <code>ScopedPoliciesCount</code> specifies the number of scope down policies
   * applied to the session. Each recursive call adds another scope down policy
   * layer. A maximum of 3 scope down policy layers are allowed per session. If a
   * session already has 3 <code>GetScopedCredentials</code> scope-down policies, a
   * subsequent <code>GetScopedCredentials</code> call that supplies a
   * <code>Policy</code> (attempting to append a fourth scope-down policy) is
   * denied.</p>
   */
  inline int GetScopedPoliciesCount() const { return m_scopedPoliciesCount; }
  inline void SetScopedPoliciesCount(int value) {
    m_scopedPoliciesCountHasBeenSet = true;
    m_scopedPoliciesCount = value;
  }
  inline GetScopedCredentialsResult& WithScopedPoliciesCount(int value) {
    SetScopedPoliciesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source identity of the calling session, carried forward unchanged. This
   * operation never sets or modifies the source identity; it reflects the value
   * established when the source identity was first set. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">Monitor
   * and control actions taken with assumed roles</a> in the IAM User Guide.</p>
   */
  inline const Aws::String& GetSourceIdentity() const { return m_sourceIdentity; }
  template <typename SourceIdentityT = Aws::String>
  void SetSourceIdentity(SourceIdentityT&& value) {
    m_sourceIdentityHasBeenSet = true;
    m_sourceIdentity = std::forward<SourceIdentityT>(value);
  }
  template <typename SourceIdentityT = Aws::String>
  GetScopedCredentialsResult& WithSourceIdentity(SourceIdentityT&& value) {
    SetSourceIdentity(std::forward<SourceIdentityT>(value));
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
  GetScopedCredentialsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Credentials m_credentials;

  ScopedSession m_sessionInfo;

  int m_sessionTokenUtilization{0};

  int m_sessionTokenSize{0};

  int m_scopedPoliciesCount{0};

  Aws::String m_sourceIdentity;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_credentialsHasBeenSet = false;
  bool m_sessionInfoHasBeenSet = false;
  bool m_sessionTokenUtilizationHasBeenSet = false;
  bool m_sessionTokenSizeHasBeenSet = false;
  bool m_scopedPoliciesCountHasBeenSet = false;
  bool m_sourceIdentityHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws
