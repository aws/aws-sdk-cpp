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
  class DeleteNotebookInstanceLifecycleConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteNotebookInstanceLifecycleConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNotebookInstanceLifecycleConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }

    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }

    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = value; }

    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::move(value); }

    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName.assign(value); }

    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline DeleteNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline DeleteNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle configuration to delete.</p>
     */
    inline DeleteNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

  private:

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
