/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/SecretVersionsListEntry.h>
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
  class ListSecretVersionIdsResult
  {
  public:
    AWS_SECRETSMANAGER_API ListSecretVersionIdsResult();
    AWS_SECRETSMANAGER_API ListSecretVersionIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API ListSecretVersionIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline const Aws::Vector<SecretVersionsListEntry>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<SecretVersionsListEntry>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<SecretVersionsListEntry>&& value) { m_versions = std::move(value); }
    inline ListSecretVersionIdsResult& WithVersions(const Aws::Vector<SecretVersionsListEntry>& value) { SetVersions(value); return *this;}
    inline ListSecretVersionIdsResult& WithVersions(Aws::Vector<SecretVersionsListEntry>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListSecretVersionIdsResult& AddVersions(const SecretVersionsListEntry& value) { m_versions.push_back(value); return *this; }
    inline ListSecretVersionIdsResult& AddVersions(SecretVersionsListEntry&& value) { m_versions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSecretVersionIdsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSecretVersionIdsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSecretVersionIdsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline ListSecretVersionIdsResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline ListSecretVersionIdsResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline ListSecretVersionIdsResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline ListSecretVersionIdsResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListSecretVersionIdsResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListSecretVersionIdsResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSecretVersionIdsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSecretVersionIdsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSecretVersionIdsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SecretVersionsListEntry> m_versions;

    Aws::String m_nextToken;

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
