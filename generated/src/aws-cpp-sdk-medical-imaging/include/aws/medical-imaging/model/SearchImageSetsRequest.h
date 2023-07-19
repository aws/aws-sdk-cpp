/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/SearchCriteria.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MedicalImaging
{
namespace Model
{

  /**
   */
  class SearchImageSetsRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API SearchImageSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchImageSets"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;

    AWS_MEDICALIMAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline SearchImageSetsRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline SearchImageSetsRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data store where the image sets reside.</p>
     */
    inline SearchImageSetsRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The search criteria that filters by applying a maximum of 1 item to
     * <code>SearchByAttribute</code>.</p>
     */
    inline const SearchCriteria& GetSearchCriteria() const{ return m_searchCriteria; }

    /**
     * <p>The search criteria that filters by applying a maximum of 1 item to
     * <code>SearchByAttribute</code>.</p>
     */
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }

    /**
     * <p>The search criteria that filters by applying a maximum of 1 item to
     * <code>SearchByAttribute</code>.</p>
     */
    inline void SetSearchCriteria(const SearchCriteria& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = value; }

    /**
     * <p>The search criteria that filters by applying a maximum of 1 item to
     * <code>SearchByAttribute</code>.</p>
     */
    inline void SetSearchCriteria(SearchCriteria&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::move(value); }

    /**
     * <p>The search criteria that filters by applying a maximum of 1 item to
     * <code>SearchByAttribute</code>.</p>
     */
    inline SearchImageSetsRequest& WithSearchCriteria(const SearchCriteria& value) { SetSearchCriteria(value); return *this;}

    /**
     * <p>The search criteria that filters by applying a maximum of 1 item to
     * <code>SearchByAttribute</code>.</p>
     */
    inline SearchImageSetsRequest& WithSearchCriteria(SearchCriteria&& value) { SetSearchCriteria(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results that can be returned in a search.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that can be returned in a search.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results that can be returned in a search.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that can be returned in a search.</p>
     */
    inline SearchImageSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline SearchImageSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline SearchImageSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline SearchImageSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    SearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
