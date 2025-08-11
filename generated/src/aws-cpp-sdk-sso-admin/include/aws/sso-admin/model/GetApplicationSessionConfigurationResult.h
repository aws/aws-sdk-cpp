/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/UserBackgroundSessionApplicationStatus.h>
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
namespace SSOAdmin
{
namespace Model
{
  class GetApplicationSessionConfigurationResult
  {
  public:
    AWS_SSOADMIN_API GetApplicationSessionConfigurationResult() = default;
    AWS_SSOADMIN_API GetApplicationSessionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetApplicationSessionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of user background sessions for the application. </p>
     */
    inline UserBackgroundSessionApplicationStatus GetUserBackgroundSessionApplicationStatus() const { return m_userBackgroundSessionApplicationStatus; }
    inline void SetUserBackgroundSessionApplicationStatus(UserBackgroundSessionApplicationStatus value) { m_userBackgroundSessionApplicationStatusHasBeenSet = true; m_userBackgroundSessionApplicationStatus = value; }
    inline GetApplicationSessionConfigurationResult& WithUserBackgroundSessionApplicationStatus(UserBackgroundSessionApplicationStatus value) { SetUserBackgroundSessionApplicationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationSessionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UserBackgroundSessionApplicationStatus m_userBackgroundSessionApplicationStatus{UserBackgroundSessionApplicationStatus::NOT_SET};
    bool m_userBackgroundSessionApplicationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
