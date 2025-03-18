/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The <code>segmentation_descriptor</code> message can contain advanced
   * metadata fields, like content identifiers, to convey a wide range of information
   * about the ad break. MediaTailor writes the ad metadata in the egress manifest as
   * part of the <code>EXT-X-DATERANGE</code> or <code>EventStream</code> ad marker's
   * SCTE-35 data.</p> <p> <code>segmentation_descriptor</code> messages must be sent
   * with the <code>time_signal</code> message type.</p> <p>See the
   * <code>segmentation_descriptor()</code> table of the 2022 SCTE-35 specification
   * for more information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SegmentationDescriptor">AWS
   * API Reference</a></p>
   */
  class SegmentationDescriptor
  {
  public:
    AWS_MEDIATAILOR_API SegmentationDescriptor() = default;
    AWS_MEDIATAILOR_API SegmentationDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SegmentationDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Event Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_event_id</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. The default value is
     * 1.</p>
     */
    inline int GetSegmentationEventId() const { return m_segmentationEventId; }
    inline bool SegmentationEventIdHasBeenSet() const { return m_segmentationEventIdHasBeenSet; }
    inline void SetSegmentationEventId(int value) { m_segmentationEventIdHasBeenSet = true; m_segmentationEventId = value; }
    inline SegmentationDescriptor& WithSegmentationEventId(int value) { SetSegmentationEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Upid Type to assign to the
     * <code>segmentation_descriptor.segmentation_upid_type</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is 14.</p>
     */
    inline int GetSegmentationUpidType() const { return m_segmentationUpidType; }
    inline bool SegmentationUpidTypeHasBeenSet() const { return m_segmentationUpidTypeHasBeenSet; }
    inline void SetSegmentationUpidType(int value) { m_segmentationUpidTypeHasBeenSet = true; m_segmentationUpidType = value; }
    inline SegmentationDescriptor& WithSegmentationUpidType(int value) { SetSegmentationUpidType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline const Aws::String& GetSegmentationUpid() const { return m_segmentationUpid; }
    inline bool SegmentationUpidHasBeenSet() const { return m_segmentationUpidHasBeenSet; }
    template<typename SegmentationUpidT = Aws::String>
    void SetSegmentationUpid(SegmentationUpidT&& value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid = std::forward<SegmentationUpidT>(value); }
    template<typename SegmentationUpidT = Aws::String>
    SegmentationDescriptor& WithSegmentationUpid(SegmentationUpidT&& value) { SetSegmentationUpid(std::forward<SegmentationUpidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Type Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_type_id</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The default value is 48.</p>
     */
    inline int GetSegmentationTypeId() const { return m_segmentationTypeId; }
    inline bool SegmentationTypeIdHasBeenSet() const { return m_segmentationTypeIdHasBeenSet; }
    inline void SetSegmentationTypeId(int value) { m_segmentationTypeIdHasBeenSet = true; m_segmentationTypeId = value; }
    inline SegmentationDescriptor& WithSegmentationTypeId(int value) { SetSegmentationTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment number to assign to the
     * <code>segmentation_descriptor.segment_num</code> message, as defined in section
     * 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and 256,
     * inclusive. The default value is 0.</p>
     */
    inline int GetSegmentNum() const { return m_segmentNum; }
    inline bool SegmentNumHasBeenSet() const { return m_segmentNumHasBeenSet; }
    inline void SetSegmentNum(int value) { m_segmentNumHasBeenSet = true; m_segmentNum = value; }
    inline SegmentationDescriptor& WithSegmentNum(int value) { SetSegmentNum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of segments expected, which is assigned to the
     * <code>segmentation_descriptor.segments_expectedS</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and
     * 256, inclusive. The default value is 0.</p>
     */
    inline int GetSegmentsExpected() const { return m_segmentsExpected; }
    inline bool SegmentsExpectedHasBeenSet() const { return m_segmentsExpectedHasBeenSet; }
    inline void SetSegmentsExpected(int value) { m_segmentsExpectedHasBeenSet = true; m_segmentsExpected = value; }
    inline SegmentationDescriptor& WithSegmentsExpected(int value) { SetSegmentsExpected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-segment number to assign to the
     * <code>segmentation_descriptor.sub_segment_num</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The defualt value is null.</p>
     */
    inline int GetSubSegmentNum() const { return m_subSegmentNum; }
    inline bool SubSegmentNumHasBeenSet() const { return m_subSegmentNumHasBeenSet; }
    inline void SetSubSegmentNum(int value) { m_subSegmentNumHasBeenSet = true; m_subSegmentNum = value; }
    inline SegmentationDescriptor& WithSubSegmentNum(int value) { SetSubSegmentNum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of sub-segments expected, which is assigned to the
     * <code>segmentation_descriptor.sub_segments_expected</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is null.</p>
     */
    inline int GetSubSegmentsExpected() const { return m_subSegmentsExpected; }
    inline bool SubSegmentsExpectedHasBeenSet() const { return m_subSegmentsExpectedHasBeenSet; }
    inline void SetSubSegmentsExpected(int value) { m_subSegmentsExpectedHasBeenSet = true; m_subSegmentsExpected = value; }
    inline SegmentationDescriptor& WithSubSegmentsExpected(int value) { SetSubSegmentsExpected(value); return *this;}
    ///@}
  private:

    int m_segmentationEventId{0};
    bool m_segmentationEventIdHasBeenSet = false;

    int m_segmentationUpidType{0};
    bool m_segmentationUpidTypeHasBeenSet = false;

    Aws::String m_segmentationUpid;
    bool m_segmentationUpidHasBeenSet = false;

    int m_segmentationTypeId{0};
    bool m_segmentationTypeIdHasBeenSet = false;

    int m_segmentNum{0};
    bool m_segmentNumHasBeenSet = false;

    int m_segmentsExpected{0};
    bool m_segmentsExpectedHasBeenSet = false;

    int m_subSegmentNum{0};
    bool m_subSegmentNumHasBeenSet = false;

    int m_subSegmentsExpected{0};
    bool m_subSegmentsExpectedHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
