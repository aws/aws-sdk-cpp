/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * OutputChannel mapping settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputChannelMapping">AWS
   * API Reference</a></p>
   */
  class OutputChannelMapping
  {
  public:
    AWS_MEDIACONVERT_API OutputChannelMapping();
    AWS_MEDIACONVERT_API OutputChannelMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputChannelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use this setting to specify your remix values when they are integers, such as
     * -10, 0, or 4.
     */
    inline const Aws::Vector<int>& GetInputChannels() const{ return m_inputChannels; }

    /**
     * Use this setting to specify your remix values when they are integers, such as
     * -10, 0, or 4.
     */
    inline bool InputChannelsHasBeenSet() const { return m_inputChannelsHasBeenSet; }

    /**
     * Use this setting to specify your remix values when they are integers, such as
     * -10, 0, or 4.
     */
    inline void SetInputChannels(const Aws::Vector<int>& value) { m_inputChannelsHasBeenSet = true; m_inputChannels = value; }

    /**
     * Use this setting to specify your remix values when they are integers, such as
     * -10, 0, or 4.
     */
    inline void SetInputChannels(Aws::Vector<int>&& value) { m_inputChannelsHasBeenSet = true; m_inputChannels = std::move(value); }

    /**
     * Use this setting to specify your remix values when they are integers, such as
     * -10, 0, or 4.
     */
    inline OutputChannelMapping& WithInputChannels(const Aws::Vector<int>& value) { SetInputChannels(value); return *this;}

    /**
     * Use this setting to specify your remix values when they are integers, such as
     * -10, 0, or 4.
     */
    inline OutputChannelMapping& WithInputChannels(Aws::Vector<int>&& value) { SetInputChannels(std::move(value)); return *this;}

    /**
     * Use this setting to specify your remix values when they are integers, such as
     * -10, 0, or 4.
     */
    inline OutputChannelMapping& AddInputChannels(int value) { m_inputChannelsHasBeenSet = true; m_inputChannels.push_back(value); return *this; }


    /**
     * Use this setting to specify your remix values when they have a decimal
     * component, such as -10.312, 0.08, or 4.9. MediaConvert rounds your remixing
     * values to the nearest thousandth.
     */
    inline const Aws::Vector<double>& GetInputChannelsFineTune() const{ return m_inputChannelsFineTune; }

    /**
     * Use this setting to specify your remix values when they have a decimal
     * component, such as -10.312, 0.08, or 4.9. MediaConvert rounds your remixing
     * values to the nearest thousandth.
     */
    inline bool InputChannelsFineTuneHasBeenSet() const { return m_inputChannelsFineTuneHasBeenSet; }

    /**
     * Use this setting to specify your remix values when they have a decimal
     * component, such as -10.312, 0.08, or 4.9. MediaConvert rounds your remixing
     * values to the nearest thousandth.
     */
    inline void SetInputChannelsFineTune(const Aws::Vector<double>& value) { m_inputChannelsFineTuneHasBeenSet = true; m_inputChannelsFineTune = value; }

    /**
     * Use this setting to specify your remix values when they have a decimal
     * component, such as -10.312, 0.08, or 4.9. MediaConvert rounds your remixing
     * values to the nearest thousandth.
     */
    inline void SetInputChannelsFineTune(Aws::Vector<double>&& value) { m_inputChannelsFineTuneHasBeenSet = true; m_inputChannelsFineTune = std::move(value); }

    /**
     * Use this setting to specify your remix values when they have a decimal
     * component, such as -10.312, 0.08, or 4.9. MediaConvert rounds your remixing
     * values to the nearest thousandth.
     */
    inline OutputChannelMapping& WithInputChannelsFineTune(const Aws::Vector<double>& value) { SetInputChannelsFineTune(value); return *this;}

    /**
     * Use this setting to specify your remix values when they have a decimal
     * component, such as -10.312, 0.08, or 4.9. MediaConvert rounds your remixing
     * values to the nearest thousandth.
     */
    inline OutputChannelMapping& WithInputChannelsFineTune(Aws::Vector<double>&& value) { SetInputChannelsFineTune(std::move(value)); return *this;}

    /**
     * Use this setting to specify your remix values when they have a decimal
     * component, such as -10.312, 0.08, or 4.9. MediaConvert rounds your remixing
     * values to the nearest thousandth.
     */
    inline OutputChannelMapping& AddInputChannelsFineTune(double value) { m_inputChannelsFineTuneHasBeenSet = true; m_inputChannelsFineTune.push_back(value); return *this; }

  private:

    Aws::Vector<int> m_inputChannels;
    bool m_inputChannelsHasBeenSet = false;

    Aws::Vector<double> m_inputChannelsFineTune;
    bool m_inputChannelsFineTuneHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
