/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class ListSecretVersionIdsRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API ListSecretVersionIdsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecretVersionIds"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline ListSecretVersionIdsRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline ListSecretVersionIdsRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the secret whose versions you want to list.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline ListSecretVersionIdsRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The number of results to include in the response.</p> <p>If there are more
     * results available, in the response, Secrets Manager includes
     * <code>NextToken</code>. To get the next results, call
     * <code>ListSecretVersionIds</code> again with the value from
     * <code>NextToken</code>. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of results to include in the response.</p> <p>If there are more
     * results available, in the response, Secrets Manager includes
     * <code>NextToken</code>. To get the next results, call
     * <code>ListSecretVersionIds</code> again with the value from
     * <code>NextToken</code>. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of results to include in the response.</p> <p>If there are more
     * results available, in the response, Secrets Manager includes
     * <code>NextToken</code>. To get the next results, call
     * <code>ListSecretVersionIds</code> again with the value from
     * <code>NextToken</code>. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of results to include in the response.</p> <p>If there are more
     * results available, in the response, Secrets Manager includes
     * <code>NextToken</code>. To get the next results, call
     * <code>ListSecretVersionIds</code> again with the value from
     * <code>NextToken</code>. </p>
     */
    inline ListSecretVersionIdsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline ListSecretVersionIdsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline ListSecretVersionIdsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecretVersionIds</code> again with this value.</p>
     */
    inline ListSecretVersionIdsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies whether to include versions of secrets that don't have any staging
     * labels attached to them. Versions without staging labels are considered
     * deprecated and are subject to deletion by Secrets Manager. By default, versions
     * without staging labels aren't included.</p>
     */
    inline bool GetIncludeDeprecated() const{ return m_includeDeprecated; }

    /**
     * <p>Specifies whether to include versions of secrets that don't have any staging
     * labels attached to them. Versions without staging labels are considered
     * deprecated and are subject to deletion by Secrets Manager. By default, versions
     * without staging labels aren't included.</p>
     */
    inline bool IncludeDeprecatedHasBeenSet() const { return m_includeDeprecatedHasBeenSet; }

    /**
     * <p>Specifies whether to include versions of secrets that don't have any staging
     * labels attached to them. Versions without staging labels are considered
     * deprecated and are subject to deletion by Secrets Manager. By default, versions
     * without staging labels aren't included.</p>
     */
    inline void SetIncludeDeprecated(bool value) { m_includeDeprecatedHasBeenSet = true; m_includeDeprecated = value; }

    /**
     * <p>Specifies whether to include versions of secrets that don't have any staging
     * labels attached to them. Versions without staging labels are considered
     * deprecated and are subject to deletion by Secrets Manager. By default, versions
     * without staging labels aren't included.</p>
     */
    inline ListSecretVersionIdsRequest& WithIncludeDeprecated(bool value) { SetIncludeDeprecated(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_includeDeprecated;
    bool m_includeDeprecatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
