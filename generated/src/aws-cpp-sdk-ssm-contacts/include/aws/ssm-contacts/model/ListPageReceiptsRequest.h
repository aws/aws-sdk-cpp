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
  class ListPageReceiptsRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListPageReceiptsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPageReceipts"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline const Aws::String& GetPageId() const{ return m_pageId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline bool PageIdHasBeenSet() const { return m_pageIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline void SetPageId(const Aws::String& value) { m_pageIdHasBeenSet = true; m_pageId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline void SetPageId(Aws::String&& value) { m_pageIdHasBeenSet = true; m_pageId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline void SetPageId(const char* value) { m_pageIdHasBeenSet = true; m_pageId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline ListPageReceiptsRequest& WithPageId(const Aws::String& value) { SetPageId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline ListPageReceiptsRequest& WithPageId(Aws::String&& value) { SetPageId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a specific contact
     * channel.</p>
     */
    inline ListPageReceiptsRequest& WithPageId(const char* value) { SetPageId(value); return *this;}


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
    inline ListPageReceiptsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPageReceiptsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPageReceiptsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of acknowledgements per page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of acknowledgements per page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of acknowledgements per page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of acknowledgements per page of results.</p>
     */
    inline ListPageReceiptsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_pageId;
    bool m_pageIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
