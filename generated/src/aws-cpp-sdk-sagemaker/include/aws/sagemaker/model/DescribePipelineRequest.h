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
    AWS_SAGEMAKER_API DescribePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePipeline"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the pipeline to describe.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    DescribePipelineRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline version to describe.</p>
     */
    inline long long GetPipelineVersionId() const { return m_pipelineVersionId; }
    inline bool PipelineVersionIdHasBeenSet() const { return m_pipelineVersionIdHasBeenSet; }
    inline void SetPipelineVersionId(long long value) { m_pipelineVersionIdHasBeenSet = true; m_pipelineVersionId = value; }
    inline DescribePipelineRequest& WithPipelineVersionId(long long value) { SetPipelineVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    long long m_pipelineVersionId{0};
    bool m_pipelineVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
