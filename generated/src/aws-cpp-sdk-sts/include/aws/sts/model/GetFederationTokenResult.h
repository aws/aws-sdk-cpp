/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
#include <aws/sts/model/FederatedUser.h>
#include <aws/sts/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace STS
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetFederationToken</a> request,
   * including temporary Amazon Web Services credentials that can be used to make
   * Amazon Web Services requests. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/GetFederationTokenResponse">AWS
   * API Reference</a></p>
   */
  class GetFederationTokenResult
  {
  public:
    AWS_STS_API GetFederationTokenResult() = default;
    AWS_STS_API GetFederationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_STS_API GetFederationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p>  <p>The size of the
     * security token that STS API operations return is not fixed. We strongly
     * recommend that you make no assumptions about the maximum size.</p> 
     */
    inline const Credentials& GetCredentials() const { return m_credentials; }
    template<typename CredentialsT = Credentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Credentials>
    GetFederationTokenResult& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifiers for the federated user associated with the credentials (such as
     * <code>arn:aws:sts::123456789012:federated-user/Bob</code> or
     * <code>123456789012:Bob</code>). You can use the federated user's ARN in your
     * resource-based policies, such as an Amazon S3 bucket policy. </p>
     */
    inline const FederatedUser& GetFederatedUser() const { return m_federatedUser; }
    template<typename FederatedUserT = FederatedUser>
    void SetFederatedUser(FederatedUserT&& value) { m_federatedUserHasBeenSet = true; m_federatedUser = std::forward<FederatedUserT>(value); }
    template<typename FederatedUserT = FederatedUser>
    GetFederationTokenResult& WithFederatedUser(FederatedUserT&& value) { SetFederatedUser(std::forward<FederatedUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A percentage value that indicates the packed size of the session policies and
     * session tags combined passed in the request. The request fails if the packed
     * size is greater than 100 percent, which means the policies and tags exceeded the
     * allowed space.</p>
     */
    inline int GetPackedPolicySize() const { return m_packedPolicySize; }
    inline void SetPackedPolicySize(int value) { m_packedPolicySizeHasBeenSet = true; m_packedPolicySize = value; }
    inline GetFederationTokenResult& WithPackedPolicySize(int value) { SetPackedPolicySize(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetFederationTokenResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    FederatedUser m_federatedUser;
    bool m_federatedUserHasBeenSet = false;

    int m_packedPolicySize{0};
    bool m_packedPolicySizeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
