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
    AWS_SAGEMAKER_API CodeRepositorySummary();
    AWS_SAGEMAKER_API CodeRepositorySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CodeRepositorySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const{ return m_codeRepositoryName; }
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }
    inline void SetCodeRepositoryName(const Aws::String& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = value; }
    inline void SetCodeRepositoryName(Aws::String&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::move(value); }
    inline void SetCodeRepositoryName(const char* value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName.assign(value); }
    inline CodeRepositorySummary& WithCodeRepositoryName(const Aws::String& value) { SetCodeRepositoryName(value); return *this;}
    inline CodeRepositorySummary& WithCodeRepositoryName(Aws::String&& value) { SetCodeRepositoryName(std::move(value)); return *this;}
    inline CodeRepositorySummary& WithCodeRepositoryName(const char* value) { SetCodeRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const{ return m_codeRepositoryArn; }
    inline bool CodeRepositoryArnHasBeenSet() const { return m_codeRepositoryArnHasBeenSet; }
    inline void SetCodeRepositoryArn(const Aws::String& value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn = value; }
    inline void SetCodeRepositoryArn(Aws::String&& value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn = std::move(value); }
    inline void SetCodeRepositoryArn(const char* value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn.assign(value); }
    inline CodeRepositorySummary& WithCodeRepositoryArn(const Aws::String& value) { SetCodeRepositoryArn(value); return *this;}
    inline CodeRepositorySummary& WithCodeRepositoryArn(Aws::String&& value) { SetCodeRepositoryArn(std::move(value)); return *this;}
    inline CodeRepositorySummary& WithCodeRepositoryArn(const char* value) { SetCodeRepositoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline CodeRepositorySummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CodeRepositorySummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline CodeRepositorySummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline CodeRepositorySummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository.</p>
     */
    inline const GitConfig& GetGitConfig() const{ return m_gitConfig; }
    inline bool GitConfigHasBeenSet() const { return m_gitConfigHasBeenSet; }
    inline void SetGitConfig(const GitConfig& value) { m_gitConfigHasBeenSet = true; m_gitConfig = value; }
    inline void SetGitConfig(GitConfig&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::move(value); }
    inline CodeRepositorySummary& WithGitConfig(const GitConfig& value) { SetGitConfig(value); return *this;}
    inline CodeRepositorySummary& WithGitConfig(GitConfig&& value) { SetGitConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet = false;

    Aws::String m_codeRepositoryArn;
    bool m_codeRepositoryArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    GitConfig m_gitConfig;
    bool m_gitConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
