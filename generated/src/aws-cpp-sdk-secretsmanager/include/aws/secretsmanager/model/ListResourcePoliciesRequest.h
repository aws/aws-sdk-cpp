/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecretsManager {
namespace Model {

/**
 */
class ListResourcePoliciesRequest : public SecretsManagerRequest {
 public:
  AWS_SECRETSMANAGER_API ListResourcePoliciesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListResourcePolicies"; }

  AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

  AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
   * specify a complete ARN rather than a partial ARN. See <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
   * a secret from a partial ARN</a>.</p>
   */
  inline const Aws::String& GetSecretId() const { return m_secretId; }
  inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
  template <typename SecretIdT = Aws::String>
  void SetSecretId(SecretIdT&& value) {
    m_secretIdHasBeenSet = true;
    m_secretId = std::forward<SecretIdT>(value);
  }
  template <typename SecretIdT = Aws::String>
  ListResourcePoliciesRequest& WithSecretId(SecretIdT&& value) {
    SetSecretId(std::forward<SecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of results to include in the response. If you don't specify this
   * value, the service returns up to 100 results.</p> <p>If there are more results
   * available, in the response, Secrets Manager includes <code>NextToken</code>. To
   * get the next results, call <code>ListResourcePolicies</code> again with the
   * value from <code>NextToken</code>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListResourcePoliciesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token that indicates where the output should continue from, if a previous
   * call did not show all results. To get the next results, call
   * <code>ListResourcePolicies</code> again with this value.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourcePoliciesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_secretIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
