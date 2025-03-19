/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Specifies the starting point in a Kinesis stream to start processing. You can
   * use the producer timestamp or the fragment number. One of either producer
   * timestamp or fragment number is required. If you use the producer timestamp, you
   * must put the time in milliseconds. For more information about fragment numbers,
   * see <a
   * href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/API_reader_Fragment.html">Fragment</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/KinesisVideoStreamStartSelector">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamStartSelector
  {
  public:
    AWS_REKOGNITION_API KinesisVideoStreamStartSelector() = default;
    AWS_REKOGNITION_API KinesisVideoStreamStartSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API KinesisVideoStreamStartSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The timestamp from the producer corresponding to the fragment, in
     * milliseconds, expressed in unix time format. </p>
     */
    inline long long GetProducerTimestamp() const { return m_producerTimestamp; }
    inline bool ProducerTimestampHasBeenSet() const { return m_producerTimestampHasBeenSet; }
    inline void SetProducerTimestamp(long long value) { m_producerTimestampHasBeenSet = true; m_producerTimestamp = value; }
    inline KinesisVideoStreamStartSelector& WithProducerTimestamp(long long value) { SetProducerTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order. </p>
     */
    inline const Aws::String& GetFragmentNumber() const { return m_fragmentNumber; }
    inline bool FragmentNumberHasBeenSet() const { return m_fragmentNumberHasBeenSet; }
    template<typename FragmentNumberT = Aws::String>
    void SetFragmentNumber(FragmentNumberT&& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = std::forward<FragmentNumberT>(value); }
    template<typename FragmentNumberT = Aws::String>
    KinesisVideoStreamStartSelector& WithFragmentNumber(FragmentNumberT&& value) { SetFragmentNumber(std::forward<FragmentNumberT>(value)); return *this;}
    ///@}
  private:

    long long m_producerTimestamp{0};
    bool m_producerTimestampHasBeenSet = false;

    Aws::String m_fragmentNumber;
    bool m_fragmentNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
