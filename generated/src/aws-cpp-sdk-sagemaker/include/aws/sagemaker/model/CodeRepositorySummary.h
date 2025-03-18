/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/GitConfig.h>
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
   * <p>Specifies summary information about a Git repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CodeRepositorySummary">AWS
   * API Reference</a></p>
   */
  class CodeRepositorySummary
  {
  public:
    AWS_SAGEMAKER_API CodeRepositorySummary() = default;
    AWS_SAGEMAKER_API CodeRepositorySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CodeRepositorySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const { return m_codeRepositoryName; }
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }
    template<typename CodeRepositoryNameT = Aws::String>
    void SetCodeRepositoryName(CodeRepositoryNameT&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::forward<CodeRepositoryNameT>(value); }
    template<typename CodeRepositoryNameT = Aws::String>
    CodeRepositorySummary& WithCodeRepositoryName(CodeRepositoryNameT&& value) { SetCodeRepositoryName(std::forward<CodeRepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const { return m_codeRepositoryArn; }
    inline bool CodeRepositoryArnHasBeenSet() const { return m_codeRepositoryArnHasBeenSet; }
    template<typename CodeRepositoryArnT = Aws::String>
    void SetCodeRepositoryArn(CodeRepositoryArnT&& value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn = std::forward<CodeRepositoryArnT>(value); }
    template<typename CodeRepositoryArnT = Aws::String>
    CodeRepositorySummary& WithCodeRepositoryArn(CodeRepositoryArnT&& value) { SetCodeRepositoryArn(std::forward<CodeRepositoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CodeRepositorySummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    CodeRepositorySummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository.</p>
     */
    inline const GitConfig& GetGitConfig() const { return m_gitConfig; }
    inline bool GitConfigHasBeenSet() const { return m_gitConfigHasBeenSet; }
    template<typename GitConfigT = GitConfig>
    void SetGitConfig(GitConfigT&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::forward<GitConfigT>(value); }
    template<typename GitConfigT = GitConfig>
    CodeRepositorySummary& WithGitConfig(GitConfigT&& value) { SetGitConfig(std::forward<GitConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet = false;

    Aws::String m_codeRepositoryArn;
    bool m_codeRepositoryArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    GitConfig m_gitConfig;
    bool m_gitConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
