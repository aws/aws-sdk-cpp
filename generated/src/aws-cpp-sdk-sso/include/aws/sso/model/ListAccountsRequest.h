/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/SSORequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SSO
{
namespace Model
{

  /**
   */
  class ListAccountsRequest : public SSORequest
  {
  public:
    AWS_SSO_API ListAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccounts"; }

    AWS_SSO_API Aws::String SerializePayload() const override;

    AWS_SSO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_SSO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline ListAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline ListAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) When requesting subsequent pages, this is the page token from the
     * previous response output.</p>
     */
    inline ListAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>This is the number of items clients can request per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>This is the number of items clients can request per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>This is the number of items clients can request per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>This is the number of items clients can request per page.</p>
     */
    inline ListAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline ListAccountsRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline ListAccountsRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline ListAccountsRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
