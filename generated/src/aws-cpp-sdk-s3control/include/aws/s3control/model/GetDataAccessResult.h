/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/Credentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/Grantee.h>
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
namespace S3Control
{
namespace Model
{
  class GetDataAccessResult
  {
  public:
    AWS_S3CONTROL_API GetDataAccessResult() = default;
    AWS_S3CONTROL_API GetDataAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetDataAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The temporary credential token that S3 Access Grants vends.</p>
     */
    inline const Credentials& GetCredentials() const { return m_credentials; }
    template<typename CredentialsT = Credentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Credentials>
    GetDataAccessResult& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline const Aws::String& GetMatchedGrantTarget() const { return m_matchedGrantTarget; }
    template<typename MatchedGrantTargetT = Aws::String>
    void SetMatchedGrantTarget(MatchedGrantTargetT&& value) { m_matchedGrantTargetHasBeenSet = true; m_matchedGrantTarget = std::forward<MatchedGrantTargetT>(value); }
    template<typename MatchedGrantTargetT = Aws::String>
    GetDataAccessResult& WithMatchedGrantTarget(MatchedGrantTargetT&& value) { SetMatchedGrantTarget(std::forward<MatchedGrantTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user, group, or role that was granted access to the S3 location scope.
     * For directory identities, this API also returns the grants of the IAM role used
     * for the identity-aware request. For more information on identity-aware sessions,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_sts-setcontext.html">Granting
     * permissions to use identity-aware console sessions</a>. </p>
     */
    inline const Grantee& GetGrantee() const { return m_grantee; }
    template<typename GranteeT = Grantee>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = Grantee>
    GetDataAccessResult& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    GetDataAccessResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_matchedGrantTarget;
    bool m_matchedGrantTargetHasBeenSet = false;

    Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
