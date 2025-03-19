/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Input Channel Level<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputChannelLevel">AWS
   * API Reference</a></p>
   */
  class InputChannelLevel
  {
  public:
    AWS_MEDIALIVE_API InputChannelLevel() = default;
    AWS_MEDIALIVE_API InputChannelLevel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputChannelLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Remixing value. Units are in dB and acceptable values are within the range from
     * -60 (mute) and 6 dB.
     */
    inline int GetGain() const { return m_gain; }
    inline bool GainHasBeenSet() const { return m_gainHasBeenSet; }
    inline void SetGain(int value) { m_gainHasBeenSet = true; m_gain = value; }
    inline InputChannelLevel& WithGain(int value) { SetGain(value); return *this;}
    ///@}

    ///@{
    /**
     * The index of the input channel used as a source.
     */
    inline int GetInputChannel() const { return m_inputChannel; }
    inline bool InputChannelHasBeenSet() const { return m_inputChannelHasBeenSet; }
    inline void SetInputChannel(int value) { m_inputChannelHasBeenSet = true; m_inputChannel = value; }
    inline InputChannelLevel& WithInputChannel(int value) { SetInputChannel(value); return *this;}
    ///@}
  private:

    int m_gain{0};
    bool m_gainHasBeenSet = false;

    int m_inputChannel{0};
    bool m_inputChannelHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
