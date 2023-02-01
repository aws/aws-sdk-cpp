/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputChannelLevel.h>
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
   * Audio Channel Mapping<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioChannelMapping">AWS
   * API Reference</a></p>
   */
  class AudioChannelMapping
  {
  public:
    AWS_MEDIALIVE_API AudioChannelMapping();
    AWS_MEDIALIVE_API AudioChannelMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioChannelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline const Aws::Vector<InputChannelLevel>& GetInputChannelLevels() const{ return m_inputChannelLevels; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline bool InputChannelLevelsHasBeenSet() const { return m_inputChannelLevelsHasBeenSet; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline void SetInputChannelLevels(const Aws::Vector<InputChannelLevel>& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels = value; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline void SetInputChannelLevels(Aws::Vector<InputChannelLevel>&& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels = std::move(value); }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& WithInputChannelLevels(const Aws::Vector<InputChannelLevel>& value) { SetInputChannelLevels(value); return *this;}

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& WithInputChannelLevels(Aws::Vector<InputChannelLevel>&& value) { SetInputChannelLevels(std::move(value)); return *this;}

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& AddInputChannelLevels(const InputChannelLevel& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels.push_back(value); return *this; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& AddInputChannelLevels(InputChannelLevel&& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels.push_back(std::move(value)); return *this; }


    /**
     * The index of the output channel being produced.
     */
    inline int GetOutputChannel() const{ return m_outputChannel; }

    /**
     * The index of the output channel being produced.
     */
    inline bool OutputChannelHasBeenSet() const { return m_outputChannelHasBeenSet; }

    /**
     * The index of the output channel being produced.
     */
    inline void SetOutputChannel(int value) { m_outputChannelHasBeenSet = true; m_outputChannel = value; }

    /**
     * The index of the output channel being produced.
     */
    inline AudioChannelMapping& WithOutputChannel(int value) { SetOutputChannel(value); return *this;}

  private:

    Aws::Vector<InputChannelLevel> m_inputChannelLevels;
    bool m_inputChannelLevelsHasBeenSet = false;

    int m_outputChannel;
    bool m_outputChannelHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
