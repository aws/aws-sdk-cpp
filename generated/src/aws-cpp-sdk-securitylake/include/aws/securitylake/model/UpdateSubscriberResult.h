﻿/**
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
  class UpdateSubscriberResult
  {
  public:
    AWS_SECURITYLAKE_API UpdateSubscriberResult();
    AWS_SECURITYLAKE_API UpdateSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API UpdateSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account of the subscriber.</p>
     */
    inline const SubscriberResource& GetSubscriber() const{ return m_subscriber; }

    /**
     * <p>The account of the subscriber.</p>
     */
    inline void SetSubscriber(const SubscriberResource& value) { m_subscriber = value; }

    /**
     * <p>The account of the subscriber.</p>
     */
    inline void SetSubscriber(SubscriberResource&& value) { m_subscriber = std::move(value); }

    /**
     * <p>The account of the subscriber.</p>
     */
    inline UpdateSubscriberResult& WithSubscriber(const SubscriberResource& value) { SetSubscriber(value); return *this;}

    /**
     * <p>The account of the subscriber.</p>
     */
    inline UpdateSubscriberResult& WithSubscriber(SubscriberResource&& value) { SetSubscriber(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSubscriberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSubscriberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSubscriberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SubscriberResource m_subscriber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
