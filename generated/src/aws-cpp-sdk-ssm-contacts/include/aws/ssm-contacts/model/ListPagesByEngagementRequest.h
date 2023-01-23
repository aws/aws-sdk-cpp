/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ListPagesByEngagementRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListPagesByEngagementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPagesByEngagement"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline void SetEngagementId(const Aws::String& value) { m_engagementIdHasBeenSet = true; m_engagementId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline void SetEngagementId(Aws::String&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline void SetEngagementId(const char* value) { m_engagementIdHasBeenSet = true; m_engagementId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline ListPagesByEngagementRequest& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline ListPagesByEngagementRequest& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline ListPagesByEngagementRequest& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPagesByEngagementRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPagesByEngagementRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPagesByEngagementRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of engagements to contact channels to list per page of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of engagements to contact channels to list per page of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of engagements to contact channels to list per page of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of engagements to contact channels to list per page of
     * results.</p>
     */
    inline ListPagesByEngagementRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
