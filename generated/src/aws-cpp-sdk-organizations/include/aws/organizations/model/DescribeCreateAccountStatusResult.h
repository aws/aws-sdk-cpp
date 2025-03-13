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
  class DescribeCreateAccountStatusResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusResult() = default;
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains the current status of an account creation
     * request.</p>
     */
    inline const CreateAccountStatus& GetCreateAccountStatus() const { return m_createAccountStatus; }
    template<typename CreateAccountStatusT = CreateAccountStatus>
    void SetCreateAccountStatus(CreateAccountStatusT&& value) { m_createAccountStatusHasBeenSet = true; m_createAccountStatus = std::forward<CreateAccountStatusT>(value); }
    template<typename CreateAccountStatusT = CreateAccountStatus>
    DescribeCreateAccountStatusResult& WithCreateAccountStatus(CreateAccountStatusT&& value) { SetCreateAccountStatus(std::forward<CreateAccountStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCreateAccountStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
