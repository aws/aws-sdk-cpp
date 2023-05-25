/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ThemeType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class ListThemesRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API ListThemesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListThemes"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline ListThemesRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline ListThemesRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the themes that
     * you're listing.</p>
     */
    inline ListThemesRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListThemesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListThemesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListThemesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline ListThemesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The type of themes that you want to list. Valid options include the
     * following:</p> <ul> <li> <p> <code>ALL (default)</code>- Display all existing
     * themes.</p> </li> <li> <p> <code>CUSTOM</code> - Display only the themes created
     * by people using Amazon QuickSight.</p> </li> <li> <p> <code>QUICKSIGHT</code> -
     * Display only the starting themes defined by Amazon QuickSight.</p> </li> </ul>
     */
    inline const ThemeType& GetType() const{ return m_type; }

    /**
     * <p>The type of themes that you want to list. Valid options include the
     * following:</p> <ul> <li> <p> <code>ALL (default)</code>- Display all existing
     * themes.</p> </li> <li> <p> <code>CUSTOM</code> - Display only the themes created
     * by people using Amazon QuickSight.</p> </li> <li> <p> <code>QUICKSIGHT</code> -
     * Display only the starting themes defined by Amazon QuickSight.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of themes that you want to list. Valid options include the
     * following:</p> <ul> <li> <p> <code>ALL (default)</code>- Display all existing
     * themes.</p> </li> <li> <p> <code>CUSTOM</code> - Display only the themes created
     * by people using Amazon QuickSight.</p> </li> <li> <p> <code>QUICKSIGHT</code> -
     * Display only the starting themes defined by Amazon QuickSight.</p> </li> </ul>
     */
    inline void SetType(const ThemeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of themes that you want to list. Valid options include the
     * following:</p> <ul> <li> <p> <code>ALL (default)</code>- Display all existing
     * themes.</p> </li> <li> <p> <code>CUSTOM</code> - Display only the themes created
     * by people using Amazon QuickSight.</p> </li> <li> <p> <code>QUICKSIGHT</code> -
     * Display only the starting themes defined by Amazon QuickSight.</p> </li> </ul>
     */
    inline void SetType(ThemeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of themes that you want to list. Valid options include the
     * following:</p> <ul> <li> <p> <code>ALL (default)</code>- Display all existing
     * themes.</p> </li> <li> <p> <code>CUSTOM</code> - Display only the themes created
     * by people using Amazon QuickSight.</p> </li> <li> <p> <code>QUICKSIGHT</code> -
     * Display only the starting themes defined by Amazon QuickSight.</p> </li> </ul>
     */
    inline ListThemesRequest& WithType(const ThemeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of themes that you want to list. Valid options include the
     * following:</p> <ul> <li> <p> <code>ALL (default)</code>- Display all existing
     * themes.</p> </li> <li> <p> <code>CUSTOM</code> - Display only the themes created
     * by people using Amazon QuickSight.</p> </li> <li> <p> <code>QUICKSIGHT</code> -
     * Display only the starting themes defined by Amazon QuickSight.</p> </li> </ul>
     */
    inline ListThemesRequest& WithType(ThemeType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ThemeType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
