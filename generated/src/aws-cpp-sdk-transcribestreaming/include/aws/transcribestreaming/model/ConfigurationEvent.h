/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/PostCallAnalyticsSettings.h>
#include <aws/transcribestreaming/model/ChannelDefinition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Allows you to set audio channel definitions and post-call analytics
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/ConfigurationEvent">AWS
   * API Reference</a></p>
   */
  class ConfigurationEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API ConfigurationEvent();
    AWS_TRANSCRIBESTREAMINGSERVICE_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }

    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }

    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline void SetChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }

    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline void SetChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }

    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline ConfigurationEvent& WithChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}

    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline ConfigurationEvent& WithChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}

    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline ConfigurationEvent& AddChannelDefinitions(const ChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }

    /**
     * <p>Indicates which speaker is on which audio channel.</p>
     */
    inline ConfigurationEvent& AddChannelDefinitions(ChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides additional optional settings for your Call Analytics post-call
     * request, including encryption and output locations for your redacted and
     * unredacted transcript.</p>
     */
    inline const PostCallAnalyticsSettings& GetPostCallAnalyticsSettings() const{ return m_postCallAnalyticsSettings; }

    /**
     * <p>Provides additional optional settings for your Call Analytics post-call
     * request, including encryption and output locations for your redacted and
     * unredacted transcript.</p>
     */
    inline bool PostCallAnalyticsSettingsHasBeenSet() const { return m_postCallAnalyticsSettingsHasBeenSet; }

    /**
     * <p>Provides additional optional settings for your Call Analytics post-call
     * request, including encryption and output locations for your redacted and
     * unredacted transcript.</p>
     */
    inline void SetPostCallAnalyticsSettings(const PostCallAnalyticsSettings& value) { m_postCallAnalyticsSettingsHasBeenSet = true; m_postCallAnalyticsSettings = value; }

    /**
     * <p>Provides additional optional settings for your Call Analytics post-call
     * request, including encryption and output locations for your redacted and
     * unredacted transcript.</p>
     */
    inline void SetPostCallAnalyticsSettings(PostCallAnalyticsSettings&& value) { m_postCallAnalyticsSettingsHasBeenSet = true; m_postCallAnalyticsSettings = std::move(value); }

    /**
     * <p>Provides additional optional settings for your Call Analytics post-call
     * request, including encryption and output locations for your redacted and
     * unredacted transcript.</p>
     */
    inline ConfigurationEvent& WithPostCallAnalyticsSettings(const PostCallAnalyticsSettings& value) { SetPostCallAnalyticsSettings(value); return *this;}

    /**
     * <p>Provides additional optional settings for your Call Analytics post-call
     * request, including encryption and output locations for your redacted and
     * unredacted transcript.</p>
     */
    inline ConfigurationEvent& WithPostCallAnalyticsSettings(PostCallAnalyticsSettings&& value) { SetPostCallAnalyticsSettings(std::move(value)); return *this;}

  private:

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    PostCallAnalyticsSettings m_postCallAnalyticsSettings;
    bool m_postCallAnalyticsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
