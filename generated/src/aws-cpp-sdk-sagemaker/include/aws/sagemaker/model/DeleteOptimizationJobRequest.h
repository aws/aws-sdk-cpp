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
  class DeleteOptimizationJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteOptimizationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOptimizationJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name that you assigned to the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobName() const{ return m_optimizationJobName; }
    inline bool OptimizationJobNameHasBeenSet() const { return m_optimizationJobNameHasBeenSet; }
    inline void SetOptimizationJobName(const Aws::String& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = value; }
    inline void SetOptimizationJobName(Aws::String&& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = std::move(value); }
    inline void SetOptimizationJobName(const char* value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName.assign(value); }
    inline DeleteOptimizationJobRequest& WithOptimizationJobName(const Aws::String& value) { SetOptimizationJobName(value); return *this;}
    inline DeleteOptimizationJobRequest& WithOptimizationJobName(Aws::String&& value) { SetOptimizationJobName(std::move(value)); return *this;}
    inline DeleteOptimizationJobRequest& WithOptimizationJobName(const char* value) { SetOptimizationJobName(value); return *this;}
    ///@}
  private:

    Aws::String m_optimizationJobName;
    bool m_optimizationJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
