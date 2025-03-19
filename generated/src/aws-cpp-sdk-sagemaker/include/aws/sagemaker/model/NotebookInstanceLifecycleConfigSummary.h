/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides a summary of a notebook instance lifecycle
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotebookInstanceLifecycleConfigSummary">AWS
   * API Reference</a></p>
   */
  class NotebookInstanceLifecycleConfigSummary
  {
  public:
    AWS_SAGEMAKER_API NotebookInstanceLifecycleConfigSummary() = default;
    AWS_SAGEMAKER_API NotebookInstanceLifecycleConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NotebookInstanceLifecycleConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const { return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    void SetNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::forward<NotebookInstanceLifecycleConfigNameT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { SetNotebookInstanceLifecycleConfigName(std::forward<NotebookInstanceLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const { return m_notebookInstanceLifecycleConfigArn; }
    inline bool NotebookInstanceLifecycleConfigArnHasBeenSet() const { return m_notebookInstanceLifecycleConfigArnHasBeenSet; }
    template<typename NotebookInstanceLifecycleConfigArnT = Aws::String>
    void SetNotebookInstanceLifecycleConfigArn(NotebookInstanceLifecycleConfigArnT&& value) { m_notebookInstanceLifecycleConfigArnHasBeenSet = true; m_notebookInstanceLifecycleConfigArn = std::forward<NotebookInstanceLifecycleConfigArnT>(value); }
    template<typename NotebookInstanceLifecycleConfigArnT = Aws::String>
    NotebookInstanceLifecycleConfigSummary& WithNotebookInstanceLifecycleConfigArn(NotebookInstanceLifecycleConfigArnT&& value) { SetNotebookInstanceLifecycleConfigArn(std::forward<NotebookInstanceLifecycleConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that tells when the lifecycle configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    NotebookInstanceLifecycleConfigSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that tells when the lifecycle configuration was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    NotebookInstanceLifecycleConfigSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigArn;
    bool m_notebookInstanceLifecycleConfigArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
