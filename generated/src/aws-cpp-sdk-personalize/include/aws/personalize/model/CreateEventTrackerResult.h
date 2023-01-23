/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
  class CreateEventTrackerResult
  {
  public:
    AWS_PERSONALIZE_API CreateEventTrackerResult();
    AWS_PERSONALIZE_API CreateEventTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateEventTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline const Aws::String& GetEventTrackerArn() const{ return m_eventTrackerArn; }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline void SetEventTrackerArn(const Aws::String& value) { m_eventTrackerArn = value; }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline void SetEventTrackerArn(Aws::String&& value) { m_eventTrackerArn = std::move(value); }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline void SetEventTrackerArn(const char* value) { m_eventTrackerArn.assign(value); }

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline CreateEventTrackerResult& WithEventTrackerArn(const Aws::String& value) { SetEventTrackerArn(value); return *this;}

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline CreateEventTrackerResult& WithEventTrackerArn(Aws::String&& value) { SetEventTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline CreateEventTrackerResult& WithEventTrackerArn(const char* value) { SetEventTrackerArn(value); return *this;}


    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline const Aws::String& GetTrackingId() const{ return m_trackingId; }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline void SetTrackingId(const Aws::String& value) { m_trackingId = value; }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline void SetTrackingId(Aws::String&& value) { m_trackingId = std::move(value); }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline void SetTrackingId(const char* value) { m_trackingId.assign(value); }

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline CreateEventTrackerResult& WithTrackingId(const Aws::String& value) { SetTrackingId(value); return *this;}

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline CreateEventTrackerResult& WithTrackingId(Aws::String&& value) { SetTrackingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline CreateEventTrackerResult& WithTrackingId(const char* value) { SetTrackingId(value); return *this;}

  private:

    Aws::String m_eventTrackerArn;

    Aws::String m_trackingId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
