/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateFailoverConfig.h>
#include <aws/mediaconnect/model/UpdateMaintenance.h>
#include <aws/mediaconnect/model/MonitoringConfig.h>
#include <aws/mediaconnect/model/NdiConfig.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class UpdateFlowRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlow"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the flow that you want to update.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    UpdateFlowRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for source failover. </p>
     */
    inline const UpdateFailoverConfig& GetSourceFailoverConfig() const { return m_sourceFailoverConfig; }
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }
    template<typename SourceFailoverConfigT = UpdateFailoverConfig>
    void SetSourceFailoverConfig(SourceFailoverConfigT&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::forward<SourceFailoverConfigT>(value); }
    template<typename SourceFailoverConfigT = UpdateFailoverConfig>
    UpdateFlowRequest& WithSourceFailoverConfig(SourceFailoverConfigT&& value) { SetSourceFailoverConfig(std::forward<SourceFailoverConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maintenance setting of the flow. </p>
     */
    inline const UpdateMaintenance& GetMaintenance() const { return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    template<typename MaintenanceT = UpdateMaintenance>
    void SetMaintenance(MaintenanceT&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::forward<MaintenanceT>(value); }
    template<typename MaintenanceT = UpdateMaintenance>
    UpdateFlowRequest& WithMaintenance(MaintenanceT&& value) { SetMaintenance(std::forward<MaintenanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for source monitoring. </p>
     */
    inline const MonitoringConfig& GetSourceMonitoringConfig() const { return m_sourceMonitoringConfig; }
    inline bool SourceMonitoringConfigHasBeenSet() const { return m_sourceMonitoringConfigHasBeenSet; }
    template<typename SourceMonitoringConfigT = MonitoringConfig>
    void SetSourceMonitoringConfig(SourceMonitoringConfigT&& value) { m_sourceMonitoringConfigHasBeenSet = true; m_sourceMonitoringConfig = std::forward<SourceMonitoringConfigT>(value); }
    template<typename SourceMonitoringConfigT = MonitoringConfig>
    UpdateFlowRequest& WithSourceMonitoringConfig(SourceMonitoringConfigT&& value) { SetSourceMonitoringConfig(std::forward<SourceMonitoringConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configuration settings for NDI outputs. Required when the flow
     * includes NDI outputs. </p>
     */
    inline const NdiConfig& GetNdiConfig() const { return m_ndiConfig; }
    inline bool NdiConfigHasBeenSet() const { return m_ndiConfigHasBeenSet; }
    template<typename NdiConfigT = NdiConfig>
    void SetNdiConfig(NdiConfigT&& value) { m_ndiConfigHasBeenSet = true; m_ndiConfig = std::forward<NdiConfigT>(value); }
    template<typename NdiConfigT = NdiConfig>
    UpdateFlowRequest& WithNdiConfig(NdiConfigT&& value) { SetNdiConfig(std::forward<NdiConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    UpdateFailoverConfig m_sourceFailoverConfig;
    bool m_sourceFailoverConfigHasBeenSet = false;

    UpdateMaintenance m_maintenance;
    bool m_maintenanceHasBeenSet = false;

    MonitoringConfig m_sourceMonitoringConfig;
    bool m_sourceMonitoringConfigHasBeenSet = false;

    NdiConfig m_ndiConfig;
    bool m_ndiConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
