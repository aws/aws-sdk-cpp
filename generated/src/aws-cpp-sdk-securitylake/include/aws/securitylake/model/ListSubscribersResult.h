/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/SubscriberResource.h>
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
namespace SecurityLake
{
namespace Model
{
  class ListSubscribersResult
  {
  public:
    AWS_SECURITYLAKE_API ListSubscribersResult() = default;
    AWS_SECURITYLAKE_API ListSubscribersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API ListSubscribersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSubscribersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscribers available for the specified Security Lake account ID.</p>
     */
    inline const Aws::Vector<SubscriberResource>& GetSubscribers() const { return m_subscribers; }
    template<typename SubscribersT = Aws::Vector<SubscriberResource>>
    void SetSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::forward<SubscribersT>(value); }
    template<typename SubscribersT = Aws::Vector<SubscriberResource>>
    ListSubscribersResult& WithSubscribers(SubscribersT&& value) { SetSubscribers(std::forward<SubscribersT>(value)); return *this;}
    template<typename SubscribersT = SubscriberResource>
    ListSubscribersResult& AddSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers.emplace_back(std::forward<SubscribersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSubscribersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SubscriberResource> m_subscribers;
    bool m_subscribersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
