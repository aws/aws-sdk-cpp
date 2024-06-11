/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgeOutputConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DeviceStats.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AgentVersion.h>
#include <aws/sagemaker/model/EdgeModelStat.h>
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
namespace SageMaker
{
namespace Model
{
  class GetDeviceFleetReportResult
  {
  public:
    AWS_SAGEMAKER_API GetDeviceFleetReportResult();
    AWS_SAGEMAKER_API GetDeviceFleetReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetDeviceFleetReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceFleetArn() const{ return m_deviceFleetArn; }
    inline void SetDeviceFleetArn(const Aws::String& value) { m_deviceFleetArn = value; }
    inline void SetDeviceFleetArn(Aws::String&& value) { m_deviceFleetArn = std::move(value); }
    inline void SetDeviceFleetArn(const char* value) { m_deviceFleetArn.assign(value); }
    inline GetDeviceFleetReportResult& WithDeviceFleetArn(const Aws::String& value) { SetDeviceFleetArn(value); return *this;}
    inline GetDeviceFleetReportResult& WithDeviceFleetArn(Aws::String&& value) { SetDeviceFleetArn(std::move(value)); return *this;}
    inline GetDeviceFleetReportResult& WithDeviceFleetArn(const char* value) { SetDeviceFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetName.assign(value); }
    inline GetDeviceFleetReportResult& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline GetDeviceFleetReportResult& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline GetDeviceFleetReportResult& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const EdgeOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(EdgeOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline GetDeviceFleetReportResult& WithOutputConfig(const EdgeOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline GetDeviceFleetReportResult& WithOutputConfig(EdgeOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDeviceFleetReportResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDeviceFleetReportResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDeviceFleetReportResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the report was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetReportGenerated() const{ return m_reportGenerated; }
    inline void SetReportGenerated(const Aws::Utils::DateTime& value) { m_reportGenerated = value; }
    inline void SetReportGenerated(Aws::Utils::DateTime&& value) { m_reportGenerated = std::move(value); }
    inline GetDeviceFleetReportResult& WithReportGenerated(const Aws::Utils::DateTime& value) { SetReportGenerated(value); return *this;}
    inline GetDeviceFleetReportResult& WithReportGenerated(Aws::Utils::DateTime&& value) { SetReportGenerated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of devices.</p>
     */
    inline const DeviceStats& GetDeviceStats() const{ return m_deviceStats; }
    inline void SetDeviceStats(const DeviceStats& value) { m_deviceStats = value; }
    inline void SetDeviceStats(DeviceStats&& value) { m_deviceStats = std::move(value); }
    inline GetDeviceFleetReportResult& WithDeviceStats(const DeviceStats& value) { SetDeviceStats(value); return *this;}
    inline GetDeviceFleetReportResult& WithDeviceStats(DeviceStats&& value) { SetDeviceStats(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline const Aws::Vector<AgentVersion>& GetAgentVersions() const{ return m_agentVersions; }
    inline void SetAgentVersions(const Aws::Vector<AgentVersion>& value) { m_agentVersions = value; }
    inline void SetAgentVersions(Aws::Vector<AgentVersion>&& value) { m_agentVersions = std::move(value); }
    inline GetDeviceFleetReportResult& WithAgentVersions(const Aws::Vector<AgentVersion>& value) { SetAgentVersions(value); return *this;}
    inline GetDeviceFleetReportResult& WithAgentVersions(Aws::Vector<AgentVersion>&& value) { SetAgentVersions(std::move(value)); return *this;}
    inline GetDeviceFleetReportResult& AddAgentVersions(const AgentVersion& value) { m_agentVersions.push_back(value); return *this; }
    inline GetDeviceFleetReportResult& AddAgentVersions(AgentVersion&& value) { m_agentVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of model on device.</p>
     */
    inline const Aws::Vector<EdgeModelStat>& GetModelStats() const{ return m_modelStats; }
    inline void SetModelStats(const Aws::Vector<EdgeModelStat>& value) { m_modelStats = value; }
    inline void SetModelStats(Aws::Vector<EdgeModelStat>&& value) { m_modelStats = std::move(value); }
    inline GetDeviceFleetReportResult& WithModelStats(const Aws::Vector<EdgeModelStat>& value) { SetModelStats(value); return *this;}
    inline GetDeviceFleetReportResult& WithModelStats(Aws::Vector<EdgeModelStat>&& value) { SetModelStats(std::move(value)); return *this;}
    inline GetDeviceFleetReportResult& AddModelStats(const EdgeModelStat& value) { m_modelStats.push_back(value); return *this; }
    inline GetDeviceFleetReportResult& AddModelStats(EdgeModelStat&& value) { m_modelStats.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeviceFleetReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeviceFleetReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeviceFleetReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceFleetArn;

    Aws::String m_deviceFleetName;

    EdgeOutputConfig m_outputConfig;

    Aws::String m_description;

    Aws::Utils::DateTime m_reportGenerated;

    DeviceStats m_deviceStats;

    Aws::Vector<AgentVersion> m_agentVersions;

    Aws::Vector<EdgeModelStat> m_modelStats;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
