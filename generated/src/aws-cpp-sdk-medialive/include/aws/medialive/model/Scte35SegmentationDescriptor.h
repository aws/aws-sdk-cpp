/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35DeliveryRestrictions.h>
#include <aws/medialive/model/Scte35SegmentationCancelIndicator.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Corresponds to SCTE-35 segmentation_descriptor.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35SegmentationDescriptor">AWS
   * API Reference</a></p>
   */
  class Scte35SegmentationDescriptor
  {
  public:
    AWS_MEDIALIVE_API Scte35SegmentationDescriptor();
    AWS_MEDIALIVE_API Scte35SegmentationDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35SegmentationDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Holds the four SCTE-35 delivery restriction parameters.
     */
    inline const Scte35DeliveryRestrictions& GetDeliveryRestrictions() const{ return m_deliveryRestrictions; }
    inline bool DeliveryRestrictionsHasBeenSet() const { return m_deliveryRestrictionsHasBeenSet; }
    inline void SetDeliveryRestrictions(const Scte35DeliveryRestrictions& value) { m_deliveryRestrictionsHasBeenSet = true; m_deliveryRestrictions = value; }
    inline void SetDeliveryRestrictions(Scte35DeliveryRestrictions&& value) { m_deliveryRestrictionsHasBeenSet = true; m_deliveryRestrictions = std::move(value); }
    inline Scte35SegmentationDescriptor& WithDeliveryRestrictions(const Scte35DeliveryRestrictions& value) { SetDeliveryRestrictions(value); return *this;}
    inline Scte35SegmentationDescriptor& WithDeliveryRestrictions(Scte35DeliveryRestrictions&& value) { SetDeliveryRestrictions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segment_num. A value that is valid for the specified
     * segmentation_type_id.
     */
    inline int GetSegmentNum() const{ return m_segmentNum; }
    inline bool SegmentNumHasBeenSet() const { return m_segmentNumHasBeenSet; }
    inline void SetSegmentNum(int value) { m_segmentNumHasBeenSet = true; m_segmentNum = value; }
    inline Scte35SegmentationDescriptor& WithSegmentNum(int value) { SetSegmentNum(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segmentation_event_cancel_indicator.
     */
    inline const Scte35SegmentationCancelIndicator& GetSegmentationCancelIndicator() const{ return m_segmentationCancelIndicator; }
    inline bool SegmentationCancelIndicatorHasBeenSet() const { return m_segmentationCancelIndicatorHasBeenSet; }
    inline void SetSegmentationCancelIndicator(const Scte35SegmentationCancelIndicator& value) { m_segmentationCancelIndicatorHasBeenSet = true; m_segmentationCancelIndicator = value; }
    inline void SetSegmentationCancelIndicator(Scte35SegmentationCancelIndicator&& value) { m_segmentationCancelIndicatorHasBeenSet = true; m_segmentationCancelIndicator = std::move(value); }
    inline Scte35SegmentationDescriptor& WithSegmentationCancelIndicator(const Scte35SegmentationCancelIndicator& value) { SetSegmentationCancelIndicator(value); return *this;}
    inline Scte35SegmentationDescriptor& WithSegmentationCancelIndicator(Scte35SegmentationCancelIndicator&& value) { SetSegmentationCancelIndicator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segmentation_duration. Optional. The duration for the
     * time_signal, in 90 KHz ticks. To convert seconds to ticks, multiple the seconds
     * by 90,000. Enter time in 90 KHz clock ticks. If you do not enter a duration, the
     * time_signal will continue until you insert a cancellation message.
     */
    inline long long GetSegmentationDuration() const{ return m_segmentationDuration; }
    inline bool SegmentationDurationHasBeenSet() const { return m_segmentationDurationHasBeenSet; }
    inline void SetSegmentationDuration(long long value) { m_segmentationDurationHasBeenSet = true; m_segmentationDuration = value; }
    inline Scte35SegmentationDescriptor& WithSegmentationDuration(long long value) { SetSegmentationDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segmentation_event_id. 
     */
    inline long long GetSegmentationEventId() const{ return m_segmentationEventId; }
    inline bool SegmentationEventIdHasBeenSet() const { return m_segmentationEventIdHasBeenSet; }
    inline void SetSegmentationEventId(long long value) { m_segmentationEventIdHasBeenSet = true; m_segmentationEventId = value; }
    inline Scte35SegmentationDescriptor& WithSegmentationEventId(long long value) { SetSegmentationEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segmentation_type_id. One of the segmentation_type_id
     * values listed in the SCTE-35 specification. On the console, enter the ID in
     * decimal (for example, "52"). In the CLI, API, or an SDK, enter the ID in hex
     * (for example, "0x34") or decimal (for example, "52").
     */
    inline int GetSegmentationTypeId() const{ return m_segmentationTypeId; }
    inline bool SegmentationTypeIdHasBeenSet() const { return m_segmentationTypeIdHasBeenSet; }
    inline void SetSegmentationTypeId(int value) { m_segmentationTypeIdHasBeenSet = true; m_segmentationTypeId = value; }
    inline Scte35SegmentationDescriptor& WithSegmentationTypeId(int value) { SetSegmentationTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segmentation_upid. Enter a string containing the
     * hexadecimal representation of the characters that make up the SCTE-35
     * segmentation_upid value. Must contain an even number of hex characters. Do not
     * include spaces between each hex pair. For example, the ASCII "ADS Information"
     * becomes hex "41445320496e666f726d6174696f6e.
     */
    inline const Aws::String& GetSegmentationUpid() const{ return m_segmentationUpid; }
    inline bool SegmentationUpidHasBeenSet() const { return m_segmentationUpidHasBeenSet; }
    inline void SetSegmentationUpid(const Aws::String& value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid = value; }
    inline void SetSegmentationUpid(Aws::String&& value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid = std::move(value); }
    inline void SetSegmentationUpid(const char* value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid.assign(value); }
    inline Scte35SegmentationDescriptor& WithSegmentationUpid(const Aws::String& value) { SetSegmentationUpid(value); return *this;}
    inline Scte35SegmentationDescriptor& WithSegmentationUpid(Aws::String&& value) { SetSegmentationUpid(std::move(value)); return *this;}
    inline Scte35SegmentationDescriptor& WithSegmentationUpid(const char* value) { SetSegmentationUpid(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segmentation_upid_type. On the console, enter one of the
     * types listed in the SCTE-35 specification, converted to a decimal. For example,
     * "0x0C" hex from the specification is "12" in decimal. In the CLI, API, or an
     * SDK, enter one of the types listed in the SCTE-35 specification, in either hex
     * (for example, "0x0C" ) or in decimal (for example, "12").
     */
    inline int GetSegmentationUpidType() const{ return m_segmentationUpidType; }
    inline bool SegmentationUpidTypeHasBeenSet() const { return m_segmentationUpidTypeHasBeenSet; }
    inline void SetSegmentationUpidType(int value) { m_segmentationUpidTypeHasBeenSet = true; m_segmentationUpidType = value; }
    inline Scte35SegmentationDescriptor& WithSegmentationUpidType(int value) { SetSegmentationUpidType(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 segments_expected. A value that is valid for the
     * specified segmentation_type_id.
     */
    inline int GetSegmentsExpected() const{ return m_segmentsExpected; }
    inline bool SegmentsExpectedHasBeenSet() const { return m_segmentsExpectedHasBeenSet; }
    inline void SetSegmentsExpected(int value) { m_segmentsExpectedHasBeenSet = true; m_segmentsExpected = value; }
    inline Scte35SegmentationDescriptor& WithSegmentsExpected(int value) { SetSegmentsExpected(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 sub_segment_num. A value that is valid for the specified
     * segmentation_type_id.
     */
    inline int GetSubSegmentNum() const{ return m_subSegmentNum; }
    inline bool SubSegmentNumHasBeenSet() const { return m_subSegmentNumHasBeenSet; }
    inline void SetSubSegmentNum(int value) { m_subSegmentNumHasBeenSet = true; m_subSegmentNum = value; }
    inline Scte35SegmentationDescriptor& WithSubSegmentNum(int value) { SetSubSegmentNum(value); return *this;}
    ///@}

    ///@{
    /**
     * Corresponds to SCTE-35 sub_segments_expected. A value that is valid for the
     * specified segmentation_type_id.
     */
    inline int GetSubSegmentsExpected() const{ return m_subSegmentsExpected; }
    inline bool SubSegmentsExpectedHasBeenSet() const { return m_subSegmentsExpectedHasBeenSet; }
    inline void SetSubSegmentsExpected(int value) { m_subSegmentsExpectedHasBeenSet = true; m_subSegmentsExpected = value; }
    inline Scte35SegmentationDescriptor& WithSubSegmentsExpected(int value) { SetSubSegmentsExpected(value); return *this;}
    ///@}
  private:

    Scte35DeliveryRestrictions m_deliveryRestrictions;
    bool m_deliveryRestrictionsHasBeenSet = false;

    int m_segmentNum;
    bool m_segmentNumHasBeenSet = false;

    Scte35SegmentationCancelIndicator m_segmentationCancelIndicator;
    bool m_segmentationCancelIndicatorHasBeenSet = false;

    long long m_segmentationDuration;
    bool m_segmentationDurationHasBeenSet = false;

    long long m_segmentationEventId;
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
} // namespace MediaLive
} // namespace Aws
