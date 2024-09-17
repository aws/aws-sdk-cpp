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
    AWS_SAGEMAKER_API FlowDefinitionSummary();
    AWS_SAGEMAKER_API FlowDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FlowDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const{ return m_flowDefinitionName; }
    inline bool FlowDefinitionNameHasBeenSet() const { return m_flowDefinitionNameHasBeenSet; }
    inline void SetFlowDefinitionName(const Aws::String& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = value; }
    inline void SetFlowDefinitionName(Aws::String&& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = std::move(value); }
    inline void SetFlowDefinitionName(const char* value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName.assign(value); }
    inline FlowDefinitionSummary& WithFlowDefinitionName(const Aws::String& value) { SetFlowDefinitionName(value); return *this;}
    inline FlowDefinitionSummary& WithFlowDefinitionName(Aws::String&& value) { SetFlowDefinitionName(std::move(value)); return *this;}
    inline FlowDefinitionSummary& WithFlowDefinitionName(const char* value) { SetFlowDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = value; }
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::move(value); }
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn.assign(value); }
    inline FlowDefinitionSummary& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}
    inline FlowDefinitionSummary& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}
    inline FlowDefinitionSummary& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow definition. Valid values:</p>
     */
    inline const FlowDefinitionStatus& GetFlowDefinitionStatus() const{ return m_flowDefinitionStatus; }
    inline bool FlowDefinitionStatusHasBeenSet() const { return m_flowDefinitionStatusHasBeenSet; }
    inline void SetFlowDefinitionStatus(const FlowDefinitionStatus& value) { m_flowDefinitionStatusHasBeenSet = true; m_flowDefinitionStatus = value; }
    inline void SetFlowDefinitionStatus(FlowDefinitionStatus&& value) { m_flowDefinitionStatusHasBeenSet = true; m_flowDefinitionStatus = std::move(value); }
    inline FlowDefinitionSummary& WithFlowDefinitionStatus(const FlowDefinitionStatus& value) { SetFlowDefinitionStatus(value); return *this;}
    inline FlowDefinitionSummary& WithFlowDefinitionStatus(FlowDefinitionStatus&& value) { SetFlowDefinitionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when SageMaker created the flow definition.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FlowDefinitionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FlowDefinitionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the flow definition creation failed. A failure reason is
     * returned only when the flow definition status is <code>Failed</code>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline FlowDefinitionSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline FlowDefinitionSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline FlowDefinitionSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_flowDefinitionName;
    bool m_flowDefinitionNameHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    FlowDefinitionStatus m_flowDefinitionStatus;
    bool m_flowDefinitionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
