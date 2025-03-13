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
    AWS_SAGEMAKER_API GetDeviceFleetReportResult() = default;
    AWS_SAGEMAKER_API GetDeviceFleetReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetDeviceFleetReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceFleetArn() const { return m_deviceFleetArn; }
    template<typename DeviceFleetArnT = Aws::String>
    void SetDeviceFleetArn(DeviceFleetArnT&& value) { m_deviceFleetArnHasBeenSet = true; m_deviceFleetArn = std::forward<DeviceFleetArnT>(value); }
    template<typename DeviceFleetArnT = Aws::String>
    GetDeviceFleetReportResult& WithDeviceFleetArn(DeviceFleetArnT&& value) { SetDeviceFleetArn(std::forward<DeviceFleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    GetDeviceFleetReportResult& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = EdgeOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = EdgeOutputConfig>
    GetDeviceFleetReportResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDeviceFleetReportResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the report was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetReportGenerated() const { return m_reportGenerated; }
    template<typename ReportGeneratedT = Aws::Utils::DateTime>
    void SetReportGenerated(ReportGeneratedT&& value) { m_reportGeneratedHasBeenSet = true; m_reportGenerated = std::forward<ReportGeneratedT>(value); }
    template<typename ReportGeneratedT = Aws::Utils::DateTime>
    GetDeviceFleetReportResult& WithReportGenerated(ReportGeneratedT&& value) { SetReportGenerated(std::forward<ReportGeneratedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of devices.</p>
     */
    inline const DeviceStats& GetDeviceStats() const { return m_deviceStats; }
    template<typename DeviceStatsT = DeviceStats>
    void SetDeviceStats(DeviceStatsT&& value) { m_deviceStatsHasBeenSet = true; m_deviceStats = std::forward<DeviceStatsT>(value); }
    template<typename DeviceStatsT = DeviceStats>
    GetDeviceFleetReportResult& WithDeviceStats(DeviceStatsT&& value) { SetDeviceStats(std::forward<DeviceStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versions of Edge Manager agent deployed on the fleet.</p>
     */
    inline const Aws::Vector<AgentVersion>& GetAgentVersions() const { return m_agentVersions; }
    template<typename AgentVersionsT = Aws::Vector<AgentVersion>>
    void SetAgentVersions(AgentVersionsT&& value) { m_agentVersionsHasBeenSet = true; m_agentVersions = std::forward<AgentVersionsT>(value); }
    template<typename AgentVersionsT = Aws::Vector<AgentVersion>>
    GetDeviceFleetReportResult& WithAgentVersions(AgentVersionsT&& value) { SetAgentVersions(std::forward<AgentVersionsT>(value)); return *this;}
    template<typename AgentVersionsT = AgentVersion>
    GetDeviceFleetReportResult& AddAgentVersions(AgentVersionsT&& value) { m_agentVersionsHasBeenSet = true; m_agentVersions.emplace_back(std::forward<AgentVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of model on device.</p>
     */
    inline const Aws::Vector<EdgeModelStat>& GetModelStats() const { return m_modelStats; }
    template<typename ModelStatsT = Aws::Vector<EdgeModelStat>>
    void SetModelStats(ModelStatsT&& value) { m_modelStatsHasBeenSet = true; m_modelStats = std::forward<ModelStatsT>(value); }
    template<typename ModelStatsT = Aws::Vector<EdgeModelStat>>
    GetDeviceFleetReportResult& WithModelStats(ModelStatsT&& value) { SetModelStats(std::forward<ModelStatsT>(value)); return *this;}
    template<typename ModelStatsT = EdgeModelStat>
    GetDeviceFleetReportResult& AddModelStats(ModelStatsT&& value) { m_modelStatsHasBeenSet = true; m_modelStats.emplace_back(std::forward<ModelStatsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeviceFleetReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceFleetArn;
    bool m_deviceFleetArnHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    EdgeOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_reportGenerated{};
    bool m_reportGeneratedHasBeenSet = false;

    DeviceStats m_deviceStats;
    bool m_deviceStatsHasBeenSet = false;

    Aws::Vector<AgentVersion> m_agentVersions;
    bool m_agentVersionsHasBeenSet = false;

    Aws::Vector<EdgeModelStat> m_modelStats;
    bool m_modelStatsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
