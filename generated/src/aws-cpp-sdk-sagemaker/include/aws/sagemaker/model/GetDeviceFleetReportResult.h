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


    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceFleetArn() const{ return m_deviceFleetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceFleetArn(const Aws::String& value) { m_deviceFleetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceFleetArn(Aws::String&& value) { m_deviceFleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceFleetArn(const char* value) { m_deviceFleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceFleetArn(const Aws::String& value) { SetDeviceFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceFleetArn(Aws::String&& value) { SetDeviceFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceFleetArn(const char* value) { SetDeviceFleetArn(value); return *this;}


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetName = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetName = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetName.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}


    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline void SetOutputConfig(const EdgeOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline void SetOutputConfig(EdgeOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithOutputConfig(const EdgeOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithOutputConfig(EdgeOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>Description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Description of the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Timestamp of when the report was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetReportGenerated() const{ return m_reportGenerated; }

    /**
     * <p>Timestamp of when the report was generated.</p>
     */
    inline void SetReportGenerated(const Aws::Utils::DateTime& value) { m_reportGenerated = value; }

    /**
     * <p>Timestamp of when the report was generated.</p>
     */
    inline void SetReportGenerated(Aws::Utils::DateTime&& value) { m_reportGenerated = std::move(value); }

    /**
     * <p>Timestamp of when the report was generated.</p>
     */
    inline GetDeviceFleetReportResult& WithReportGenerated(const Aws::Utils::DateTime& value) { SetReportGenerated(value); return *this;}

    /**
     * <p>Timestamp of when the report was generated.</p>
     */
    inline GetDeviceFleetReportResult& WithReportGenerated(Aws::Utils::DateTime&& value) { SetReportGenerated(std::move(value)); return *this;}


    /**
     * <p>Status of devices.</p>
     */
    inline const DeviceStats& GetDeviceStats() const{ return m_deviceStats; }

    /**
     * <p>Status of devices.</p>
     */
    inline void SetDeviceStats(const DeviceStats& value) { m_deviceStats = value; }

    /**
     * <p>Status of devices.</p>
     */
    inline void SetDeviceStats(DeviceStats&& value) { m_deviceStats = std::move(value); }

    /**
     * <p>Status of devices.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceStats(const DeviceStats& value) { SetDeviceStats(value); return *this;}

    /**
     * <p>Status of devices.</p>
     */
    inline GetDeviceFleetReportResult& WithDeviceStats(DeviceStats&& value) { SetDeviceStats(std::move(value)); return *this;}


    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline const Aws::Vector<AgentVersion>& GetAgentVersions() const{ return m_agentVersions; }

    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline void SetAgentVersions(const Aws::Vector<AgentVersion>& value) { m_agentVersions = value; }

    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline void SetAgentVersions(Aws::Vector<AgentVersion>&& value) { m_agentVersions = std::move(value); }

    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithAgentVersions(const Aws::Vector<AgentVersion>& value) { SetAgentVersions(value); return *this;}

    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline GetDeviceFleetReportResult& WithAgentVersions(Aws::Vector<AgentVersion>&& value) { SetAgentVersions(std::move(value)); return *this;}

    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline GetDeviceFleetReportResult& AddAgentVersions(const AgentVersion& value) { m_agentVersions.push_back(value); return *this; }

    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline GetDeviceFleetReportResult& AddAgentVersions(AgentVersion&& value) { m_agentVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>Status of model on device.</p>
     */
    inline const Aws::Vector<EdgeModelStat>& GetModelStats() const{ return m_modelStats; }

    /**
     * <p>Status of model on device.</p>
     */
    inline void SetModelStats(const Aws::Vector<EdgeModelStat>& value) { m_modelStats = value; }

    /**
     * <p>Status of model on device.</p>
     */
    inline void SetModelStats(Aws::Vector<EdgeModelStat>&& value) { m_modelStats = std::move(value); }

    /**
     * <p>Status of model on device.</p>
     */
    inline GetDeviceFleetReportResult& WithModelStats(const Aws::Vector<EdgeModelStat>& value) { SetModelStats(value); return *this;}

    /**
     * <p>Status of model on device.</p>
     */
    inline GetDeviceFleetReportResult& WithModelStats(Aws::Vector<EdgeModelStat>&& value) { SetModelStats(std::move(value)); return *this;}

    /**
     * <p>Status of model on device.</p>
     */
    inline GetDeviceFleetReportResult& AddModelStats(const EdgeModelStat& value) { m_modelStats.push_back(value); return *this; }

    /**
     * <p>Status of model on device.</p>
     */
    inline GetDeviceFleetReportResult& AddModelStats(EdgeModelStat&& value) { m_modelStats.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_deviceFleetArn;

    Aws::String m_deviceFleetName;

    EdgeOutputConfig m_outputConfig;

    Aws::String m_description;

    Aws::Utils::DateTime m_reportGenerated;

    DeviceStats m_deviceStats;

    Aws::Vector<AgentVersion> m_agentVersions;

    Aws::Vector<EdgeModelStat> m_modelStats;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
