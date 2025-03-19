/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/NotebookInstanceLifecycleHook.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeNotebookInstanceLifecycleConfigResult
  {
  public:
    AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigResult() = default;
    AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeNotebookInstanceLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const { return m_notebookInstanceLifecycleConfigArn; }
    template<typename NotebookInstanceLifecycleConfigArnT = Aws::String>
    void SetNotebookInstanceLifecycleConfigArn(NotebookInstanceLifecycleConfigArnT&& value) { m_notebookInstanceLifecycleConfigArnHasBeenSet = true; m_notebookInstanceLifecycleConfigArn = std::forward<NotebookInstanceLifecycleConfigArnT>(value); }
    template<typename NotebookInstanceLifecycleConfigArnT = Aws::String>
    DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(NotebookInstanceLifecycleConfigArnT&& value) { SetNotebookInstanceLifecycleConfigArn(std::forward<NotebookInstanceLifecycleConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const { return m_notebookInstanceLifecycleConfigName; }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    void SetNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::forward<NotebookInstanceLifecycleConfigNameT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    DescribeNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { SetNotebookInstanceLifecycleConfigName(std::forward<NotebookInstanceLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shell script that runs only once, when you create a notebook
     * instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnCreate() const { return m_onCreate; }
    template<typename OnCreateT = Aws::Vector<NotebookInstanceLifecycleHook>>
    void SetOnCreate(OnCreateT&& value) { m_onCreateHasBeenSet = true; m_onCreate = std::forward<OnCreateT>(value); }
    template<typename OnCreateT = Aws::Vector<NotebookInstanceLifecycleHook>>
    DescribeNotebookInstanceLifecycleConfigResult& WithOnCreate(OnCreateT&& value) { SetOnCreate(std::forward<OnCreateT>(value)); return *this;}
    template<typename OnCreateT = NotebookInstanceLifecycleHook>
    DescribeNotebookInstanceLifecycleConfigResult& AddOnCreate(OnCreateT&& value) { m_onCreateHasBeenSet = true; m_onCreate.emplace_back(std::forward<OnCreateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shell script that runs every time you start a notebook instance,
     * including when you create the notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleHook>& GetOnStart() const { return m_onStart; }
    template<typename OnStartT = Aws::Vector<NotebookInstanceLifecycleHook>>
    void SetOnStart(OnStartT&& value) { m_onStartHasBeenSet = true; m_onStart = std::forward<OnStartT>(value); }
    template<typename OnStartT = Aws::Vector<NotebookInstanceLifecycleHook>>
    DescribeNotebookInstanceLifecycleConfigResult& WithOnStart(OnStartT&& value) { SetOnStart(std::forward<OnStartT>(value)); return *this;}
    template<typename OnStartT = NotebookInstanceLifecycleHook>
    DescribeNotebookInstanceLifecycleConfigResult& AddOnStart(OnStartT&& value) { m_onStartHasBeenSet = true; m_onStart.emplace_back(std::forward<OnStartT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeNotebookInstanceLifecycleConfigResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeNotebookInstanceLifecycleConfigResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeNotebookInstanceLifecycleConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceLifecycleConfigArn;
    bool m_notebookInstanceLifecycleConfigArnHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onCreate;
    bool m_onCreateHasBeenSet = false;

    Aws::Vector<NotebookInstanceLifecycleHook> m_onStart;
    bool m_onStartHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
