/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopStatus.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopOutput.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{
  class DescribeHumanLoopResult
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult() = default;
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUGMENTEDAIRUNTIME_API DescribeHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The creation time when Amazon Augmented AI created the human loop.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeHumanLoopResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why a human loop failed. The failure reason is returned when the
     * status of the human loop is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeHumanLoopResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A failure code that identifies the type of failure.</p> <p>Possible values:
     * <code>ValidationError</code>, <code>Expired</code>, <code>InternalError</code>
     * </p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    DescribeHumanLoopResult& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the human loop. </p>
     */
    inline HumanLoopStatus GetHumanLoopStatus() const { return m_humanLoopStatus; }
    inline void SetHumanLoopStatus(HumanLoopStatus value) { m_humanLoopStatusHasBeenSet = true; m_humanLoopStatus = value; }
    inline DescribeHumanLoopResult& WithHumanLoopStatus(HumanLoopStatus value) { SetHumanLoopStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the human loop. The name must be lowercase, unique within the
     * Region in your account, and can have up to 63 characters. Valid characters: a-z,
     * 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetHumanLoopName() const { return m_humanLoopName; }
    template<typename HumanLoopNameT = Aws::String>
    void SetHumanLoopName(HumanLoopNameT&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::forward<HumanLoopNameT>(value); }
    template<typename HumanLoopNameT = Aws::String>
    DescribeHumanLoopResult& WithHumanLoopName(HumanLoopNameT&& value) { SetHumanLoopName(std::forward<HumanLoopNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const { return m_humanLoopArn; }
    template<typename HumanLoopArnT = Aws::String>
    void SetHumanLoopArn(HumanLoopArnT&& value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn = std::forward<HumanLoopArnT>(value); }
    template<typename HumanLoopArnT = Aws::String>
    DescribeHumanLoopResult& WithHumanLoopArn(HumanLoopArnT&& value) { SetHumanLoopArn(std::forward<HumanLoopArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    DescribeHumanLoopResult& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the output of the human loop.</p>
     */
    inline const HumanLoopOutput& GetHumanLoopOutput() const { return m_humanLoopOutput; }
    template<typename HumanLoopOutputT = HumanLoopOutput>
    void SetHumanLoopOutput(HumanLoopOutputT&& value) { m_humanLoopOutputHasBeenSet = true; m_humanLoopOutput = std::forward<HumanLoopOutputT>(value); }
    template<typename HumanLoopOutputT = HumanLoopOutput>
    DescribeHumanLoopResult& WithHumanLoopOutput(HumanLoopOutputT&& value) { SetHumanLoopOutput(std::forward<HumanLoopOutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHumanLoopResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    HumanLoopStatus m_humanLoopStatus{HumanLoopStatus::NOT_SET};
    bool m_humanLoopStatusHasBeenSet = false;

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;

    Aws::String m_humanLoopArn;
    bool m_humanLoopArnHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    HumanLoopOutput m_humanLoopOutput;
    bool m_humanLoopOutputHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
