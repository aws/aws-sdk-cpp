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
  class DescribeProcessingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeProcessingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProcessingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetProcessingJobName() const{ return m_processingJobName; }
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }
    inline void SetProcessingJobName(const Aws::String& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = value; }
    inline void SetProcessingJobName(Aws::String&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::move(value); }
    inline void SetProcessingJobName(const char* value) { m_processingJobNameHasBeenSet = true; m_processingJobName.assign(value); }
    inline DescribeProcessingJobRequest& WithProcessingJobName(const Aws::String& value) { SetProcessingJobName(value); return *this;}
    inline DescribeProcessingJobRequest& WithProcessingJobName(Aws::String&& value) { SetProcessingJobName(std::move(value)); return *this;}
    inline DescribeProcessingJobRequest& WithProcessingJobName(const char* value) { SetProcessingJobName(value); return *this;}
    ///@}
  private:

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
