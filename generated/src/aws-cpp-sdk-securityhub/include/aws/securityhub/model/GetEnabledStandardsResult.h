/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsSubscription.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetEnabledStandardsResult
  {
  public:
    AWS_SECURITYHUB_API GetEnabledStandardsResult() = default;
    AWS_SECURITYHUB_API GetEnabledStandardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetEnabledStandardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline const Aws::Vector<StandardsSubscription>& GetStandardsSubscriptions() const { return m_standardsSubscriptions; }
    template<typename StandardsSubscriptionsT = Aws::Vector<StandardsSubscription>>
    void SetStandardsSubscriptions(StandardsSubscriptionsT&& value) { m_standardsSubscriptionsHasBeenSet = true; m_standardsSubscriptions = std::forward<StandardsSubscriptionsT>(value); }
    template<typename StandardsSubscriptionsT = Aws::Vector<StandardsSubscription>>
    GetEnabledStandardsResult& WithStandardsSubscriptions(StandardsSubscriptionsT&& value) { SetStandardsSubscriptions(std::forward<StandardsSubscriptionsT>(value)); return *this;}
    template<typename StandardsSubscriptionsT = StandardsSubscription>
    GetEnabledStandardsResult& AddStandardsSubscriptions(StandardsSubscriptionsT&& value) { m_standardsSubscriptionsHasBeenSet = true; m_standardsSubscriptions.emplace_back(std::forward<StandardsSubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEnabledStandardsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEnabledStandardsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StandardsSubscription> m_standardsSubscriptions;
    bool m_standardsSubscriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
