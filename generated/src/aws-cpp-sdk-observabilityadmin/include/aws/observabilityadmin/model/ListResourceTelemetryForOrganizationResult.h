/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/TelemetryConfiguration.h>
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
  class ListResourceTelemetryForOrganizationResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryForOrganizationResult();
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of telemetry configurations for AWS resources supported by telemetry
     * config in the organization. </p>
     */
    inline const Aws::Vector<TelemetryConfiguration>& GetTelemetryConfigurations() const{ return m_telemetryConfigurations; }
    inline void SetTelemetryConfigurations(const Aws::Vector<TelemetryConfiguration>& value) { m_telemetryConfigurations = value; }
    inline void SetTelemetryConfigurations(Aws::Vector<TelemetryConfiguration>&& value) { m_telemetryConfigurations = std::move(value); }
    inline ListResourceTelemetryForOrganizationResult& WithTelemetryConfigurations(const Aws::Vector<TelemetryConfiguration>& value) { SetTelemetryConfigurations(value); return *this;}
    inline ListResourceTelemetryForOrganizationResult& WithTelemetryConfigurations(Aws::Vector<TelemetryConfiguration>&& value) { SetTelemetryConfigurations(std::move(value)); return *this;}
    inline ListResourceTelemetryForOrganizationResult& AddTelemetryConfigurations(const TelemetryConfiguration& value) { m_telemetryConfigurations.push_back(value); return *this; }
    inline ListResourceTelemetryForOrganizationResult& AddTelemetryConfigurations(TelemetryConfiguration&& value) { m_telemetryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token for the next set of items to return. A previous call provides this
     * token. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceTelemetryForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceTelemetryForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceTelemetryForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceTelemetryForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceTelemetryForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceTelemetryForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TelemetryConfiguration> m_telemetryConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
