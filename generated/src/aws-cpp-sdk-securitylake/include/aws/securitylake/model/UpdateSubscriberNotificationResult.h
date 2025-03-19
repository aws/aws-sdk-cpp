/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{
  class UpdateSubscriberNotificationResult
  {
  public:
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationResult() = default;
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline const Aws::String& GetSubscriberEndpoint() const { return m_subscriberEndpoint; }
    template<typename SubscriberEndpointT = Aws::String>
    void SetSubscriberEndpoint(SubscriberEndpointT&& value) { m_subscriberEndpointHasBeenSet = true; m_subscriberEndpoint = std::forward<SubscriberEndpointT>(value); }
    template<typename SubscriberEndpointT = Aws::String>
    UpdateSubscriberNotificationResult& WithSubscriberEndpoint(SubscriberEndpointT&& value) { SetSubscriberEndpoint(std::forward<SubscriberEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSubscriberNotificationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriberEndpoint;
    bool m_subscriberEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
