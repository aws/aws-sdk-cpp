/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/EventTracker.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeEventTrackerResult
  {
  public:
    AWS_PERSONALIZE_API DescribeEventTrackerResult();
    AWS_PERSONALIZE_API DescribeEventTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeEventTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline const EventTracker& GetEventTracker() const{ return m_eventTracker; }

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline void SetEventTracker(const EventTracker& value) { m_eventTracker = value; }

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline void SetEventTracker(EventTracker&& value) { m_eventTracker = std::move(value); }

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline DescribeEventTrackerResult& WithEventTracker(const EventTracker& value) { SetEventTracker(value); return *this;}

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline DescribeEventTrackerResult& WithEventTracker(EventTracker&& value) { SetEventTracker(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEventTrackerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEventTrackerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEventTrackerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventTracker m_eventTracker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
