/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
   * <p>Clip range configuration for the VOD source associated with the
   * program.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ClipRange">AWS
   * API Reference</a></p>
   */
  class ClipRange
  {
  public:
    AWS_MEDIATAILOR_API ClipRange();
    AWS_MEDIATAILOR_API ClipRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ClipRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The end offset of the clip range, in milliseconds, starting from the
     * beginning of the VOD source associated with the program.</p>
     */
    inline long long GetEndOffsetMillis() const{ return m_endOffsetMillis; }

    /**
     * <p>The end offset of the clip range, in milliseconds, starting from the
     * beginning of the VOD source associated with the program.</p>
     */
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }

    /**
     * <p>The end offset of the clip range, in milliseconds, starting from the
     * beginning of the VOD source associated with the program.</p>
     */
    inline void SetEndOffsetMillis(long long value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }

    /**
     * <p>The end offset of the clip range, in milliseconds, starting from the
     * beginning of the VOD source associated with the program.</p>
     */
    inline ClipRange& WithEndOffsetMillis(long long value) { SetEndOffsetMillis(value); return *this;}


    /**
     * <p>The start offset of the clip range, in milliseconds. This offset truncates
     * the start at the number of milliseconds into the duration of the VOD source.</p>
     */
    inline long long GetStartOffsetMillis() const{ return m_startOffsetMillis; }

    /**
     * <p>The start offset of the clip range, in milliseconds. This offset truncates
     * the start at the number of milliseconds into the duration of the VOD source.</p>
     */
    inline bool StartOffsetMillisHasBeenSet() const { return m_startOffsetMillisHasBeenSet; }

    /**
     * <p>The start offset of the clip range, in milliseconds. This offset truncates
     * the start at the number of milliseconds into the duration of the VOD source.</p>
     */
    inline void SetStartOffsetMillis(long long value) { m_startOffsetMillisHasBeenSet = true; m_startOffsetMillis = value; }

    /**
     * <p>The start offset of the clip range, in milliseconds. This offset truncates
     * the start at the number of milliseconds into the duration of the VOD source.</p>
     */
    inline ClipRange& WithStartOffsetMillis(long long value) { SetStartOffsetMillis(value); return *this;}

  private:

    long long m_endOffsetMillis;
    bool m_endOffsetMillisHasBeenSet = false;

    long long m_startOffsetMillis;
    bool m_startOffsetMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
