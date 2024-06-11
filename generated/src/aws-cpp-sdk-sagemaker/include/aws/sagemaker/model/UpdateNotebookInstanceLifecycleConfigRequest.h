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
    AWS_SAGEMAKER_API UpdateNotebookInstanceLifecycleConfigRequest();

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
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = value; }
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::move(value); }
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName.assign(value); }
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shell script that runs only once, when you create a notebook instance.
     * The shell script must be a base64-encoded string.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnCreate() const{ return m_onCreate; }
    inline bool OnCreateHasBeenSet() const { return m_onCreateHasBeenSet; }
    inline void SetOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onCreateHasBeenSet = true; m_onCreate = value; }
    inline void SetOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onCreateHasBeenSet = true; m_onCreate = std::move(value); }
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnCreate(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnCreate(value); return *this;}
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnCreate(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnCreate(std::move(value)); return *this;}
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnCreate(const NotebookInstanceLifecycleHook& value) { m_onCreateHasBeenSet = true; m_onCreate.push_back(value); return *this; }
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnCreate(NotebookInstanceLifecycleHook&& value) { m_onCreateHasBeenSet = true; m_onCreate.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance. The shell script must be a
     * base64-encoded string.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnStart() const{ return m_onStart; }
    inline bool OnStartHasBeenSet() const { return m_onStartHasBeenSet; }
    inline void SetOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { m_onStartHasBeenSet = true; m_onStart = value; }
    inline void SetOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { m_onStartHasBeenSet = true; m_onStart = std::move(value); }
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnStart(const Aws::Vector<NotebookInstanceLifecycleHook>& value) { SetOnStart(value); return *this;}
    inline UpdateNotebookInstanceLifecycleConfigRequest& WithOnStart(Aws::Vector<NotebookInstanceLifecycleHook>&& value) { SetOnStart(std::move(value)); return *this;}
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnStart(const NotebookInstanceLifecycleHook& value) { m_onStartHasBeenSet = true; m_onStart.push_back(value); return *this; }
    inline UpdateNotebookInstanceLifecycleConfigRequest& AddOnStart(NotebookInstanceLifecycleHook&& value) { m_onStartHasBeenSet = true; m_onStart.push_back(std::move(value)); return *this; }
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
