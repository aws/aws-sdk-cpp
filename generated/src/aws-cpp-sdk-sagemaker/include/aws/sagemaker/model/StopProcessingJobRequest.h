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
  class StopProcessingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StopProcessingJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopProcessingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the processing job to stop.</p>
     */
    inline const Aws::String& GetProcessingJobName() const { return m_processingJobName; }
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }
    template<typename ProcessingJobNameT = Aws::String>
    void SetProcessingJobName(ProcessingJobNameT&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::forward<ProcessingJobNameT>(value); }
    template<typename ProcessingJobNameT = Aws::String>
    StopProcessingJobRequest& WithProcessingJobName(ProcessingJobNameT&& value) { SetProcessingJobName(std::forward<ProcessingJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
