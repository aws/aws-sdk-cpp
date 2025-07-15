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
  class UpdatePipelineVersionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdatePipelineVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipelineVersion"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    UpdatePipelineVersionRequest& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pipeline version ID to update.</p>
     */
    inline long long GetPipelineVersionId() const { return m_pipelineVersionId; }
    inline bool PipelineVersionIdHasBeenSet() const { return m_pipelineVersionIdHasBeenSet; }
    inline void SetPipelineVersionId(long long value) { m_pipelineVersionIdHasBeenSet = true; m_pipelineVersionId = value; }
    inline UpdatePipelineVersionRequest& WithPipelineVersionId(long long value) { SetPipelineVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline version.</p>
     */
    inline const Aws::String& GetPipelineVersionDisplayName() const { return m_pipelineVersionDisplayName; }
    inline bool PipelineVersionDisplayNameHasBeenSet() const { return m_pipelineVersionDisplayNameHasBeenSet; }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    void SetPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { m_pipelineVersionDisplayNameHasBeenSet = true; m_pipelineVersionDisplayName = std::forward<PipelineVersionDisplayNameT>(value); }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    UpdatePipelineVersionRequest& WithPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { SetPipelineVersionDisplayName(std::forward<PipelineVersionDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline version.</p>
     */
    inline const Aws::String& GetPipelineVersionDescription() const { return m_pipelineVersionDescription; }
    inline bool PipelineVersionDescriptionHasBeenSet() const { return m_pipelineVersionDescriptionHasBeenSet; }
    template<typename PipelineVersionDescriptionT = Aws::String>
    void SetPipelineVersionDescription(PipelineVersionDescriptionT&& value) { m_pipelineVersionDescriptionHasBeenSet = true; m_pipelineVersionDescription = std::forward<PipelineVersionDescriptionT>(value); }
    template<typename PipelineVersionDescriptionT = Aws::String>
    UpdatePipelineVersionRequest& WithPipelineVersionDescription(PipelineVersionDescriptionT&& value) { SetPipelineVersionDescription(std::forward<PipelineVersionDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    long long m_pipelineVersionId{0};
    bool m_pipelineVersionIdHasBeenSet = false;

    Aws::String m_pipelineVersionDisplayName;
    bool m_pipelineVersionDisplayNameHasBeenSet = false;

    Aws::String m_pipelineVersionDescription;
    bool m_pipelineVersionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
