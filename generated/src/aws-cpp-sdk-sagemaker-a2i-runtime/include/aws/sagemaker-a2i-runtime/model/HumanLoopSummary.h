/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Summary information about the human loop.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopSummary">AWS
   * API Reference</a></p>
   */
  class HumanLoopSummary
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopSummary() = default;
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopName() const { return m_humanLoopName; }
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }
    template<typename HumanLoopNameT = Aws::String>
    void SetHumanLoopName(HumanLoopNameT&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::forward<HumanLoopNameT>(value); }
    template<typename HumanLoopNameT = Aws::String>
    HumanLoopSummary& WithHumanLoopName(HumanLoopNameT&& value) { SetHumanLoopName(std::forward<HumanLoopNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the human loop. </p>
     */
    inline HumanLoopStatus GetHumanLoopStatus() const { return m_humanLoopStatus; }
    inline bool HumanLoopStatusHasBeenSet() const { return m_humanLoopStatusHasBeenSet; }
    inline void SetHumanLoopStatus(HumanLoopStatus value) { m_humanLoopStatusHasBeenSet = true; m_humanLoopStatus = value; }
    inline HumanLoopSummary& WithHumanLoopStatus(HumanLoopStatus value) { SetHumanLoopStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When Amazon Augmented AI created the human loop.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HumanLoopSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the human loop failed. A failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    HumanLoopSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition used to configure the
     * human loop.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    HumanLoopSummary& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;

    HumanLoopStatus m_humanLoopStatus{HumanLoopStatus::NOT_SET};
    bool m_humanLoopStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
