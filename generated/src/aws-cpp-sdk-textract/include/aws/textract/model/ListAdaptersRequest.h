/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class ListAdaptersRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API ListAdaptersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAdapters"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the lower bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created after the specified creation
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterCreationTime() const{ return m_afterCreationTime; }

    /**
     * <p>Specifies the lower bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created after the specified creation
     * time.</p>
     */
    inline bool AfterCreationTimeHasBeenSet() const { return m_afterCreationTimeHasBeenSet; }

    /**
     * <p>Specifies the lower bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created after the specified creation
     * time.</p>
     */
    inline void SetAfterCreationTime(const Aws::Utils::DateTime& value) { m_afterCreationTimeHasBeenSet = true; m_afterCreationTime = value; }

    /**
     * <p>Specifies the lower bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created after the specified creation
     * time.</p>
     */
    inline void SetAfterCreationTime(Aws::Utils::DateTime&& value) { m_afterCreationTimeHasBeenSet = true; m_afterCreationTime = std::move(value); }

    /**
     * <p>Specifies the lower bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created after the specified creation
     * time.</p>
     */
    inline ListAdaptersRequest& WithAfterCreationTime(const Aws::Utils::DateTime& value) { SetAfterCreationTime(value); return *this;}

    /**
     * <p>Specifies the lower bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created after the specified creation
     * time.</p>
     */
    inline ListAdaptersRequest& WithAfterCreationTime(Aws::Utils::DateTime&& value) { SetAfterCreationTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the upper bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created before the specified creation
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeCreationTime() const{ return m_beforeCreationTime; }

    /**
     * <p>Specifies the upper bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created before the specified creation
     * time.</p>
     */
    inline bool BeforeCreationTimeHasBeenSet() const { return m_beforeCreationTimeHasBeenSet; }

    /**
     * <p>Specifies the upper bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created before the specified creation
     * time.</p>
     */
    inline void SetBeforeCreationTime(const Aws::Utils::DateTime& value) { m_beforeCreationTimeHasBeenSet = true; m_beforeCreationTime = value; }

    /**
     * <p>Specifies the upper bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created before the specified creation
     * time.</p>
     */
    inline void SetBeforeCreationTime(Aws::Utils::DateTime&& value) { m_beforeCreationTimeHasBeenSet = true; m_beforeCreationTime = std::move(value); }

    /**
     * <p>Specifies the upper bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created before the specified creation
     * time.</p>
     */
    inline ListAdaptersRequest& WithBeforeCreationTime(const Aws::Utils::DateTime& value) { SetBeforeCreationTime(value); return *this;}

    /**
     * <p>Specifies the upper bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created before the specified creation
     * time.</p>
     */
    inline ListAdaptersRequest& WithBeforeCreationTime(Aws::Utils::DateTime&& value) { SetBeforeCreationTime(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return when listing adapters.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return when listing adapters.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return when listing adapters.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return when listing adapters.</p>
     */
    inline ListAdaptersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline ListAdaptersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline ListAdaptersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline ListAdaptersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_afterCreationTime;
    bool m_afterCreationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_beforeCreationTime;
    bool m_beforeCreationTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
