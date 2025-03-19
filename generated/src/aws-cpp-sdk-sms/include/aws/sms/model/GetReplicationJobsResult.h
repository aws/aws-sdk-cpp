/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ReplicationJob.h>
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
  class GetReplicationJobsResult
  {
  public:
    AWS_SMS_API GetReplicationJobsResult() = default;
    AWS_SMS_API GetReplicationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetReplicationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the replication jobs.</p>
     */
    inline const Aws::Vector<ReplicationJob>& GetReplicationJobList() const { return m_replicationJobList; }
    template<typename ReplicationJobListT = Aws::Vector<ReplicationJob>>
    void SetReplicationJobList(ReplicationJobListT&& value) { m_replicationJobListHasBeenSet = true; m_replicationJobList = std::forward<ReplicationJobListT>(value); }
    template<typename ReplicationJobListT = Aws::Vector<ReplicationJob>>
    GetReplicationJobsResult& WithReplicationJobList(ReplicationJobListT&& value) { SetReplicationJobList(std::forward<ReplicationJobListT>(value)); return *this;}
    template<typename ReplicationJobListT = ReplicationJob>
    GetReplicationJobsResult& AddReplicationJobList(ReplicationJobListT&& value) { m_replicationJobListHasBeenSet = true; m_replicationJobList.emplace_back(std::forward<ReplicationJobListT>(value)); return *this; }
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
    GetReplicationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReplicationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReplicationJob> m_replicationJobList;
    bool m_replicationJobListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
