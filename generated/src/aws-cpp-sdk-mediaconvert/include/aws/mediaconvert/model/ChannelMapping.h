/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/OutputChannelMapping.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Channel mapping (ChannelMapping) contains the group of fields that hold the
   * remixing value for each channel, in dB. Specify remix values to indicate how
   * much of the content from your input audio channel you want in your output audio
   * channels. Each instance of the InputChannels or InputChannelsFineTune array
   * specifies these values for one output channel. Use one instance of this array
   * for each output channel. In the console, each array corresponds to a column in
   * the graphical depiction of the mapping matrix. The rows of the graphical matrix
   * correspond to input channels. Valid values are within the range from -60 (mute)
   * through 6. A setting of 0 passes the input channel unchanged to the output
   * channel (no attenuation or amplification). Use InputChannels or
   * InputChannelsFineTune to specify your remix values. Don't use both.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ChannelMapping">AWS
   * API Reference</a></p>
   */
  class ChannelMapping
  {
  public:
    AWS_MEDIACONVERT_API ChannelMapping();
    AWS_MEDIACONVERT_API ChannelMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ChannelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline const Aws::Vector<OutputChannelMapping>& GetOutputChannels() const{ return m_outputChannels; }

    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline bool OutputChannelsHasBeenSet() const { return m_outputChannelsHasBeenSet; }

    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline void SetOutputChannels(const Aws::Vector<OutputChannelMapping>& value) { m_outputChannelsHasBeenSet = true; m_outputChannels = value; }

    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline void SetOutputChannels(Aws::Vector<OutputChannelMapping>&& value) { m_outputChannelsHasBeenSet = true; m_outputChannels = std::move(value); }

    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline ChannelMapping& WithOutputChannels(const Aws::Vector<OutputChannelMapping>& value) { SetOutputChannels(value); return *this;}

    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline ChannelMapping& WithOutputChannels(Aws::Vector<OutputChannelMapping>&& value) { SetOutputChannels(std::move(value)); return *this;}

    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline ChannelMapping& AddOutputChannels(const OutputChannelMapping& value) { m_outputChannelsHasBeenSet = true; m_outputChannels.push_back(value); return *this; }

    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline ChannelMapping& AddOutputChannels(OutputChannelMapping&& value) { m_outputChannelsHasBeenSet = true; m_outputChannels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OutputChannelMapping> m_outputChannels;
    bool m_outputChannelsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
