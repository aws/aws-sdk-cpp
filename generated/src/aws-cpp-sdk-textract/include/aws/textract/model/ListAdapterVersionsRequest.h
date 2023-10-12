/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class ListAdapterVersionsRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API ListAdapterVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAdapterVersions"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }

    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }

    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }

    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }

    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline ListAdapterVersionsRequest& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline ListAdapterVersionsRequest& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter to match for when listing
     * adapter versions.</p>
     */
    inline ListAdapterVersionsRequest& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>Specifies the lower bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterCreationTime() const{ return m_afterCreationTime; }

    /**
     * <p>Specifies the lower bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline bool AfterCreationTimeHasBeenSet() const { return m_afterCreationTimeHasBeenSet; }

    /**
     * <p>Specifies the lower bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline void SetAfterCreationTime(const Aws::Utils::DateTime& value) { m_afterCreationTimeHasBeenSet = true; m_afterCreationTime = value; }

    /**
     * <p>Specifies the lower bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline void SetAfterCreationTime(Aws::Utils::DateTime&& value) { m_afterCreationTimeHasBeenSet = true; m_afterCreationTime = std::move(value); }

    /**
     * <p>Specifies the lower bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline ListAdapterVersionsRequest& WithAfterCreationTime(const Aws::Utils::DateTime& value) { SetAfterCreationTime(value); return *this;}

    /**
     * <p>Specifies the lower bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline ListAdapterVersionsRequest& WithAfterCreationTime(Aws::Utils::DateTime&& value) { SetAfterCreationTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the upper bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeCreationTime() const{ return m_beforeCreationTime; }

    /**
     * <p>Specifies the upper bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline bool BeforeCreationTimeHasBeenSet() const { return m_beforeCreationTimeHasBeenSet; }

    /**
     * <p>Specifies the upper bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline void SetBeforeCreationTime(const Aws::Utils::DateTime& value) { m_beforeCreationTimeHasBeenSet = true; m_beforeCreationTime = value; }

    /**
     * <p>Specifies the upper bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline void SetBeforeCreationTime(Aws::Utils::DateTime&& value) { m_beforeCreationTimeHasBeenSet = true; m_beforeCreationTime = std::move(value); }

    /**
     * <p>Specifies the upper bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline ListAdapterVersionsRequest& WithBeforeCreationTime(const Aws::Utils::DateTime& value) { SetBeforeCreationTime(value); return *this;}

    /**
     * <p>Specifies the upper bound for the ListAdapterVersions operation. Ensures
     * ListAdapterVersions returns only adapter versions created after the specified
     * creation time.</p>
     */
    inline ListAdapterVersionsRequest& WithBeforeCreationTime(Aws::Utils::DateTime&& value) { SetBeforeCreationTime(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return when listing adapter versions.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return when listing adapter versions.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return when listing adapter versions.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return when listing adapter versions.</p>
     */
    inline ListAdapterVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline ListAdapterVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline ListAdapterVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline ListAdapterVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

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
