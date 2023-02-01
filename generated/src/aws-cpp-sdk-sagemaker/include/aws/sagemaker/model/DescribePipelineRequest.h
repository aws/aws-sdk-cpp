/**
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
  class DescribePipelineRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePipeline"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline DescribePipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline DescribePipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline to describe.</p>
     */
    inline DescribePipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
