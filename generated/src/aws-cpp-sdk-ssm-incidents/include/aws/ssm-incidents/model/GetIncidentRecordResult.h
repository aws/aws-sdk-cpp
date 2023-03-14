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
    AWS_SSMINCIDENTS_API GetIncidentRecordResult();
    AWS_SSMINCIDENTS_API GetIncidentRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetIncidentRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details the structure of the incident record.</p>
     */
    inline const IncidentRecord& GetIncidentRecord() const{ return m_incidentRecord; }

    /**
     * <p>Details the structure of the incident record.</p>
     */
    inline void SetIncidentRecord(const IncidentRecord& value) { m_incidentRecord = value; }

    /**
     * <p>Details the structure of the incident record.</p>
     */
    inline void SetIncidentRecord(IncidentRecord&& value) { m_incidentRecord = std::move(value); }

    /**
     * <p>Details the structure of the incident record.</p>
     */
    inline GetIncidentRecordResult& WithIncidentRecord(const IncidentRecord& value) { SetIncidentRecord(value); return *this;}

    /**
     * <p>Details the structure of the incident record.</p>
     */
    inline GetIncidentRecordResult& WithIncidentRecord(IncidentRecord&& value) { SetIncidentRecord(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIncidentRecordResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIncidentRecordResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIncidentRecordResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    IncidentRecord m_incidentRecord;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
