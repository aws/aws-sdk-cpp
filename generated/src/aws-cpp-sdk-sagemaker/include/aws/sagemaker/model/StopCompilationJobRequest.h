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
  class StopCompilationJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StopCompilationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopCompilationJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }

    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }

    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = value; }

    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::move(value); }

    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline void SetCompilationJobName(const char* value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName.assign(value); }

    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline StopCompilationJobRequest& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}

    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline StopCompilationJobRequest& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the model compilation job to stop.</p>
     */
    inline StopCompilationJobRequest& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}

  private:

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
