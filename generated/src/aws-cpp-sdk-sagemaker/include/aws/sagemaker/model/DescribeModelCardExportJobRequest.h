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
  class DescribeModelCardExportJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeModelCardExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeModelCardExportJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job to describe.</p>
     */
    inline const Aws::String& GetModelCardExportJobArn() const{ return m_modelCardExportJobArn; }
    inline bool ModelCardExportJobArnHasBeenSet() const { return m_modelCardExportJobArnHasBeenSet; }
    inline void SetModelCardExportJobArn(const Aws::String& value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn = value; }
    inline void SetModelCardExportJobArn(Aws::String&& value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn = std::move(value); }
    inline void SetModelCardExportJobArn(const char* value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn.assign(value); }
    inline DescribeModelCardExportJobRequest& WithModelCardExportJobArn(const Aws::String& value) { SetModelCardExportJobArn(value); return *this;}
    inline DescribeModelCardExportJobRequest& WithModelCardExportJobArn(Aws::String&& value) { SetModelCardExportJobArn(std::move(value)); return *this;}
    inline DescribeModelCardExportJobRequest& WithModelCardExportJobArn(const char* value) { SetModelCardExportJobArn(value); return *this;}
    ///@}
  private:

    Aws::String m_modelCardExportJobArn;
    bool m_modelCardExportJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
