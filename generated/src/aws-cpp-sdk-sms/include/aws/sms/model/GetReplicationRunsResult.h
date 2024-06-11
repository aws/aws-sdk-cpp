﻿/**
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
    AWS_SMS_API GetReplicationRunsResult();
    AWS_SMS_API GetReplicationRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetReplicationRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the replication job.</p>
     */
    inline const ReplicationJob& GetReplicationJob() const{ return m_replicationJob; }
    inline void SetReplicationJob(const ReplicationJob& value) { m_replicationJob = value; }
    inline void SetReplicationJob(ReplicationJob&& value) { m_replicationJob = std::move(value); }
    inline GetReplicationRunsResult& WithReplicationJob(const ReplicationJob& value) { SetReplicationJob(value); return *this;}
    inline GetReplicationRunsResult& WithReplicationJob(ReplicationJob&& value) { SetReplicationJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the replication runs.</p>
     */
    inline const Aws::Vector<ReplicationRun>& GetReplicationRunList() const{ return m_replicationRunList; }
    inline void SetReplicationRunList(const Aws::Vector<ReplicationRun>& value) { m_replicationRunList = value; }
    inline void SetReplicationRunList(Aws::Vector<ReplicationRun>&& value) { m_replicationRunList = std::move(value); }
    inline GetReplicationRunsResult& WithReplicationRunList(const Aws::Vector<ReplicationRun>& value) { SetReplicationRunList(value); return *this;}
    inline GetReplicationRunsResult& WithReplicationRunList(Aws::Vector<ReplicationRun>&& value) { SetReplicationRunList(std::move(value)); return *this;}
    inline GetReplicationRunsResult& AddReplicationRunList(const ReplicationRun& value) { m_replicationRunList.push_back(value); return *this; }
    inline GetReplicationRunsResult& AddReplicationRunList(ReplicationRun&& value) { m_replicationRunList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetReplicationRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetReplicationRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetReplicationRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReplicationRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReplicationRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReplicationRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReplicationJob m_replicationJob;

    Aws::Vector<ReplicationRun> m_replicationRunList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
