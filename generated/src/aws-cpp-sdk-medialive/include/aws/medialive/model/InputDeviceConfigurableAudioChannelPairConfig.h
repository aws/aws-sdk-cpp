/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputDeviceConfigurableAudioChannelPairProfile.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceConfigurableAudioChannelPairConfig">AWS
   * API Reference</a></p>
   */
  class InputDeviceConfigurableAudioChannelPairConfig
  {
  public:
    AWS_MEDIALIVE_API InputDeviceConfigurableAudioChannelPairConfig() = default;
    AWS_MEDIALIVE_API InputDeviceConfigurableAudioChannelPairConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceConfigurableAudioChannelPairConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID for one audio pair configuration, a value from 1 to 8.
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline InputDeviceConfigurableAudioChannelPairConfig& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The profile to set for one audio pair configuration. Choose an enumeration
     * value. Each value describes one audio configuration using the format (rate
     * control algorithm)-(codec)_(quality)-(bitrate in bytes). For example,
     * CBR-AAC_HQ-192000. Or choose DISABLED, in which case the device won't produce
     * audio for this pair.
     */
    inline InputDeviceConfigurableAudioChannelPairProfile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(InputDeviceConfigurableAudioChannelPairProfile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline InputDeviceConfigurableAudioChannelPairConfig& WithProfile(InputDeviceConfigurableAudioChannelPairProfile value) { SetProfile(value); return *this;}
    ///@}
  private:

    int m_id{0};
    bool m_idHasBeenSet = false;

    InputDeviceConfigurableAudioChannelPairProfile m_profile{InputDeviceConfigurableAudioChannelPairProfile::NOT_SET};
    bool m_profileHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
