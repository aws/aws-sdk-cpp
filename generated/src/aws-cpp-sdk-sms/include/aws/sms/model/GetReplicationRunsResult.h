/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/ReplicationJob.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ReplicationRun.h>
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
namespace SMS
{
namespace Model
{
  class GetReplicationRunsResult
  {
  public:
    AWS_SMS_API GetReplicationRunsResult() = default;
    AWS_SMS_API GetReplicationRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetReplicationRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the replication job.</p>
     */
    inline const ReplicationJob& GetReplicationJob() const { return m_replicationJob; }
    template<typename ReplicationJobT = ReplicationJob>
    void SetReplicationJob(ReplicationJobT&& value) { m_replicationJobHasBeenSet = true; m_replicationJob = std::forward<ReplicationJobT>(value); }
    template<typename ReplicationJobT = ReplicationJob>
    GetReplicationRunsResult& WithReplicationJob(ReplicationJobT&& value) { SetReplicationJob(std::forward<ReplicationJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the replication runs.</p>
     */
    inline const Aws::Vector<ReplicationRun>& GetReplicationRunList() const { return m_replicationRunList; }
    template<typename ReplicationRunListT = Aws::Vector<ReplicationRun>>
    void SetReplicationRunList(ReplicationRunListT&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = std::forward<ReplicationRunListT>(value); }
    template<typename ReplicationRunListT = Aws::Vector<ReplicationRun>>
    GetReplicationRunsResult& WithReplicationRunList(ReplicationRunListT&& value) { SetReplicationRunList(std::forward<ReplicationRunListT>(value)); return *this;}
    template<typename ReplicationRunListT = ReplicationRun>
    GetReplicationRunsResult& AddReplicationRunList(ReplicationRunListT&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList.emplace_back(std::forward<ReplicationRunListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetReplicationRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReplicationRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationJob m_replicationJob;
    bool m_replicationJobHasBeenSet = false;

    Aws::Vector<ReplicationRun> m_replicationRunList;
    bool m_replicationRunListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
