/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/Delegate.h>
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
namespace WorkMail
{
namespace Model
{
  class ListResourceDelegatesResult
  {
  public:
    AWS_WORKMAIL_API ListResourceDelegatesResult() = default;
    AWS_WORKMAIL_API ListResourceDelegatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListResourceDelegatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline const Aws::Vector<Delegate>& GetDelegates() const { return m_delegates; }
    template<typename DelegatesT = Aws::Vector<Delegate>>
    void SetDelegates(DelegatesT&& value) { m_delegatesHasBeenSet = true; m_delegates = std::forward<DelegatesT>(value); }
    template<typename DelegatesT = Aws::Vector<Delegate>>
    ListResourceDelegatesResult& WithDelegates(DelegatesT&& value) { SetDelegates(std::forward<DelegatesT>(value)); return *this;}
    template<typename DelegatesT = Delegate>
    ListResourceDelegatesResult& AddDelegates(DelegatesT&& value) { m_delegatesHasBeenSet = true; m_delegates.emplace_back(std::forward<DelegatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceDelegatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceDelegatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Delegate> m_delegates;
    bool m_delegatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
