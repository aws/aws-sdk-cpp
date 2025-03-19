/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/CreateAccountStatus.h>
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
namespace Organizations
{
namespace Model
{
  class CreateAccountResult
  {
  public:
    AWS_ORGANIZATIONS_API CreateAccountResult() = default;
    AWS_ORGANIZATIONS_API CreateAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API CreateAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains details about the request to create an account.
     * This response structure might not be fully populated when you first receive it
     * because account creation is an asynchronous process. You can pass the returned
     * <code>CreateAccountStatus</code> ID as a parameter to
     * <a>DescribeCreateAccountStatus</a> to get status about the progress of the
     * request at later times. You can also check the CloudTrail log for the
     * <code>CreateAccountResult</code> event. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_security_incident-response.html">Logging
     * and monitoring in Organizations</a> in the <i>Organizations User Guide</i>.</p>
     */
    inline const CreateAccountStatus& GetCreateAccountStatus() const { return m_createAccountStatus; }
    template<typename CreateAccountStatusT = CreateAccountStatus>
    void SetCreateAccountStatus(CreateAccountStatusT&& value) { m_createAccountStatusHasBeenSet = true; m_createAccountStatus = std::forward<CreateAccountStatusT>(value); }
    template<typename CreateAccountStatusT = CreateAccountStatus>
    CreateAccountResult& WithCreateAccountStatus(CreateAccountStatusT&& value) { SetCreateAccountStatus(std::forward<CreateAccountStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CreateAccountStatus m_createAccountStatus;
    bool m_createAccountStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
