/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/Status.h>
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
namespace ObservabilityAdmin
{
namespace Model
{
  class GetTelemetryEvaluationStatusForOrganizationResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API GetTelemetryEvaluationStatusForOrganizationResult();
    AWS_OBSERVABILITYADMIN_API GetTelemetryEvaluationStatusForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API GetTelemetryEvaluationStatusForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The onboarding status of the telemetry config feature for the organization.
     * </p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This field describes the reason for the failure status. The field will only
     * be populated if <code>Status</code> is <code>FAILED_START</code> or
     * <code>FAILED_STOP</code>. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTelemetryEvaluationStatusForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Status m_status;

    Aws::String m_failureReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
