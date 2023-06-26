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
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationResult();
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline const Aws::String& GetSubscriberEndpoint() const{ return m_subscriberEndpoint; }

    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline void SetSubscriberEndpoint(const Aws::String& value) { m_subscriberEndpoint = value; }

    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline void SetSubscriberEndpoint(Aws::String&& value) { m_subscriberEndpoint = std::move(value); }

    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline void SetSubscriberEndpoint(const char* value) { m_subscriberEndpoint.assign(value); }

    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline UpdateSubscriberNotificationResult& WithSubscriberEndpoint(const Aws::String& value) { SetSubscriberEndpoint(value); return *this;}

    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline UpdateSubscriberNotificationResult& WithSubscriberEndpoint(Aws::String&& value) { SetSubscriberEndpoint(std::move(value)); return *this;}

    /**
     * <p>The subscriber endpoint to which exception messages are posted.</p>
     */
    inline UpdateSubscriberNotificationResult& WithSubscriberEndpoint(const char* value) { SetSubscriberEndpoint(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSubscriberNotificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSubscriberNotificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSubscriberNotificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_subscriberEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
