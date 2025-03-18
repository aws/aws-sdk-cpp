/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/CreateAccountStatus.h>
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
  class ListCreateAccountStatusResult
  {
  public:
    AWS_ORGANIZATIONS_API ListCreateAccountStatusResult() = default;
    AWS_ORGANIZATIONS_API ListCreateAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListCreateAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline const Aws::Vector<CreateAccountStatus>& GetCreateAccountStatuses() const { return m_createAccountStatuses; }
    template<typename CreateAccountStatusesT = Aws::Vector<CreateAccountStatus>>
    void SetCreateAccountStatuses(CreateAccountStatusesT&& value) { m_createAccountStatusesHasBeenSet = true; m_createAccountStatuses = std::forward<CreateAccountStatusesT>(value); }
    template<typename CreateAccountStatusesT = Aws::Vector<CreateAccountStatus>>
    ListCreateAccountStatusResult& WithCreateAccountStatuses(CreateAccountStatusesT&& value) { SetCreateAccountStatuses(std::forward<CreateAccountStatusesT>(value)); return *this;}
    template<typename CreateAccountStatusesT = CreateAccountStatus>
    ListCreateAccountStatusResult& AddCreateAccountStatuses(CreateAccountStatusesT&& value) { m_createAccountStatusesHasBeenSet = true; m_createAccountStatuses.emplace_back(std::forward<CreateAccountStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCreateAccountStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCreateAccountStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CreateAccountStatus> m_createAccountStatuses;
    bool m_createAccountStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
