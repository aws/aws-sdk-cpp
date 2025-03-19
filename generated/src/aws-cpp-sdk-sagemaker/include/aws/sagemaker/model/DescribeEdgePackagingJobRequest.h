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
  class DescribeEdgePackagingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeEdgePackagingJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEdgePackagingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const { return m_edgePackagingJobName; }
    inline bool EdgePackagingJobNameHasBeenSet() const { return m_edgePackagingJobNameHasBeenSet; }
    template<typename EdgePackagingJobNameT = Aws::String>
    void SetEdgePackagingJobName(EdgePackagingJobNameT&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::forward<EdgePackagingJobNameT>(value); }
    template<typename EdgePackagingJobNameT = Aws::String>
    DescribeEdgePackagingJobRequest& WithEdgePackagingJobName(EdgePackagingJobNameT&& value) { SetEdgePackagingJobName(std::forward<EdgePackagingJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgePackagingJobName;
    bool m_edgePackagingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
