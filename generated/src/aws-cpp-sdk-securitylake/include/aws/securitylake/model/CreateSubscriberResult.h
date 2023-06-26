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
    AWS_SECURITYLAKE_API CreateSubscriberResult();
    AWS_SECURITYLAKE_API CreateSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retrieve information about the subscriber created using the
     * <code>CreateSubscriber</code> API.</p>
     */
    inline const SubscriberResource& GetSubscriber() const{ return m_subscriber; }

    /**
     * <p>Retrieve information about the subscriber created using the
     * <code>CreateSubscriber</code> API.</p>
     */
    inline void SetSubscriber(const SubscriberResource& value) { m_subscriber = value; }

    /**
     * <p>Retrieve information about the subscriber created using the
     * <code>CreateSubscriber</code> API.</p>
     */
    inline void SetSubscriber(SubscriberResource&& value) { m_subscriber = std::move(value); }

    /**
     * <p>Retrieve information about the subscriber created using the
     * <code>CreateSubscriber</code> API.</p>
     */
    inline CreateSubscriberResult& WithSubscriber(const SubscriberResource& value) { SetSubscriber(value); return *this;}

    /**
     * <p>Retrieve information about the subscriber created using the
     * <code>CreateSubscriber</code> API.</p>
     */
    inline CreateSubscriberResult& WithSubscriber(SubscriberResource&& value) { SetSubscriber(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSubscriberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSubscriberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSubscriberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SubscriberResource m_subscriber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
