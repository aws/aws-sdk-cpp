/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/ReplicationSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMIncidents
{
namespace Model
{
  class GetReplicationSetResult
  {
  public:
    AWS_SSMINCIDENTS_API GetReplicationSetResult() = default;
    AWS_SSMINCIDENTS_API GetReplicationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetReplicationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the replication set.</p>
     */
    inline const ReplicationSet& GetReplicationSet() const { return m_replicationSet; }
    template<typename ReplicationSetT = ReplicationSet>
    void SetReplicationSet(ReplicationSetT&& value) { m_replicationSetHasBeenSet = true; m_replicationSet = std::forward<ReplicationSetT>(value); }
    template<typename ReplicationSetT = ReplicationSet>
    GetReplicationSetResult& WithReplicationSet(ReplicationSetT&& value) { SetReplicationSet(std::forward<ReplicationSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReplicationSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationSet m_replicationSet;
    bool m_replicationSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
