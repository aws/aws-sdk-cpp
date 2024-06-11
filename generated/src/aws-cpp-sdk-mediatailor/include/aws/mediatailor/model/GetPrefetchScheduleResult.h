﻿/**
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
  class GetPrefetchScheduleResult
  {
  public:
    AWS_MEDIATAILOR_API GetPrefetchScheduleResult();
    AWS_MEDIATAILOR_API GetPrefetchScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API GetPrefetchScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetPrefetchScheduleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetPrefetchScheduleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetPrefetchScheduleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks. Ad consumption occurs within a span of time that
     * you define, called a <i>consumption window</i>. You can designate which ad
     * breaks that MediaTailor fills with prefetch ads by setting avail matching
     * criteria.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const{ return m_consumption; }
    inline void SetConsumption(const PrefetchConsumption& value) { m_consumption = value; }
    inline void SetConsumption(PrefetchConsumption&& value) { m_consumption = std::move(value); }
    inline GetPrefetchScheduleResult& WithConsumption(const PrefetchConsumption& value) { SetConsumption(value); return *this;}
    inline GetPrefetchScheduleResult& WithConsumption(PrefetchConsumption&& value) { SetConsumption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetPrefetchScheduleResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetPrefetchScheduleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetPrefetchScheduleResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationName = value; }
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationName = std::move(value); }
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationName.assign(value); }
    inline GetPrefetchScheduleResult& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}
    inline GetPrefetchScheduleResult& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}
    inline GetPrefetchScheduleResult& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const{ return m_retrieval; }
    inline void SetRetrieval(const PrefetchRetrieval& value) { m_retrieval = value; }
    inline void SetRetrieval(PrefetchRetrieval&& value) { m_retrieval = std::move(value); }
    inline GetPrefetchScheduleResult& WithRetrieval(const PrefetchRetrieval& value) { SetRetrieval(value); return *this;}
    inline GetPrefetchScheduleResult& WithRetrieval(PrefetchRetrieval&& value) { SetRetrieval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }
    inline GetPrefetchScheduleResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline GetPrefetchScheduleResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline GetPrefetchScheduleResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPrefetchScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPrefetchScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPrefetchScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
