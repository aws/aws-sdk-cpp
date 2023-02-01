/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class ListApplicationsRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API ListApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplications"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;

    AWS_APPREGISTRY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListApplicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListApplicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListApplicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The upper bound of the number of results to return (cannot exceed 25). If
     * this parameter is omitted, it defaults to 25. This value is optional.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The upper bound of the number of results to return (cannot exceed 25). If
     * this parameter is omitted, it defaults to 25. This value is optional.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The upper bound of the number of results to return (cannot exceed 25). If
     * this parameter is omitted, it defaults to 25. This value is optional.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The upper bound of the number of results to return (cannot exceed 25). If
     * this parameter is omitted, it defaults to 25. This value is optional.</p>
     */
    inline ListApplicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
