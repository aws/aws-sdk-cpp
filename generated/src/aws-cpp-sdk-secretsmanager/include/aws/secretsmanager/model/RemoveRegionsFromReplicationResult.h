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
  class RemoveRegionsFromReplicationResult
  {
  public:
    AWS_SECRETSMANAGER_API RemoveRegionsFromReplicationResult() = default;
    AWS_SECRETSMANAGER_API RemoveRegionsFromReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API RemoveRegionsFromReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the primary secret.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    RemoveRegionsFromReplicationResult& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of replicas for this secret after you remove Regions.</p>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const { return m_replicationStatus; }
    template<typename ReplicationStatusT = Aws::Vector<ReplicationStatusType>>
    void SetReplicationStatus(ReplicationStatusT&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = std::forward<ReplicationStatusT>(value); }
    template<typename ReplicationStatusT = Aws::Vector<ReplicationStatusType>>
    RemoveRegionsFromReplicationResult& WithReplicationStatus(ReplicationStatusT&& value) { SetReplicationStatus(std::forward<ReplicationStatusT>(value)); return *this;}
    template<typename ReplicationStatusT = ReplicationStatusType>
    RemoveRegionsFromReplicationResult& AddReplicationStatus(ReplicationStatusT&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus.emplace_back(std::forward<ReplicationStatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RemoveRegionsFromReplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
