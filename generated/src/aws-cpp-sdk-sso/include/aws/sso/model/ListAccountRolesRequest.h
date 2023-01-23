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
  class ListAccountRolesRequest : public SSORequest
  {
  public:
    AWS_SSO_API ListAccountRolesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountRoles"; }

    AWS_SSO_API Aws::String SerializePayload() const override;

    AWS_SSO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_SSO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline ListAccountRolesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline ListAccountRolesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The page token from the previous response output when you request subsequent
     * pages.</p>
     */
    inline ListAccountRolesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of items that clients can request per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of items that clients can request per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of items that clients can request per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of items that clients can request per page.</p>
     */
    inline ListAccountRolesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListAccountRolesRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline ListAccountRolesRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline ListAccountRolesRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline ListAccountRolesRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline ListAccountRolesRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline ListAccountRolesRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
