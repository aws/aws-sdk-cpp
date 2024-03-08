/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputDeviceUhdAudioChannelPairProfile.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * One audio configuration that specifies the format for one audio pair that the
   * device produces as output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceUhdAudioChannelPairConfig">AWS
   * API Reference</a></p>
   */
  class InputDeviceUhdAudioChannelPairConfig
  {
  public:
    AWS_MEDIALIVE_API InputDeviceUhdAudioChannelPairConfig();
    AWS_MEDIALIVE_API InputDeviceUhdAudioChannelPairConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceUhdAudioChannelPairConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID for one audio pair configuration, a value from 1 to 8.
     */
    inline int GetId() const{ return m_id; }

    /**
     * The ID for one audio pair configuration, a value from 1 to 8.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID for one audio pair configuration, a value from 1 to 8.
     */
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID for one audio pair configuration, a value from 1 to 8.
     */
    inline InputDeviceUhdAudioChannelPairConfig& WithId(int value) { SetId(value); return *this;}


    /**
     * The profile for one audio pair configuration. This property describes one audio
     * configuration in the format (rate control algorithm)-(codec)_(quality)-(bitrate
     * in bytes). For example, CBR-AAC_HQ-192000. Or DISABLED, in which case the device
     * won't produce audio for this pair.
     */
    inline const InputDeviceUhdAudioChannelPairProfile& GetProfile() const{ return m_profile; }

    /**
     * The profile for one audio pair configuration. This property describes one audio
     * configuration in the format (rate control algorithm)-(codec)_(quality)-(bitrate
     * in bytes). For example, CBR-AAC_HQ-192000. Or DISABLED, in which case the device
     * won't produce audio for this pair.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * The profile for one audio pair configuration. This property describes one audio
     * configuration in the format (rate control algorithm)-(codec)_(quality)-(bitrate
     * in bytes). For example, CBR-AAC_HQ-192000. Or DISABLED, in which case the device
     * won't produce audio for this pair.
     */
    inline void SetProfile(const InputDeviceUhdAudioChannelPairProfile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * The profile for one audio pair configuration. This property describes one audio
     * configuration in the format (rate control algorithm)-(codec)_(quality)-(bitrate
     * in bytes). For example, CBR-AAC_HQ-192000. Or DISABLED, in which case the device
     * won't produce audio for this pair.
     */
    inline void SetProfile(InputDeviceUhdAudioChannelPairProfile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * The profile for one audio pair configuration. This property describes one audio
     * configuration in the format (rate control algorithm)-(codec)_(quality)-(bitrate
     * in bytes). For example, CBR-AAC_HQ-192000. Or DISABLED, in which case the device
     * won't produce audio for this pair.
     */
    inline InputDeviceUhdAudioChannelPairConfig& WithProfile(const InputDeviceUhdAudioChannelPairProfile& value) { SetProfile(value); return *this;}

    /**
     * The profile for one audio pair configuration. This property describes one audio
     * configuration in the format (rate control algorithm)-(codec)_(quality)-(bitrate
     * in bytes). For example, CBR-AAC_HQ-192000. Or DISABLED, in which case the device
     * won't produce audio for this pair.
     */
    inline InputDeviceUhdAudioChannelPairConfig& WithProfile(InputDeviceUhdAudioChannelPairProfile&& value) { SetProfile(std::move(value)); return *this;}

  private:

    int m_id;
    bool m_idHasBeenSet = false;

    InputDeviceUhdAudioChannelPairProfile m_profile;
    bool m_profileHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
