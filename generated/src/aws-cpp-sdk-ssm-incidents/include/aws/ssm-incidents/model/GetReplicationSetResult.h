﻿/**
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
    AWS_SSMINCIDENTS_API GetReplicationSetResult();
    AWS_SSMINCIDENTS_API GetReplicationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetReplicationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the replication set.</p>
     */
    inline const ReplicationSet& GetReplicationSet() const{ return m_replicationSet; }
    inline void SetReplicationSet(const ReplicationSet& value) { m_replicationSet = value; }
    inline void SetReplicationSet(ReplicationSet&& value) { m_replicationSet = std::move(value); }
    inline GetReplicationSetResult& WithReplicationSet(const ReplicationSet& value) { SetReplicationSet(value); return *this;}
    inline GetReplicationSetResult& WithReplicationSet(ReplicationSet&& value) { SetReplicationSet(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReplicationSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReplicationSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReplicationSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReplicationSet m_replicationSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
