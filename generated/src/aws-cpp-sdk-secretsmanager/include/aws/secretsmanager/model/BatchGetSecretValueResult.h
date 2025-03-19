/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/SecretValueEntry.h>
#include <aws/secretsmanager/model/APIErrorType.h>
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
  class BatchGetSecretValueResult
  {
  public:
    AWS_SECRETSMANAGER_API BatchGetSecretValueResult() = default;
    AWS_SECRETSMANAGER_API BatchGetSecretValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API BatchGetSecretValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of secret values.</p>
     */
    inline const Aws::Vector<SecretValueEntry>& GetSecretValues() const { return m_secretValues; }
    template<typename SecretValuesT = Aws::Vector<SecretValueEntry>>
    void SetSecretValues(SecretValuesT&& value) { m_secretValuesHasBeenSet = true; m_secretValues = std::forward<SecretValuesT>(value); }
    template<typename SecretValuesT = Aws::Vector<SecretValueEntry>>
    BatchGetSecretValueResult& WithSecretValues(SecretValuesT&& value) { SetSecretValues(std::forward<SecretValuesT>(value)); return *this;}
    template<typename SecretValuesT = SecretValueEntry>
    BatchGetSecretValueResult& AddSecretValues(SecretValuesT&& value) { m_secretValuesHasBeenSet = true; m_secretValues.emplace_back(std::forward<SecretValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>BatchGetSecretValue</code> again with
     * this value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchGetSecretValueResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors Secrets Manager encountered while attempting to retrieve
     * individual secrets.</p>
     */
    inline const Aws::Vector<APIErrorType>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<APIErrorType>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<APIErrorType>>
    BatchGetSecretValueResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = APIErrorType>
    BatchGetSecretValueResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetSecretValueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecretValueEntry> m_secretValues;
    bool m_secretValuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<APIErrorType> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
