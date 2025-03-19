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
  class DescribeNotebookInstanceLifecycleConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNotebookInstanceLifecycleConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the lifecycle configuration to describe.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const { return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    void SetNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::forward<NotebookInstanceLifecycleConfigNameT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    DescribeNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { SetNotebookInstanceLifecycleConfigName(std::forward<NotebookInstanceLifecycleConfigNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
