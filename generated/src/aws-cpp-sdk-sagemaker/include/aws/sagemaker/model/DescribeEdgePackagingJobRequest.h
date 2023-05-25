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
    AWS_SAGEMAKER_API DescribeEdgePackagingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEdgePackagingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const{ return m_edgePackagingJobName; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline bool EdgePackagingJobNameHasBeenSet() const { return m_edgePackagingJobNameHasBeenSet; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(const Aws::String& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = value; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(Aws::String&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::move(value); }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(const char* value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName.assign(value); }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobRequest& WithEdgePackagingJobName(const Aws::String& value) { SetEdgePackagingJobName(value); return *this;}

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobRequest& WithEdgePackagingJobName(Aws::String&& value) { SetEdgePackagingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobRequest& WithEdgePackagingJobName(const char* value) { SetEdgePackagingJobName(value); return *this;}

  private:

    Aws::String m_edgePackagingJobName;
    bool m_edgePackagingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
