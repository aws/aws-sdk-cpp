/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/SecretListEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{
  class ListSecretsResult
  {
  public:
    AWS_SECRETSMANAGER_API ListSecretsResult() = default;
    AWS_SECRETSMANAGER_API ListSecretsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API ListSecretsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline const Aws::Vector<SecretListEntry>& GetSecretList() const { return m_secretList; }
    template<typename SecretListT = Aws::Vector<SecretListEntry>>
    void SetSecretList(SecretListT&& value) { m_secretListHasBeenSet = true; m_secretList = std::forward<SecretListT>(value); }
    template<typename SecretListT = Aws::Vector<SecretListEntry>>
    ListSecretsResult& WithSecretList(SecretListT&& value) { SetSecretList(std::forward<SecretListT>(value)); return *this;}
    template<typename SecretListT = SecretListEntry>
    ListSecretsResult& AddSecretList(SecretListT&& value) { m_secretListHasBeenSet = true; m_secretList.emplace_back(std::forward<SecretListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSecretsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecretsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecretListEntry> m_secretList;
    bool m_secretListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
