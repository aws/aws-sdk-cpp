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
    AWS_MEDIATAILOR_API SegmentationDescriptor();
    AWS_MEDIATAILOR_API SegmentationDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SegmentationDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The segment number to assign to the
     * <code>segmentation_descriptor.segment_num</code> message, as defined in section
     * 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and 256,
     * inclusive. The default value is 0.</p>
     */
    inline int GetSegmentNum() const{ return m_segmentNum; }

    /**
     * <p>The segment number to assign to the
     * <code>segmentation_descriptor.segment_num</code> message, as defined in section
     * 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and 256,
     * inclusive. The default value is 0.</p>
     */
    inline bool SegmentNumHasBeenSet() const { return m_segmentNumHasBeenSet; }

    /**
     * <p>The segment number to assign to the
     * <code>segmentation_descriptor.segment_num</code> message, as defined in section
     * 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and 256,
     * inclusive. The default value is 0.</p>
     */
    inline void SetSegmentNum(int value) { m_segmentNumHasBeenSet = true; m_segmentNum = value; }

    /**
     * <p>The segment number to assign to the
     * <code>segmentation_descriptor.segment_num</code> message, as defined in section
     * 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and 256,
     * inclusive. The default value is 0.</p>
     */
    inline SegmentationDescriptor& WithSegmentNum(int value) { SetSegmentNum(value); return *this;}


    /**
     * <p>The Event Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_event_id</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. The default value is
     * 1.</p>
     */
    inline int GetSegmentationEventId() const{ return m_segmentationEventId; }

    /**
     * <p>The Event Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_event_id</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. The default value is
     * 1.</p>
     */
    inline bool SegmentationEventIdHasBeenSet() const { return m_segmentationEventIdHasBeenSet; }

    /**
     * <p>The Event Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_event_id</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. The default value is
     * 1.</p>
     */
    inline void SetSegmentationEventId(int value) { m_segmentationEventIdHasBeenSet = true; m_segmentationEventId = value; }

    /**
     * <p>The Event Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_event_id</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. The default value is
     * 1.</p>
     */
    inline SegmentationDescriptor& WithSegmentationEventId(int value) { SetSegmentationEventId(value); return *this;}


    /**
     * <p>The Type Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_type_id</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The default value is 48.</p>
     */
    inline int GetSegmentationTypeId() const{ return m_segmentationTypeId; }

    /**
     * <p>The Type Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_type_id</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The default value is 48.</p>
     */
    inline bool SegmentationTypeIdHasBeenSet() const { return m_segmentationTypeIdHasBeenSet; }

    /**
     * <p>The Type Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_type_id</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The default value is 48.</p>
     */
    inline void SetSegmentationTypeId(int value) { m_segmentationTypeIdHasBeenSet = true; m_segmentationTypeId = value; }

    /**
     * <p>The Type Identifier to assign to the
     * <code>segmentation_descriptor.segmentation_type_id</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The default value is 48.</p>
     */
    inline SegmentationDescriptor& WithSegmentationTypeId(int value) { SetSegmentationTypeId(value); return *this;}


    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline const Aws::String& GetSegmentationUpid() const{ return m_segmentationUpid; }

    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline bool SegmentationUpidHasBeenSet() const { return m_segmentationUpidHasBeenSet; }

    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline void SetSegmentationUpid(const Aws::String& value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid = value; }

    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline void SetSegmentationUpid(Aws::String&& value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid = std::move(value); }

    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline void SetSegmentationUpid(const char* value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid.assign(value); }

    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline SegmentationDescriptor& WithSegmentationUpid(const Aws::String& value) { SetSegmentationUpid(value); return *this;}

    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline SegmentationDescriptor& WithSegmentationUpid(Aws::String&& value) { SetSegmentationUpid(std::move(value)); return *this;}

    /**
     * <p>The Upid to assign to the
     * <code>segmentation_descriptor.segmentation_upid</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. The value must be a
     * hexadecimal string containing only the characters 0 though 9 and A through F.
     * The default value is "" (an empty string).</p>
     */
    inline SegmentationDescriptor& WithSegmentationUpid(const char* value) { SetSegmentationUpid(value); return *this;}


    /**
     * <p>The Upid Type to assign to the
     * <code>segmentation_descriptor.segmentation_upid_type</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is 14.</p>
     */
    inline int GetSegmentationUpidType() const{ return m_segmentationUpidType; }

    /**
     * <p>The Upid Type to assign to the
     * <code>segmentation_descriptor.segmentation_upid_type</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is 14.</p>
     */
    inline bool SegmentationUpidTypeHasBeenSet() const { return m_segmentationUpidTypeHasBeenSet; }

    /**
     * <p>The Upid Type to assign to the
     * <code>segmentation_descriptor.segmentation_upid_type</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is 14.</p>
     */
    inline void SetSegmentationUpidType(int value) { m_segmentationUpidTypeHasBeenSet = true; m_segmentationUpidType = value; }

    /**
     * <p>The Upid Type to assign to the
     * <code>segmentation_descriptor.segmentation_upid_type</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is 14.</p>
     */
    inline SegmentationDescriptor& WithSegmentationUpidType(int value) { SetSegmentationUpidType(value); return *this;}


    /**
     * <p>The number of segments expected, which is assigned to the
     * <code>segmentation_descriptor.segments_expectedS</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and
     * 256, inclusive. The default value is 0.</p>
     */
    inline int GetSegmentsExpected() const{ return m_segmentsExpected; }

    /**
     * <p>The number of segments expected, which is assigned to the
     * <code>segmentation_descriptor.segments_expectedS</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and
     * 256, inclusive. The default value is 0.</p>
     */
    inline bool SegmentsExpectedHasBeenSet() const { return m_segmentsExpectedHasBeenSet; }

    /**
     * <p>The number of segments expected, which is assigned to the
     * <code>segmentation_descriptor.segments_expectedS</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and
     * 256, inclusive. The default value is 0.</p>
     */
    inline void SetSegmentsExpected(int value) { m_segmentsExpectedHasBeenSet = true; m_segmentsExpected = value; }

    /**
     * <p>The number of segments expected, which is assigned to the
     * <code>segmentation_descriptor.segments_expectedS</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification Values must be between 0 and
     * 256, inclusive. The default value is 0.</p>
     */
    inline SegmentationDescriptor& WithSegmentsExpected(int value) { SetSegmentsExpected(value); return *this;}


    /**
     * <p>The sub-segment number to assign to the
     * <code>segmentation_descriptor.sub_segment_num</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The defualt value is null.</p>
     */
    inline int GetSubSegmentNum() const{ return m_subSegmentNum; }

    /**
     * <p>The sub-segment number to assign to the
     * <code>segmentation_descriptor.sub_segment_num</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The defualt value is null.</p>
     */
    inline bool SubSegmentNumHasBeenSet() const { return m_subSegmentNumHasBeenSet; }

    /**
     * <p>The sub-segment number to assign to the
     * <code>segmentation_descriptor.sub_segment_num</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The defualt value is null.</p>
     */
    inline void SetSubSegmentNum(int value) { m_subSegmentNumHasBeenSet = true; m_subSegmentNum = value; }

    /**
     * <p>The sub-segment number to assign to the
     * <code>segmentation_descriptor.sub_segment_num</code> message, as defined in
     * section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0 and
     * 256, inclusive. The defualt value is null.</p>
     */
    inline SegmentationDescriptor& WithSubSegmentNum(int value) { SetSubSegmentNum(value); return *this;}


    /**
     * <p>The number of sub-segments expected, which is assigned to the
     * <code>segmentation_descriptor.sub_segments_expected</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is null.</p>
     */
    inline int GetSubSegmentsExpected() const{ return m_subSegmentsExpected; }

    /**
     * <p>The number of sub-segments expected, which is assigned to the
     * <code>segmentation_descriptor.sub_segments_expected</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is null.</p>
     */
    inline bool SubSegmentsExpectedHasBeenSet() const { return m_subSegmentsExpectedHasBeenSet; }

    /**
     * <p>The number of sub-segments expected, which is assigned to the
     * <code>segmentation_descriptor.sub_segments_expected</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is null.</p>
     */
    inline void SetSubSegmentsExpected(int value) { m_subSegmentsExpectedHasBeenSet = true; m_subSegmentsExpected = value; }

    /**
     * <p>The number of sub-segments expected, which is assigned to the
     * <code>segmentation_descriptor.sub_segments_expected</code> message, as defined
     * in section 10.3.3.1 of the 2022 SCTE-35 specification. Values must be between 0
     * and 256, inclusive. The default value is null.</p>
     */
    inline SegmentationDescriptor& WithSubSegmentsExpected(int value) { SetSubSegmentsExpected(value); return *this;}

  private:

    int m_segmentNum;
    bool m_segmentNumHasBeenSet = false;

    int m_segmentationEventId;
    bool m_segmentationEventIdHasBeenSet = false;

    int m_segmentationTypeId;
    bool m_segmentationTypeIdHasBeenSet = false;

    Aws::String m_segmentationUpid;
    bool m_segmentationUpidHasBeenSet = false;

    int m_segmentationUpidType;
    bool m_segmentationUpidTypeHasBeenSet = false;

    int m_segmentsExpected;
    bool m_segmentsExpectedHasBeenSet = false;

    int m_subSegmentNum;
    bool m_subSegmentNumHasBeenSet = false;

    int m_subSegmentsExpected;
    bool m_subSegmentsExpectedHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
