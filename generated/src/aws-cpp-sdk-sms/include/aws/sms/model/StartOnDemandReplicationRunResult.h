/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
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
namespace SMS
{
namespace Model
{
  class StartOnDemandReplicationRunResult
  {
  public:
    AWS_SMS_API StartOnDemandReplicationRunResult();
    AWS_SMS_API StartOnDemandReplicationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API StartOnDemandReplicationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the replication run.</p>
     */
    inline const Aws::String& GetReplicationRunId() const{ return m_replicationRunId; }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline void SetReplicationRunId(const Aws::String& value) { m_replicationRunId = value; }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline void SetReplicationRunId(Aws::String&& value) { m_replicationRunId = std::move(value); }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline void SetReplicationRunId(const char* value) { m_replicationRunId.assign(value); }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline StartOnDemandReplicationRunResult& WithReplicationRunId(const Aws::String& value) { SetReplicationRunId(value); return *this;}

    /**
     * <p>The ID of the replication run.</p>
     */
    inline StartOnDemandReplicationRunResult& WithReplicationRunId(Aws::String&& value) { SetReplicationRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the replication run.</p>
     */
    inline StartOnDemandReplicationRunResult& WithReplicationRunId(const char* value) { SetReplicationRunId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartOnDemandReplicationRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartOnDemandReplicationRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartOnDemandReplicationRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_replicationRunId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
