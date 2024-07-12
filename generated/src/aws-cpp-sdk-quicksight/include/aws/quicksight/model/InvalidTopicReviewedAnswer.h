/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ReviewedAnswerErrorCode.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for a <code>InvalidTopicReviewedAnswer</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InvalidTopicReviewedAnswer">AWS
   * API Reference</a></p>
   */
  class InvalidTopicReviewedAnswer
  {
  public:
    AWS_QUICKSIGHT_API InvalidTopicReviewedAnswer();
    AWS_QUICKSIGHT_API InvalidTopicReviewedAnswer(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API InvalidTopicReviewedAnswer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The answer ID for the <code>InvalidTopicReviewedAnswer</code>.</p>
     */
    inline const Aws::String& GetAnswerId() const{ return m_answerId; }
    inline bool AnswerIdHasBeenSet() const { return m_answerIdHasBeenSet; }
    inline void SetAnswerId(const Aws::String& value) { m_answerIdHasBeenSet = true; m_answerId = value; }
    inline void SetAnswerId(Aws::String&& value) { m_answerIdHasBeenSet = true; m_answerId = std::move(value); }
    inline void SetAnswerId(const char* value) { m_answerIdHasBeenSet = true; m_answerId.assign(value); }
    inline InvalidTopicReviewedAnswer& WithAnswerId(const Aws::String& value) { SetAnswerId(value); return *this;}
    inline InvalidTopicReviewedAnswer& WithAnswerId(Aws::String&& value) { SetAnswerId(std::move(value)); return *this;}
    inline InvalidTopicReviewedAnswer& WithAnswerId(const char* value) { SetAnswerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error that is returned for the
     * <code>InvalidTopicReviewedAnswer</code>.</p>
     */
    inline const ReviewedAnswerErrorCode& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ReviewedAnswerErrorCode& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ReviewedAnswerErrorCode&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline InvalidTopicReviewedAnswer& WithError(const ReviewedAnswerErrorCode& value) { SetError(value); return *this;}
    inline InvalidTopicReviewedAnswer& WithError(ReviewedAnswerErrorCode&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_answerId;
    bool m_answerIdHasBeenSet = false;

    ReviewedAnswerErrorCode m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
