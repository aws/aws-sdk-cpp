/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/ReplicationSet.h>
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


    /**
     * <p>Details of the replication set.</p>
     */
    inline const ReplicationSet& GetReplicationSet() const{ return m_replicationSet; }

    /**
     * <p>Details of the replication set.</p>
     */
    inline void SetReplicationSet(const ReplicationSet& value) { m_replicationSet = value; }

    /**
     * <p>Details of the replication set.</p>
     */
    inline void SetReplicationSet(ReplicationSet&& value) { m_replicationSet = std::move(value); }

    /**
     * <p>Details of the replication set.</p>
     */
    inline GetReplicationSetResult& WithReplicationSet(const ReplicationSet& value) { SetReplicationSet(value); return *this;}

    /**
     * <p>Details of the replication set.</p>
     */
    inline GetReplicationSetResult& WithReplicationSet(ReplicationSet&& value) { SetReplicationSet(std::move(value)); return *this;}

  private:

    ReplicationSet m_replicationSet;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
