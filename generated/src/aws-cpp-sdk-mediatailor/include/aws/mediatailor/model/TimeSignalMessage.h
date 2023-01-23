/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/SegmentationDescriptor.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The SCTE-35 <code>time_signal</code> message can be sent with one or more
   * <code>segmentation_descriptor</code> messages. A <code>time_signal</code>
   * message can be sent only if a single <code>segmentation_descriptor</code>
   * message is sent.</p> <p>The <code>time_signal</code> message contains only the
   * <code>splice_time</code> field which is constructed using a given presentation
   * timestamp. When sending a <code>time_signal</code> message, the
   * <code>splice_command_type</code> field in the <code>splice_info_section</code>
   * message is set to 6 (0x06).</p> <p>See the <code>time_signal()</code> table of
   * the 2022 SCTE-35 specification for more information.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TimeSignalMessage">AWS
   * API Reference</a></p>
   */
  class TimeSignalMessage
  {
  public:
    AWS_MEDIATAILOR_API TimeSignalMessage();
    AWS_MEDIATAILOR_API TimeSignalMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API TimeSignalMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline const Aws::Vector<SegmentationDescriptor>& GetSegmentationDescriptors() const{ return m_segmentationDescriptors; }

    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline bool SegmentationDescriptorsHasBeenSet() const { return m_segmentationDescriptorsHasBeenSet; }

    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline void SetSegmentationDescriptors(const Aws::Vector<SegmentationDescriptor>& value) { m_segmentationDescriptorsHasBeenSet = true; m_segmentationDescriptors = value; }

    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline void SetSegmentationDescriptors(Aws::Vector<SegmentationDescriptor>&& value) { m_segmentationDescriptorsHasBeenSet = true; m_segmentationDescriptors = std::move(value); }

    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline TimeSignalMessage& WithSegmentationDescriptors(const Aws::Vector<SegmentationDescriptor>& value) { SetSegmentationDescriptors(value); return *this;}

    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline TimeSignalMessage& WithSegmentationDescriptors(Aws::Vector<SegmentationDescriptor>&& value) { SetSegmentationDescriptors(std::move(value)); return *this;}

    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline TimeSignalMessage& AddSegmentationDescriptors(const SegmentationDescriptor& value) { m_segmentationDescriptorsHasBeenSet = true; m_segmentationDescriptors.push_back(value); return *this; }

    /**
     * <p>The configurations for the SCTE-35 <code>segmentation_descriptor</code>
     * message(s) sent with the <code>time_signal</code> message.</p>
     */
    inline TimeSignalMessage& AddSegmentationDescriptors(SegmentationDescriptor&& value) { m_segmentationDescriptorsHasBeenSet = true; m_segmentationDescriptors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SegmentationDescriptor> m_segmentationDescriptors;
    bool m_segmentationDescriptorsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
