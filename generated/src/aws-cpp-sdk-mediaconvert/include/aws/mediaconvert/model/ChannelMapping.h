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
   * Channel mapping contains the group of fields that hold the remixing value for
   * each channel, in dB. Specify remix values to indicate how much of the content
   * from your input audio channel you want in your output audio channels. Each
   * instance of the InputChannels or InputChannelsFineTune array specifies these
   * values for one output channel. Use one instance of this array for each output
   * channel. In the console, each array corresponds to a column in the graphical
   * depiction of the mapping matrix. The rows of the graphical matrix correspond to
   * input channels. Valid values are within the range from -60 (mute) through 6. A
   * setting of 0 passes the input channel unchanged to the output channel (no
   * attenuation or amplification). Use InputChannels or InputChannelsFineTune to
   * specify your remix values. Don't use both.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ChannelMapping">AWS
   * API Reference</a></p>
   */
  class ChannelMapping
  {
  public:
    AWS_MEDIACONVERT_API ChannelMapping() = default;
    AWS_MEDIACONVERT_API ChannelMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ChannelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * In your JSON job specification, include one child of OutputChannels for each
     * audio channel that you want in your output. Each child should contain one
     * instance of InputChannels or InputChannelsFineTune.
     */
    inline const Aws::Vector<OutputChannelMapping>& GetOutputChannels() const { return m_outputChannels; }
    inline bool OutputChannelsHasBeenSet() const { return m_outputChannelsHasBeenSet; }
    template<typename OutputChannelsT = Aws::Vector<OutputChannelMapping>>
    void SetOutputChannels(OutputChannelsT&& value) { m_outputChannelsHasBeenSet = true; m_outputChannels = std::forward<OutputChannelsT>(value); }
    template<typename OutputChannelsT = Aws::Vector<OutputChannelMapping>>
    ChannelMapping& WithOutputChannels(OutputChannelsT&& value) { SetOutputChannels(std::forward<OutputChannelsT>(value)); return *this;}
    template<typename OutputChannelsT = OutputChannelMapping>
    ChannelMapping& AddOutputChannels(OutputChannelsT&& value) { m_outputChannelsHasBeenSet = true; m_outputChannels.emplace_back(std::forward<OutputChannelsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<OutputChannelMapping> m_outputChannels;
    bool m_outputChannelsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
