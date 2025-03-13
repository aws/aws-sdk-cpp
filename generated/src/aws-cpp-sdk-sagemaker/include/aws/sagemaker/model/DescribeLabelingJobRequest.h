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
  class DescribeLabelingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeLabelingJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLabelingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the labeling job to return information for.</p>
     */
    inline const Aws::String& GetLabelingJobName() const { return m_labelingJobName; }
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }
    template<typename LabelingJobNameT = Aws::String>
    void SetLabelingJobName(LabelingJobNameT&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::forward<LabelingJobNameT>(value); }
    template<typename LabelingJobNameT = Aws::String>
    DescribeLabelingJobRequest& WithLabelingJobName(LabelingJobNameT&& value) { SetLabelingJobName(std::forward<LabelingJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
