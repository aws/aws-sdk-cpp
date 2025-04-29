/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/Credentials.h>
#include <aws/ssm/model/AccessRequestStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class GetAccessTokenResult
  {
  public:
    AWS_SSM_API GetAccessTokenResult() = default;
    AWS_SSM_API GetAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The temporary security credentials which can be used to start just-in-time
     * node access sessions.</p>
     */
    inline const Credentials& GetCredentials() const { return m_credentials; }
    template<typename CredentialsT = Credentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Credentials>
    GetAccessTokenResult& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the access request.</p>
     */
    inline AccessRequestStatus GetAccessRequestStatus() const { return m_accessRequestStatus; }
    inline void SetAccessRequestStatus(AccessRequestStatus value) { m_accessRequestStatusHasBeenSet = true; m_accessRequestStatus = value; }
    inline GetAccessTokenResult& WithAccessRequestStatus(AccessRequestStatus value) { SetAccessRequestStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccessTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    AccessRequestStatus m_accessRequestStatus{AccessRequestStatus::NOT_SET};
    bool m_accessRequestStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
