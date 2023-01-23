/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class ListAccessPointsForObjectLambdaRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListAccessPointsForObjectLambdaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessPointsForObjectLambda"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline ListAccessPointsForObjectLambdaRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline ListAccessPointsForObjectLambdaRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline ListAccessPointsForObjectLambdaRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsForObjectLambdaRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsForObjectLambdaRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsForObjectLambdaRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of access points that you want to include in the list. The
     * response may contain fewer access points but will never contain more. If there
     * are more than this number of access points, then the response will include a
     * continuation token in the <code>NextToken</code> field that you can use to
     * retrieve the next page of access points.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of access points that you want to include in the list. The
     * response may contain fewer access points but will never contain more. If there
     * are more than this number of access points, then the response will include a
     * continuation token in the <code>NextToken</code> field that you can use to
     * retrieve the next page of access points.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of access points that you want to include in the list. The
     * response may contain fewer access points but will never contain more. If there
     * are more than this number of access points, then the response will include a
     * continuation token in the <code>NextToken</code> field that you can use to
     * retrieve the next page of access points.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of access points that you want to include in the list. The
     * response may contain fewer access points but will never contain more. If there
     * are more than this number of access points, then the response will include a
     * continuation token in the <code>NextToken</code> field that you can use to
     * retrieve the next page of access points.</p>
     */
    inline ListAccessPointsForObjectLambdaRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
