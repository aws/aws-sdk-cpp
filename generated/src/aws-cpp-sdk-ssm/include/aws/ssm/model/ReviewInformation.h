/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/ReviewStatus.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the result of a document review request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ReviewInformation">AWS
   * API Reference</a></p>
   */
  class ReviewInformation
  {
  public:
    AWS_SSM_API ReviewInformation() = default;
    AWS_SSM_API ReviewInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ReviewInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that the reviewer took action on the document review request.</p>
     */
    inline const Aws::Utils::DateTime& GetReviewedTime() const { return m_reviewedTime; }
    inline bool ReviewedTimeHasBeenSet() const { return m_reviewedTimeHasBeenSet; }
    template<typename ReviewedTimeT = Aws::Utils::DateTime>
    void SetReviewedTime(ReviewedTimeT&& value) { m_reviewedTimeHasBeenSet = true; m_reviewedTime = std::forward<ReviewedTimeT>(value); }
    template<typename ReviewedTimeT = Aws::Utils::DateTime>
    ReviewInformation& WithReviewedTime(ReviewedTimeT&& value) { SetReviewedTime(std::forward<ReviewedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the document review request.</p>
     */
    inline ReviewStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReviewInformation& WithStatus(ReviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline const Aws::String& GetReviewer() const { return m_reviewer; }
    inline bool ReviewerHasBeenSet() const { return m_reviewerHasBeenSet; }
    template<typename ReviewerT = Aws::String>
    void SetReviewer(ReviewerT&& value) { m_reviewerHasBeenSet = true; m_reviewer = std::forward<ReviewerT>(value); }
    template<typename ReviewerT = Aws::String>
    ReviewInformation& WithReviewer(ReviewerT&& value) { SetReviewer(std::forward<ReviewerT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_reviewedTime{};
    bool m_reviewedTimeHasBeenSet = false;

    ReviewStatus m_status{ReviewStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reviewer;
    bool m_reviewerHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
