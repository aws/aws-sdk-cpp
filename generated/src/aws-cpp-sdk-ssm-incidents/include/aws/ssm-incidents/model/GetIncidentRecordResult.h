/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/IncidentRecord.h>
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
  class GetIncidentRecordResult
  {
  public:
    AWS_SSMINCIDENTS_API GetIncidentRecordResult() = default;
    AWS_SSMINCIDENTS_API GetIncidentRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetIncidentRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details the structure of the incident record.</p>
     */
    inline const IncidentRecord& GetIncidentRecord() const { return m_incidentRecord; }
    template<typename IncidentRecordT = IncidentRecord>
    void SetIncidentRecord(IncidentRecordT&& value) { m_incidentRecordHasBeenSet = true; m_incidentRecord = std::forward<IncidentRecordT>(value); }
    template<typename IncidentRecordT = IncidentRecord>
    GetIncidentRecordResult& WithIncidentRecord(IncidentRecordT&& value) { SetIncidentRecord(std::forward<IncidentRecordT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIncidentRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IncidentRecord m_incidentRecord;
    bool m_incidentRecordHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
