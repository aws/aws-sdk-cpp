﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribePipelineDefinitionForExecutionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribePipelineDefinitionForExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePipelineDefinitionForExecution"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const { return m_pipelineExecutionArn; }
    inline bool PipelineExecutionArnHasBeenSet() const { return m_pipelineExecutionArnHasBeenSet; }
    template<typename PipelineExecutionArnT = Aws::String>
    void SetPipelineExecutionArn(PipelineExecutionArnT&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::forward<PipelineExecutionArnT>(value); }
    template<typename PipelineExecutionArnT = Aws::String>
    DescribePipelineDefinitionForExecutionRequest& WithPipelineExecutionArn(PipelineExecutionArnT&& value) { SetPipelineExecutionArn(std::forward<PipelineExecutionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionArn;
    bool m_pipelineExecutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
