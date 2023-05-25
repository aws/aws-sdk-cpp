/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>

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
   * <p>Contains the timestamp range (start time through end time) of a matched
   * category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/TimestampRange">AWS
   * API Reference</a></p>
   */
  class TimestampRange
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API TimestampRange();
    AWS_TRANSCRIBESTREAMINGSERVICE_API TimestampRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API TimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the category match.</p>
     */
    inline long long GetBeginOffsetMillis() const{ return m_beginOffsetMillis; }

    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the category match.</p>
     */
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }

    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the category match.</p>
     */
    inline void SetBeginOffsetMillis(long long value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }

    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the category match.</p>
     */
    inline TimestampRange& WithBeginOffsetMillis(long long value) { SetBeginOffsetMillis(value); return *this;}


    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the end
     * of the category match.</p>
     */
    inline long long GetEndOffsetMillis() const{ return m_endOffsetMillis; }

    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the end
     * of the category match.</p>
     */
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }

    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the end
     * of the category match.</p>
     */
    inline void SetEndOffsetMillis(long long value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }

    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the end
     * of the category match.</p>
     */
    inline TimestampRange& WithEndOffsetMillis(long long value) { SetEndOffsetMillis(value); return *this;}

  private:

    long long m_beginOffsetMillis;
    bool m_beginOffsetMillisHasBeenSet = false;

    long long m_endOffsetMillis;
    bool m_endOffsetMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
