﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/CelebrityDetail.h>
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
   * <p>Information about a detected celebrity and the time the celebrity was
   * detected in a stored video. For more information, see GetCelebrityRecognition in
   * the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CelebrityRecognition">AWS
   * API Reference</a></p>
   */
  class CelebrityRecognition
  {
  public:
    AWS_REKOGNITION_API CelebrityRecognition() = default;
    AWS_REKOGNITION_API CelebrityRecognition(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CelebrityRecognition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time, in milliseconds from the start of the video, that the celebrity was
     * recognized. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the celebrity first appears.</p>
     */
    inline long long GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline CelebrityRecognition& WithTimestamp(long long value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a recognized celebrity.</p>
     */
    inline const CelebrityDetail& GetCelebrity() const { return m_celebrity; }
    inline bool CelebrityHasBeenSet() const { return m_celebrityHasBeenSet; }
    template<typename CelebrityT = CelebrityDetail>
    void SetCelebrity(CelebrityT&& value) { m_celebrityHasBeenSet = true; m_celebrity = std::forward<CelebrityT>(value); }
    template<typename CelebrityT = CelebrityDetail>
    CelebrityRecognition& WithCelebrity(CelebrityT&& value) { SetCelebrity(std::forward<CelebrityT>(value)); return *this;}
    ///@}
  private:

    long long m_timestamp{0};
    bool m_timestampHasBeenSet = false;

    CelebrityDetail m_celebrity;
    bool m_celebrityHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
