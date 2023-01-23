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
   * <p>A time range, in percentage, between two points in your media file.</p>
   * <p>You can use <code>StartPercentage</code> and <code>EndPercentage</code> to
   * search a custom segment. For example, setting <code>StartPercentage</code> to 10
   * and <code>EndPercentage</code> to 50 only searches for your specified criteria
   * in the audio contained between the 10 percent mark and the 50 percent mark of
   * your media file.</p> <p>You can use also <code>First</code> to search from the
   * start of the media file until the time that you specify. Or use
   * <code>Last</code> to search from the time that you specify until the end of the
   * media file. For example, setting <code>First</code> to 10 only searches for your
   * specified criteria in the audio contained in the first 10 percent of the media
   * file.</p> <p>If you prefer to use milliseconds instead of percentage, see
   * .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/RelativeTimeRange">AWS
   * API Reference</a></p>
   */
  class RelativeTimeRange
  {
  public:
    AWS_TRANSCRIBESERVICE_API RelativeTimeRange();
    AWS_TRANSCRIBESERVICE_API RelativeTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API RelativeTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in percentage, when Amazon Transcribe starts searching for the
     * specified criteria in your media file. If you include
     * <code>StartPercentage</code> in your request, you must also include
     * <code>EndPercentage</code>.</p>
     */
    inline int GetStartPercentage() const{ return m_startPercentage; }

    /**
     * <p>The time, in percentage, when Amazon Transcribe starts searching for the
     * specified criteria in your media file. If you include
     * <code>StartPercentage</code> in your request, you must also include
     * <code>EndPercentage</code>.</p>
     */
    inline bool StartPercentageHasBeenSet() const { return m_startPercentageHasBeenSet; }

    /**
     * <p>The time, in percentage, when Amazon Transcribe starts searching for the
     * specified criteria in your media file. If you include
     * <code>StartPercentage</code> in your request, you must also include
     * <code>EndPercentage</code>.</p>
     */
    inline void SetStartPercentage(int value) { m_startPercentageHasBeenSet = true; m_startPercentage = value; }

    /**
     * <p>The time, in percentage, when Amazon Transcribe starts searching for the
     * specified criteria in your media file. If you include
     * <code>StartPercentage</code> in your request, you must also include
     * <code>EndPercentage</code>.</p>
     */
    inline RelativeTimeRange& WithStartPercentage(int value) { SetStartPercentage(value); return *this;}


    /**
     * <p>The time, in percentage, when Amazon Transcribe stops searching for the
     * specified criteria in your media file. If you include <code>EndPercentage</code>
     * in your request, you must also include <code>StartPercentage</code>.</p>
     */
    inline int GetEndPercentage() const{ return m_endPercentage; }

    /**
     * <p>The time, in percentage, when Amazon Transcribe stops searching for the
     * specified criteria in your media file. If you include <code>EndPercentage</code>
     * in your request, you must also include <code>StartPercentage</code>.</p>
     */
    inline bool EndPercentageHasBeenSet() const { return m_endPercentageHasBeenSet; }

    /**
     * <p>The time, in percentage, when Amazon Transcribe stops searching for the
     * specified criteria in your media file. If you include <code>EndPercentage</code>
     * in your request, you must also include <code>StartPercentage</code>.</p>
     */
    inline void SetEndPercentage(int value) { m_endPercentageHasBeenSet = true; m_endPercentage = value; }

    /**
     * <p>The time, in percentage, when Amazon Transcribe stops searching for the
     * specified criteria in your media file. If you include <code>EndPercentage</code>
     * in your request, you must also include <code>StartPercentage</code>.</p>
     */
    inline RelativeTimeRange& WithEndPercentage(int value) { SetEndPercentage(value); return *this;}


    /**
     * <p>The time, in percentage, from the start of your media file until the
     * specified value. Amazon Transcribe searches for your specified criteria in this
     * time segment.</p>
     */
    inline int GetFirst() const{ return m_first; }

    /**
     * <p>The time, in percentage, from the start of your media file until the
     * specified value. Amazon Transcribe searches for your specified criteria in this
     * time segment.</p>
     */
    inline bool FirstHasBeenSet() const { return m_firstHasBeenSet; }

    /**
     * <p>The time, in percentage, from the start of your media file until the
     * specified value. Amazon Transcribe searches for your specified criteria in this
     * time segment.</p>
     */
    inline void SetFirst(int value) { m_firstHasBeenSet = true; m_first = value; }

    /**
     * <p>The time, in percentage, from the start of your media file until the
     * specified value. Amazon Transcribe searches for your specified criteria in this
     * time segment.</p>
     */
    inline RelativeTimeRange& WithFirst(int value) { SetFirst(value); return *this;}


    /**
     * <p>The time, in percentage, from the specified value until the end of your media
     * file. Amazon Transcribe searches for your specified criteria in this time
     * segment.</p>
     */
    inline int GetLast() const{ return m_last; }

    /**
     * <p>The time, in percentage, from the specified value until the end of your media
     * file. Amazon Transcribe searches for your specified criteria in this time
     * segment.</p>
     */
    inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }

    /**
     * <p>The time, in percentage, from the specified value until the end of your media
     * file. Amazon Transcribe searches for your specified criteria in this time
     * segment.</p>
     */
    inline void SetLast(int value) { m_lastHasBeenSet = true; m_last = value; }

    /**
     * <p>The time, in percentage, from the specified value until the end of your media
     * file. Amazon Transcribe searches for your specified criteria in this time
     * segment.</p>
     */
    inline RelativeTimeRange& WithLast(int value) { SetLast(value); return *this;}

  private:

    int m_startPercentage;
    bool m_startPercentageHasBeenSet = false;

    int m_endPercentage;
    bool m_endPercentageHasBeenSet = false;

    int m_first;
    bool m_firstHasBeenSet = false;

    int m_last;
    bool m_lastHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
