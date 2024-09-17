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
  class ReplicateSecretToRegionsResult
  {
  public:
    AWS_SECRETSMANAGER_API ReplicateSecretToRegionsResult();
    AWS_SECRETSMANAGER_API ReplicateSecretToRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API ReplicateSecretToRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the primary secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline ReplicateSecretToRegionsResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline ReplicateSecretToRegionsResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline ReplicateSecretToRegionsResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of replication.</p>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const{ return m_replicationStatus; }
    inline void SetReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { m_replicationStatus = value; }
    inline void SetReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { m_replicationStatus = std::move(value); }
    inline ReplicateSecretToRegionsResult& WithReplicationStatus(const Aws::Vector<ReplicationStatusType>& value) { SetReplicationStatus(value); return *this;}
    inline ReplicateSecretToRegionsResult& WithReplicationStatus(Aws::Vector<ReplicationStatusType>&& value) { SetReplicationStatus(std::move(value)); return *this;}
    inline ReplicateSecretToRegionsResult& AddReplicationStatus(const ReplicationStatusType& value) { m_replicationStatus.push_back(value); return *this; }
    inline ReplicateSecretToRegionsResult& AddReplicationStatus(ReplicationStatusType&& value) { m_replicationStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ReplicateSecretToRegionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReplicateSecretToRegionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReplicateSecretToRegionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aRN;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
