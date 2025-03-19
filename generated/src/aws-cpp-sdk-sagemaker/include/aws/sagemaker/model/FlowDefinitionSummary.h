/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FlowDefinitionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Contains summary information about the flow definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FlowDefinitionSummary">AWS
   * API Reference</a></p>
   */
  class FlowDefinitionSummary
  {
  public:
    AWS_SAGEMAKER_API FlowDefinitionSummary() = default;
    AWS_SAGEMAKER_API FlowDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FlowDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const { return m_flowDefinitionName; }
    inline bool FlowDefinitionNameHasBeenSet() const { return m_flowDefinitionNameHasBeenSet; }
    template<typename FlowDefinitionNameT = Aws::String>
    void SetFlowDefinitionName(FlowDefinitionNameT&& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = std::forward<FlowDefinitionNameT>(value); }
    template<typename FlowDefinitionNameT = Aws::String>
    FlowDefinitionSummary& WithFlowDefinitionName(FlowDefinitionNameT&& value) { SetFlowDefinitionName(std::forward<FlowDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    FlowDefinitionSummary& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow definition. Valid values:</p>
     */
    inline FlowDefinitionStatus GetFlowDefinitionStatus() const { return m_flowDefinitionStatus; }
    inline bool FlowDefinitionStatusHasBeenSet() const { return m_flowDefinitionStatusHasBeenSet; }
    inline void SetFlowDefinitionStatus(FlowDefinitionStatus value) { m_flowDefinitionStatusHasBeenSet = true; m_flowDefinitionStatus = value; }
    inline FlowDefinitionSummary& WithFlowDefinitionStatus(FlowDefinitionStatus value) { SetFlowDefinitionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when SageMaker created the flow definition.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FlowDefinitionSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the flow definition creation failed. A failure reason is
     * returned only when the flow definition status is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    FlowDefinitionSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowDefinitionName;
    bool m_flowDefinitionNameHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    FlowDefinitionStatus m_flowDefinitionStatus{FlowDefinitionStatus::NOT_SET};
    bool m_flowDefinitionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
