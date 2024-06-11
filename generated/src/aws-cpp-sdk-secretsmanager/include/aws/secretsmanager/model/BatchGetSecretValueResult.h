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
    AWS_SECRETSMANAGER_API BatchGetSecretValueResult();
    AWS_SECRETSMANAGER_API BatchGetSecretValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API BatchGetSecretValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of secret values.</p>
     */
    inline const Aws::Vector<SecretValueEntry>& GetSecretValues() const{ return m_secretValues; }
    inline void SetSecretValues(const Aws::Vector<SecretValueEntry>& value) { m_secretValues = value; }
    inline void SetSecretValues(Aws::Vector<SecretValueEntry>&& value) { m_secretValues = std::move(value); }
    inline BatchGetSecretValueResult& WithSecretValues(const Aws::Vector<SecretValueEntry>& value) { SetSecretValues(value); return *this;}
    inline BatchGetSecretValueResult& WithSecretValues(Aws::Vector<SecretValueEntry>&& value) { SetSecretValues(std::move(value)); return *this;}
    inline BatchGetSecretValueResult& AddSecretValues(const SecretValueEntry& value) { m_secretValues.push_back(value); return *this; }
    inline BatchGetSecretValueResult& AddSecretValues(SecretValueEntry&& value) { m_secretValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>BatchGetSecretValue</code> again with
     * this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline BatchGetSecretValueResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchGetSecretValueResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchGetSecretValueResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors Secrets Manager encountered while attempting to retrieve
     * individual secrets.</p>
     */
    inline const Aws::Vector<APIErrorType>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<APIErrorType>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<APIErrorType>&& value) { m_errors = std::move(value); }
    inline BatchGetSecretValueResult& WithErrors(const Aws::Vector<APIErrorType>& value) { SetErrors(value); return *this;}
    inline BatchGetSecretValueResult& WithErrors(Aws::Vector<APIErrorType>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetSecretValueResult& AddErrors(const APIErrorType& value) { m_errors.push_back(value); return *this; }
    inline BatchGetSecretValueResult& AddErrors(APIErrorType&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetSecretValueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetSecretValueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetSecretValueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SecretValueEntry> m_secretValues;

    Aws::String m_nextToken;

    Aws::Vector<APIErrorType> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
