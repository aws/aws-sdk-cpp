﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/ReviewableHITStatus.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ListReviewableHITsRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ListReviewableHITsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReviewableHITs"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the HIT type of the HITs to consider for the query. If not
     * specified, all HITs for the Reviewer are considered </p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = value; }
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::move(value); }
    inline void SetHITTypeId(const char* value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId.assign(value); }
    inline ListReviewableHITsRequest& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}
    inline ListReviewableHITsRequest& WithHITTypeId(Aws::String&& value) { SetHITTypeId(std::move(value)); return *this;}
    inline ListReviewableHITsRequest& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Can be either <code>Reviewable</code> or <code>Reviewing</code>. Reviewable
     * is the default value. </p>
     */
    inline const ReviewableHITStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReviewableHITStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReviewableHITStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListReviewableHITsRequest& WithStatus(const ReviewableHITStatus& value) { SetStatus(value); return *this;}
    inline ListReviewableHITsRequest& WithStatus(ReviewableHITStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination Token</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListReviewableHITsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReviewableHITsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReviewableHITsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Limit the number of results returned. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReviewableHITsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet = false;

    ReviewableHITStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
