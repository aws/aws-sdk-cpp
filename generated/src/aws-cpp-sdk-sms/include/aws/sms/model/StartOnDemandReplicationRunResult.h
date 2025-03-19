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
    AWS_SMS_API StartOnDemandReplicationRunResult() = default;
    AWS_SMS_API StartOnDemandReplicationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API StartOnDemandReplicationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the replication run.</p>
     */
    inline const Aws::String& GetReplicationRunId() const { return m_replicationRunId; }
    template<typename ReplicationRunIdT = Aws::String>
    void SetReplicationRunId(ReplicationRunIdT&& value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId = std::forward<ReplicationRunIdT>(value); }
    template<typename ReplicationRunIdT = Aws::String>
    StartOnDemandReplicationRunResult& WithReplicationRunId(ReplicationRunIdT&& value) { SetReplicationRunId(std::forward<ReplicationRunIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartOnDemandReplicationRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationRunId;
    bool m_replicationRunIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
