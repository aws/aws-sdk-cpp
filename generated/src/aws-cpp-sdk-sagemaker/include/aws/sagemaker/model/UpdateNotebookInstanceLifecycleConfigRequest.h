/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotebookInstanceLifecycleHook.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateNotebookInstanceLifecycleConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateNotebookInstanceLifecycleConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotebookInstanceLifecycleConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const { return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    void SetNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::forward<NotebookInstanceLifecycleConfigNameT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    UpdateNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { SetNotebookInstanceLifecycleConfigName(std::forward<NotebookInstanceLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shell script that runs only once, when you create a notebook instance.
     * The shell script must be a base64-encoded string.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnCreate() const { return m_onCreate; }
    inline bool OnCreateHasBeenSet() const { return m_onCreateHasBeenSet; }
    template<typename OnCreateT = Aws::Vector<NotebookInstanceLifecycleHook>>
    void SetOnCreate(OnCreateT&& value) { m_onCreateHasBeenSet = true; m_onCreate = std::forward<OnCreateT>(value); }
    template<typename OnCreateT = Aws::Vector<NotebookInstanceLifecycleHook>>
    UpdateNotebookInstanceLifecycleConfigRequest& WithOnCreate(OnCreateT&& value) { SetOnCreate(std::forward<OnCreateT>(value)); return *this;}
    template<typename OnCreateT = NotebookInstanceLifecycleHook>
    UpdateNotebookInstanceLifecycleConfigRequest& AddOnCreate(OnCreateT&& value) { m_onCreateHasBeenSet = true; m_onCreate.emplace_back(std::forward<OnCreateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance. The shell script must be a
     * base64-encoded string.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnStart() const { return m_onStart; }
    inline bool OnStartHasBeenSet() const { return m_onStartHasBeenSet; }
    template<typename OnStartT = Aws::Vector<NotebookInstanceLifecycleHook>>
    void SetOnStart(OnStartT&& value) { m_onStartHasBeenSet = true; m_onStart = std::forward<OnStartT>(value); }
    template<typename OnStartT = Aws::Vector<NotebookInstanceLifecycleHook>>
    UpdateNotebookInstanceLifecycleConfigRequest& WithOnStart(OnStartT&& value) { SetOnStart(std::forward<OnStartT>(value)); return *this;}
    template<typename OnStartT = NotebookInstanceLifecycleHook>
    UpdateNotebookInstanceLifecycleConfigRequest& AddOnStart(OnStartT&& value) { m_onStartHasBeenSet = true; m_onStart.emplace_back(std::forward<OnStartT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onCreate;
    bool m_onCreateHasBeenSet = false;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onStart;
    bool m_onStartHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
