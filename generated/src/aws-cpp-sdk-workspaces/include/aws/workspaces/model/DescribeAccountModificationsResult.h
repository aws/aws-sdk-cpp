/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/AccountModification.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeAccountModificationsResult
  {
  public:
    AWS_WORKSPACES_API DescribeAccountModificationsResult() = default;
    AWS_WORKSPACES_API DescribeAccountModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeAccountModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline const Aws::Vector<AccountModification>& GetAccountModifications() const { return m_accountModifications; }
    template<typename AccountModificationsT = Aws::Vector<AccountModification>>
    void SetAccountModifications(AccountModificationsT&& value) { m_accountModificationsHasBeenSet = true; m_accountModifications = std::forward<AccountModificationsT>(value); }
    template<typename AccountModificationsT = Aws::Vector<AccountModification>>
    DescribeAccountModificationsResult& WithAccountModifications(AccountModificationsT&& value) { SetAccountModifications(std::forward<AccountModificationsT>(value)); return *this;}
    template<typename AccountModificationsT = AccountModification>
    DescribeAccountModificationsResult& AddAccountModifications(AccountModificationsT&& value) { m_accountModificationsHasBeenSet = true; m_accountModifications.emplace_back(std::forward<AccountModificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccountModificationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountModificationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountModification> m_accountModifications;
    bool m_accountModificationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
