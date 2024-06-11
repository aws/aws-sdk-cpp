/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/PrefetchConsumption.h>
#include <aws/mediatailor/model/PrefetchRetrieval.h>
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
namespace MediaTailor
{
namespace Model
{
  class CreatePrefetchScheduleResult
  {
  public:
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult();
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreatePrefetchScheduleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreatePrefetchScheduleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreatePrefetchScheduleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for MediaTailor's <i>consumption</i> of the
     * prefetched ads from the ad decision server. Each consumption configuration
     * contains an end time and an optional start time that define the <i>consumption
     * window</i>. Prefetch schedules automatically expire no earlier than seven days
     * after the end time.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const{ return m_consumption; }
    inline void SetConsumption(const PrefetchConsumption& value) { m_consumption = value; }
    inline void SetConsumption(PrefetchConsumption&& value) { m_consumption = std::move(value); }
    inline CreatePrefetchScheduleResult& WithConsumption(const PrefetchConsumption& value) { SetConsumption(value); return *this;}
    inline CreatePrefetchScheduleResult& WithConsumption(PrefetchConsumption&& value) { SetConsumption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreatePrefetchScheduleResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePrefetchScheduleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePrefetchScheduleResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationName = value; }
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationName = std::move(value); }
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationName.assign(value); }
    inline CreatePrefetchScheduleResult& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}
    inline CreatePrefetchScheduleResult& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}
    inline CreatePrefetchScheduleResult& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const{ return m_retrieval; }
    inline void SetRetrieval(const PrefetchRetrieval& value) { m_retrieval = value; }
    inline void SetRetrieval(PrefetchRetrieval&& value) { m_retrieval = std::move(value); }
    inline CreatePrefetchScheduleResult& WithRetrieval(const PrefetchRetrieval& value) { SetRetrieval(value); return *this;}
    inline CreatePrefetchScheduleResult& WithRetrieval(PrefetchRetrieval&& value) { SetRetrieval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }
    inline CreatePrefetchScheduleResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline CreatePrefetchScheduleResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline CreatePrefetchScheduleResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePrefetchScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePrefetchScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePrefetchScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    PrefetchConsumption m_consumption;

    Aws::String m_name;

    Aws::String m_playbackConfigurationName;

    PrefetchRetrieval m_retrieval;

    Aws::String m_streamId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
