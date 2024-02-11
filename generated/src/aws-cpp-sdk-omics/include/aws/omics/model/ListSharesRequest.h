/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/model/ResourceOwner.h>
#include <aws/omics/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListSharesRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListShares"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The account that owns the analytics store shared. </p>
     */
    inline const ResourceOwner& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p> The account that owns the analytics store shared. </p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p> The account that owns the analytics store shared. </p>
     */
    inline void SetResourceOwner(const ResourceOwner& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p> The account that owns the analytics store shared. </p>
     */
    inline void SetResourceOwner(ResourceOwner&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p> The account that owns the analytics store shared. </p>
     */
    inline ListSharesRequest& WithResourceOwner(const ResourceOwner& value) { SetResourceOwner(value); return *this;}

    /**
     * <p> The account that owns the analytics store shared. </p>
     */
    inline ListSharesRequest& WithResourceOwner(ResourceOwner&& value) { SetResourceOwner(std::move(value)); return *this;}


    /**
     * <p> Attributes used to filter for a specific subset of shares. </p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }

    /**
     * <p> Attributes used to filter for a specific subset of shares. </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> Attributes used to filter for a specific subset of shares. </p>
     */
    inline void SetFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> Attributes used to filter for a specific subset of shares. </p>
     */
    inline void SetFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> Attributes used to filter for a specific subset of shares. </p>
     */
    inline ListSharesRequest& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    /**
     * <p> Attributes used to filter for a specific subset of shares. </p>
     */
    inline ListSharesRequest& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline ListSharesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline ListSharesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline ListSharesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of shares to return in one page of results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of shares to return in one page of results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of shares to return in one page of results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of shares to return in one page of results. </p>
     */
    inline ListSharesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ResourceOwner m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Filter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
