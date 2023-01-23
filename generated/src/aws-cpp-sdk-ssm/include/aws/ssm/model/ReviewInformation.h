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
    AWS_SSM_API ReviewInformation();
    AWS_SSM_API ReviewInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ReviewInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time that the reviewer took action on the document review request.</p>
     */
    inline const Aws::Utils::DateTime& GetReviewedTime() const{ return m_reviewedTime; }

    /**
     * <p>The time that the reviewer took action on the document review request.</p>
     */
    inline bool ReviewedTimeHasBeenSet() const { return m_reviewedTimeHasBeenSet; }

    /**
     * <p>The time that the reviewer took action on the document review request.</p>
     */
    inline void SetReviewedTime(const Aws::Utils::DateTime& value) { m_reviewedTimeHasBeenSet = true; m_reviewedTime = value; }

    /**
     * <p>The time that the reviewer took action on the document review request.</p>
     */
    inline void SetReviewedTime(Aws::Utils::DateTime&& value) { m_reviewedTimeHasBeenSet = true; m_reviewedTime = std::move(value); }

    /**
     * <p>The time that the reviewer took action on the document review request.</p>
     */
    inline ReviewInformation& WithReviewedTime(const Aws::Utils::DateTime& value) { SetReviewedTime(value); return *this;}

    /**
     * <p>The time that the reviewer took action on the document review request.</p>
     */
    inline ReviewInformation& WithReviewedTime(Aws::Utils::DateTime&& value) { SetReviewedTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the document review request.</p>
     */
    inline const ReviewStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the document review request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the document review request.</p>
     */
    inline void SetStatus(const ReviewStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the document review request.</p>
     */
    inline void SetStatus(ReviewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the document review request.</p>
     */
    inline ReviewInformation& WithStatus(const ReviewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the document review request.</p>
     */
    inline ReviewInformation& WithStatus(ReviewStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline const Aws::String& GetReviewer() const{ return m_reviewer; }

    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline bool ReviewerHasBeenSet() const { return m_reviewerHasBeenSet; }

    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline void SetReviewer(const Aws::String& value) { m_reviewerHasBeenSet = true; m_reviewer = value; }

    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline void SetReviewer(Aws::String&& value) { m_reviewerHasBeenSet = true; m_reviewer = std::move(value); }

    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline void SetReviewer(const char* value) { m_reviewerHasBeenSet = true; m_reviewer.assign(value); }

    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline ReviewInformation& WithReviewer(const Aws::String& value) { SetReviewer(value); return *this;}

    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline ReviewInformation& WithReviewer(Aws::String&& value) { SetReviewer(std::move(value)); return *this;}

    /**
     * <p>The reviewer assigned to take action on the document review request.</p>
     */
    inline ReviewInformation& WithReviewer(const char* value) { SetReviewer(value); return *this;}

  private:

    Aws::Utils::DateTime m_reviewedTime;
    bool m_reviewedTimeHasBeenSet = false;

    ReviewStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reviewer;
    bool m_reviewerHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
