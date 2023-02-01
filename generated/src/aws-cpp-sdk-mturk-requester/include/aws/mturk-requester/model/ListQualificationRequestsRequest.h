/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ListQualificationRequestsRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ListQualificationRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQualificationRequests"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline ListQualificationRequestsRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline ListQualificationRequestsRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline ListQualificationRequestsRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListQualificationRequestsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListQualificationRequestsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListQualificationRequestsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline ListQualificationRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
