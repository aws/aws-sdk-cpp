/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationFlowExecutionStatus.h>
#include <aws/supplychain/model/DataIntegrationFlowExecutionSourceInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/supplychain/model/DataIntegrationFlowExecutionOutputMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The flow execution details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowExecution">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowExecution
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecution() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The flow execution's instanceId.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DataIntegrationFlowExecution& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flow execution's flowName.</p>
     */
    inline const Aws::String& GetFlowName() const { return m_flowName; }
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
    template<typename FlowNameT = Aws::String>
    void SetFlowName(FlowNameT&& value) { m_flowNameHasBeenSet = true; m_flowName = std::forward<FlowNameT>(value); }
    template<typename FlowNameT = Aws::String>
    DataIntegrationFlowExecution& WithFlowName(FlowNameT&& value) { SetFlowName(std::forward<FlowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flow executionId.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    DataIntegrationFlowExecution& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of flow execution.</p>
     */
    inline DataIntegrationFlowExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataIntegrationFlowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataIntegrationFlowExecution& WithStatus(DataIntegrationFlowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source information for a flow execution.</p>
     */
    inline const DataIntegrationFlowExecutionSourceInfo& GetSourceInfo() const { return m_sourceInfo; }
    inline bool SourceInfoHasBeenSet() const { return m_sourceInfoHasBeenSet; }
    template<typename SourceInfoT = DataIntegrationFlowExecutionSourceInfo>
    void SetSourceInfo(SourceInfoT&& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = std::forward<SourceInfoT>(value); }
    template<typename SourceInfoT = DataIntegrationFlowExecutionSourceInfo>
    DataIntegrationFlowExecution& WithSourceInfo(SourceInfoT&& value) { SetSourceInfo(std::forward<SourceInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message (if any) of failed flow execution.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DataIntegrationFlowExecution& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flow execution start timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DataIntegrationFlowExecution& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flow execution end timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DataIntegrationFlowExecution& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flow execution output metadata.</p>
     */
    inline const DataIntegrationFlowExecutionOutputMetadata& GetOutputMetadata() const { return m_outputMetadata; }
    inline bool OutputMetadataHasBeenSet() const { return m_outputMetadataHasBeenSet; }
    template<typename OutputMetadataT = DataIntegrationFlowExecutionOutputMetadata>
    void SetOutputMetadata(OutputMetadataT&& value) { m_outputMetadataHasBeenSet = true; m_outputMetadata = std::forward<OutputMetadataT>(value); }
    template<typename OutputMetadataT = DataIntegrationFlowExecutionOutputMetadata>
    DataIntegrationFlowExecution& WithOutputMetadata(OutputMetadataT&& value) { SetOutputMetadata(std::forward<OutputMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    DataIntegrationFlowExecutionStatus m_status{DataIntegrationFlowExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    DataIntegrationFlowExecutionSourceInfo m_sourceInfo;
    bool m_sourceInfoHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    DataIntegrationFlowExecutionOutputMetadata m_outputMetadata;
    bool m_outputMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
