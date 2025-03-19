/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/TimestampRange.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Contains the timestamps of matched categories.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/PointsOfInterest">AWS
   * API Reference</a></p>
   */
  class PointsOfInterest
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API PointsOfInterest() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API PointsOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API PointsOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the timestamp ranges (start time through end time) of matched
     * categories and rules.</p>
     */
    inline const Aws::Vector<TimestampRange>& GetTimestampRanges() const { return m_timestampRanges; }
    inline bool TimestampRangesHasBeenSet() const { return m_timestampRangesHasBeenSet; }
    template<typename TimestampRangesT = Aws::Vector<TimestampRange>>
    void SetTimestampRanges(TimestampRangesT&& value) { m_timestampRangesHasBeenSet = true; m_timestampRanges = std::forward<TimestampRangesT>(value); }
    template<typename TimestampRangesT = Aws::Vector<TimestampRange>>
    PointsOfInterest& WithTimestampRanges(TimestampRangesT&& value) { SetTimestampRanges(std::forward<TimestampRangesT>(value)); return *this;}
    template<typename TimestampRangesT = TimestampRange>
    PointsOfInterest& AddTimestampRanges(TimestampRangesT&& value) { m_timestampRangesHasBeenSet = true; m_timestampRanges.emplace_back(std::forward<TimestampRangesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TimestampRange> m_timestampRanges;
    bool m_timestampRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
