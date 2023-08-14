/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ListAnnotationStoreVersionsFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListAnnotationStoreVersionsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListAnnotationStoreVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAnnotationStoreVersions"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of an annotation store. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of an annotation store. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of an annotation store. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The maximum number of annotation store versions to return in one page of
     * results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of annotation store versions to return in one page of
     * results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of annotation store versions to return in one page of
     * results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of annotation store versions to return in one page of
     * results. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A filter to apply to the list of annotation store versions. </p>
     */
    inline const ListAnnotationStoreVersionsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p> A filter to apply to the list of annotation store versions. </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> A filter to apply to the list of annotation store versions. </p>
     */
    inline void SetFilter(const ListAnnotationStoreVersionsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> A filter to apply to the list of annotation store versions. </p>
     */
    inline void SetFilter(ListAnnotationStoreVersionsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> A filter to apply to the list of annotation store versions. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithFilter(const ListAnnotationStoreVersionsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p> A filter to apply to the list of annotation store versions. </p>
     */
    inline ListAnnotationStoreVersionsRequest& WithFilter(ListAnnotationStoreVersionsFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListAnnotationStoreVersionsFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
