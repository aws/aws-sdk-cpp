/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SilentAudio.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Specifies the configuration for audio stream metrics monitoring.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AudioMonitoringSetting">AWS
   * API Reference</a></p>
   */
  class AudioMonitoringSetting
  {
  public:
    AWS_MEDIACONNECT_API AudioMonitoringSetting();
    AWS_MEDIACONNECT_API AudioMonitoringSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AudioMonitoringSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Detects periods of silence.
     */
    inline const SilentAudio& GetSilentAudio() const{ return m_silentAudio; }
    inline bool SilentAudioHasBeenSet() const { return m_silentAudioHasBeenSet; }
    inline void SetSilentAudio(const SilentAudio& value) { m_silentAudioHasBeenSet = true; m_silentAudio = value; }
    inline void SetSilentAudio(SilentAudio&& value) { m_silentAudioHasBeenSet = true; m_silentAudio = std::move(value); }
    inline AudioMonitoringSetting& WithSilentAudio(const SilentAudio& value) { SetSilentAudio(value); return *this;}
    inline AudioMonitoringSetting& WithSilentAudio(SilentAudio&& value) { SetSilentAudio(std::move(value)); return *this;}
    ///@}
  private:

    SilentAudio m_silentAudio;
    bool m_silentAudioHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
