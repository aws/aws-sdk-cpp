/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{
  class ConfigureLogsForPlaybackConfigurationResult
  {
  public:
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult();
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ConfigureLogsForPlaybackConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account.</p>
     */
    inline int GetPercentEnabled() const{ return m_percentEnabled; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account.</p>
     */
    inline void SetPercentEnabled(int value) { m_percentEnabled = value; }

    /**
     * <p>The percentage of session logs that MediaTailor sends to your Cloudwatch Logs
     * account.</p>
     */
    inline ConfigureLogsForPlaybackConfigurationResult& WithPercentEnabled(int value) { SetPercentEnabled(value); return *this;}


    /**
     * <p>The name of the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationName = value; }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationName = std::move(value); }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationName.assign(value); }

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline ConfigureLogsForPlaybackConfigurationResult& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline ConfigureLogsForPlaybackConfigurationResult& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the playback configuration.</p>
     */
    inline ConfigureLogsForPlaybackConfigurationResult& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}

  private:

    int m_percentEnabled;

    Aws::String m_playbackConfigurationName;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
