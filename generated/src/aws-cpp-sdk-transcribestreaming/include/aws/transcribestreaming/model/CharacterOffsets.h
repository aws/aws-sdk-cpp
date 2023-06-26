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
   * <p>Provides the location, using character count, in your transcript where a
   * match is identified. For example, the location of an issue or a category match
   * within a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CharacterOffsets">AWS
   * API Reference</a></p>
   */
  class CharacterOffsets
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CharacterOffsets();
    AWS_TRANSCRIBESTREAMINGSERVICE_API CharacterOffsets(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CharacterOffsets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the character count of the first character where a match is
     * identified. For example, the first character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline int GetBegin() const{ return m_begin; }

    /**
     * <p>Provides the character count of the first character where a match is
     * identified. For example, the first character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline bool BeginHasBeenSet() const { return m_beginHasBeenSet; }

    /**
     * <p>Provides the character count of the first character where a match is
     * identified. For example, the first character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline void SetBegin(int value) { m_beginHasBeenSet = true; m_begin = value; }

    /**
     * <p>Provides the character count of the first character where a match is
     * identified. For example, the first character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline CharacterOffsets& WithBegin(int value) { SetBegin(value); return *this;}


    /**
     * <p>Provides the character count of the last character where a match is
     * identified. For example, the last character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline int GetEnd() const{ return m_end; }

    /**
     * <p>Provides the character count of the last character where a match is
     * identified. For example, the last character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>Provides the character count of the last character where a match is
     * identified. For example, the last character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline void SetEnd(int value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>Provides the character count of the last character where a match is
     * identified. For example, the last character associated with an issue or a
     * category match in a segment transcript.</p>
     */
    inline CharacterOffsets& WithEnd(int value) { SetEnd(value); return *this;}

  private:

    int m_begin;
    bool m_beginHasBeenSet = false;

    int m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
