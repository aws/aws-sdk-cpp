/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides summary information for an SageMaker AI notebook
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotebookInstanceSummary">AWS
   * API Reference</a></p>
   */
  class NotebookInstanceSummary
  {
  public:
    AWS_SAGEMAKER_API NotebookInstanceSummary() = default;
    AWS_SAGEMAKER_API NotebookInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NotebookInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const { return m_notebookInstanceName; }
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }
    template<typename NotebookInstanceNameT = Aws::String>
    void SetNotebookInstanceName(NotebookInstanceNameT&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::forward<NotebookInstanceNameT>(value); }
    template<typename NotebookInstanceNameT = Aws::String>
    NotebookInstanceSummary& WithNotebookInstanceName(NotebookInstanceNameT&& value) { SetNotebookInstanceName(std::forward<NotebookInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const { return m_notebookInstanceArn; }
    inline bool NotebookInstanceArnHasBeenSet() const { return m_notebookInstanceArnHasBeenSet; }
    template<typename NotebookInstanceArnT = Aws::String>
    void SetNotebookInstanceArn(NotebookInstanceArnT&& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = std::forward<NotebookInstanceArnT>(value); }
    template<typename NotebookInstanceArnT = Aws::String>
    NotebookInstanceSummary& WithNotebookInstanceArn(NotebookInstanceArnT&& value) { SetNotebookInstanceArn(std::forward<NotebookInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the notebook instance.</p>
     */
    inline NotebookInstanceStatus GetNotebookInstanceStatus() const { return m_notebookInstanceStatus; }
    inline bool NotebookInstanceStatusHasBeenSet() const { return m_notebookInstanceStatusHasBeenSet; }
    inline void SetNotebookInstanceStatus(NotebookInstanceStatus value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = value; }
    inline NotebookInstanceSummary& WithNotebookInstanceStatus(NotebookInstanceStatus value) { SetNotebookInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that you use to connect to the Jupyter notebook running in your
     * notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    NotebookInstanceSummary& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ML compute instance that the notebook instance is running on.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline NotebookInstanceSummary& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the notebook instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    NotebookInstanceSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the notebook instance was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    NotebookInstanceSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const { return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    void SetNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::forward<NotebookInstanceLifecycleConfigNameT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    NotebookInstanceSummary& WithNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { SetNotebookInstanceLifecycleConfigName(std::forward<NotebookInstanceLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. When you open a
     * notebook instance, it opens in the directory that contains this repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const { return m_defaultCodeRepository; }
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }
    template<typename DefaultCodeRepositoryT = Aws::String>
    void SetDefaultCodeRepository(DefaultCodeRepositoryT&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::forward<DefaultCodeRepositoryT>(value); }
    template<typename DefaultCodeRepositoryT = Aws::String>
    NotebookInstanceSummary& WithDefaultCodeRepository(DefaultCodeRepositoryT&& value) { SetDefaultCodeRepository(std::forward<DefaultCodeRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. These repositories
     * are cloned at the same level as the default repository of your notebook
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const { return m_additionalCodeRepositories; }
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    void SetAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::forward<AdditionalCodeRepositoriesT>(value); }
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    NotebookInstanceSummary& WithAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { SetAdditionalCodeRepositories(std::forward<AdditionalCodeRepositoriesT>(value)); return *this;}
    template<typename AdditionalCodeRepositoriesT = Aws::String>
    NotebookInstanceSummary& AddAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.emplace_back(std::forward<AdditionalCodeRepositoriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    Aws::String m_notebookInstanceArn;
    bool m_notebookInstanceArnHasBeenSet = false;

    NotebookInstanceStatus m_notebookInstanceStatus{NotebookInstanceStatus::NOT_SET};
    bool m_notebookInstanceStatusHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
