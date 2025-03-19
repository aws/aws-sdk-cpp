/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/SubscriberResource.h>
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
  class CreateSubscriberResult
  {
  public:
    AWS_SECURITYLAKE_API CreateSubscriberResult() = default;
    AWS_SECURITYLAKE_API CreateSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retrieve information about the subscriber created using the
     * <code>CreateSubscriber</code> API.</p>
     */
    inline const SubscriberResource& GetSubscriber() const { return m_subscriber; }
    template<typename SubscriberT = SubscriberResource>
    void SetSubscriber(SubscriberT&& value) { m_subscriberHasBeenSet = true; m_subscriber = std::forward<SubscriberT>(value); }
    template<typename SubscriberT = SubscriberResource>
    CreateSubscriberResult& WithSubscriber(SubscriberT&& value) { SetSubscriber(std::forward<SubscriberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSubscriberResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SubscriberResource m_subscriber;
    bool m_subscriberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
