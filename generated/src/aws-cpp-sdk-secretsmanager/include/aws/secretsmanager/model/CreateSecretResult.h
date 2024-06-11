/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/ReplicationStatusType.h>
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
  class CreateSecretResult
  {
  public:
    AWS_SECRETSMANAGER_API CreateSecretResult();
    AWS_SECRETSMANAGER_API CreateSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API CreateSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new secret. The ARN includes the name of the secret followed
     * by six random characters. This ensures that if you create a new secret with the
     * same name as a deleted secret, then users with access to the old secret don't
     * get access to the new secret because the ARNs are different.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline CreateSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline CreateSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline CreateSecretResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSecretResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier associated with the version of the new secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline CreateSecretResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline CreateSecretResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline CreateSecretResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the replicas of this secret and their status:</p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const{ return m_replicationStatus; }
    inline void SetReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { m_replicationStatus = value; }
    inline void SetReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { m_replicationStatus = std::move(value); }
    inline CreateSecretResult& WithReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { SetReplicationStatus(value); return *this;}
    inline CreateSecretResult& WithReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { SetReplicationStatus(std::move(value)); return *this;}
    inline CreateSecretResult& AddReplicationStatus(const ReplicationStatusType& value) { m_replicationStatus.push_back(value); return *this; }
    inline CreateSecretResult& AddReplicationStatus(ReplicationStatusType&& value) { m_replicationStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSecretResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSecretResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSecretResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
