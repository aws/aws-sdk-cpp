/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace TranscribeService {
namespace Model {

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
class RelativeTimeRange {
 public:
  AWS_TRANSCRIBESERVICE_API RelativeTimeRange() = default;
  AWS_TRANSCRIBESERVICE_API RelativeTimeRange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API RelativeTimeRange& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The time, in percentage, when Amazon Transcribe starts searching for the
   * specified criteria in your media file. If you include
   * <code>StartPercentage</code> in your request, you must also include
   * <code>EndPercentage</code>.</p>
   */
  inline int64_t GetStartPercentage() const { return m_startPercentage; }
  inline bool StartPercentageHasBeenSet() const { return m_startPercentageHasBeenSet; }
  inline void SetStartPercentage(int64_t value) {
    m_startPercentageHasBeenSet = true;
    m_startPercentage = value;
  }
  inline RelativeTimeRange& WithStartPercentage(int64_t value) {
    SetStartPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in percentage, when Amazon Transcribe stops searching for the
   * specified criteria in your media file. If you include <code>EndPercentage</code>
   * in your request, you must also include <code>StartPercentage</code>.</p>
   */
  inline int64_t GetEndPercentage() const { return m_endPercentage; }
  inline bool EndPercentageHasBeenSet() const { return m_endPercentageHasBeenSet; }
  inline void SetEndPercentage(int64_t value) {
    m_endPercentageHasBeenSet = true;
    m_endPercentage = value;
  }
  inline RelativeTimeRange& WithEndPercentage(int64_t value) {
    SetEndPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in percentage, from the start of your media file until the
   * specified value. Amazon Transcribe searches for your specified criteria in this
   * time segment.</p>
   */
  inline int64_t GetFirst() const { return m_first; }
  inline bool FirstHasBeenSet() const { return m_firstHasBeenSet; }
  inline void SetFirst(int64_t value) {
    m_firstHasBeenSet = true;
    m_first = value;
  }
  inline RelativeTimeRange& WithFirst(int64_t value) {
    SetFirst(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in percentage, from the specified value until the end of your media
   * file. Amazon Transcribe searches for your specified criteria in this time
   * segment.</p>
   */
  inline int64_t GetLast() const { return m_last; }
  inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }
  inline void SetLast(int64_t value) {
    m_lastHasBeenSet = true;
    m_last = value;
  }
  inline RelativeTimeRange& WithLast(int64_t value) {
    SetLast(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_startPercentage{0};

  int64_t m_endPercentage{0};

  int64_t m_first{0};

  int64_t m_last{0};
  bool m_startPercentageHasBeenSet = false;
  bool m_endPercentageHasBeenSet = false;
  bool m_firstHasBeenSet = false;
  bool m_lastHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
