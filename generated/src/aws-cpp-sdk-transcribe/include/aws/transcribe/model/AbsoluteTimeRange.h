/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>

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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>A time range, in milliseconds, between two points in your media file.</p>
   * <p>You can use <code>StartTime</code> and <code>EndTime</code> to search a
   * custom segment. For example, setting <code>StartTime</code> to 10000 and
   * <code>EndTime</code> to 50000 only searches for your specified criteria in the
   * audio contained between the 10,000 millisecond mark and the 50,000 millisecond
   * mark of your media file. You must use <code>StartTime</code> and
   * <code>EndTime</code> as a set; that is, if you include one, you must include
   * both.</p> <p>You can use also <code>First</code> to search from the start of the
   * audio until the time that you specify, or <code>Last</code> to search from the
   * time that you specify until the end of the audio. For example, setting
   * <code>First</code> to 50000 only searches for your specified criteria in the
   * audio contained between the start of the media file to the 50,000 millisecond
   * mark. You can use <code>First</code> and <code>Last</code> independently of each
   * other.</p> <p>If you prefer to use percentage instead of milliseconds, see
   * .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/AbsoluteTimeRange">AWS
   * API Reference</a></p>
   */
  class AbsoluteTimeRange
  {
  public:
    AWS_TRANSCRIBESERVICE_API AbsoluteTimeRange() = default;
    AWS_TRANSCRIBESERVICE_API AbsoluteTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API AbsoluteTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time, in milliseconds, when Amazon Transcribe starts searching for the
     * specified criteria in your audio. If you include <code>StartTime</code> in your
     * request, you must also include <code>EndTime</code>.</p>
     */
    inline long long GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline AbsoluteTimeRange& WithStartTime(long long value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, when Amazon Transcribe stops searching for the
     * specified criteria in your audio. If you include <code>EndTime</code> in your
     * request, you must also include <code>StartTime</code>.</p>
     */
    inline long long GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline AbsoluteTimeRange& WithEndTime(long long value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the start of your media file until the
     * specified value. Amazon Transcribe searches for your specified criteria in this
     * time segment.</p>
     */
    inline long long GetFirst() const { return m_first; }
    inline bool FirstHasBeenSet() const { return m_firstHasBeenSet; }
    inline void SetFirst(long long value) { m_firstHasBeenSet = true; m_first = value; }
    inline AbsoluteTimeRange& WithFirst(long long value) { SetFirst(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the specified value until the end of your
     * media file. Amazon Transcribe searches for your specified criteria in this time
     * segment.</p>
     */
    inline long long GetLast() const { return m_last; }
    inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }
    inline void SetLast(long long value) { m_lastHasBeenSet = true; m_last = value; }
    inline AbsoluteTimeRange& WithLast(long long value) { SetLast(value); return *this;}
    ///@}
  private:

    long long m_startTime{0};
    bool m_startTimeHasBeenSet = false;

    long long m_endTime{0};
    bool m_endTimeHasBeenSet = false;

    long long m_first{0};
    bool m_firstHasBeenSet = false;

    long long m_last{0};
    bool m_lastHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
