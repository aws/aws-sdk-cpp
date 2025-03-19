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
  class DescribeCodeRepositoryResult
  {
  public:
    AWS_SAGEMAKER_API DescribeCodeRepositoryResult() = default;
    AWS_SAGEMAKER_API DescribeCodeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeCodeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const { return m_codeRepositoryName; }
    template<typename CodeRepositoryNameT = Aws::String>
    void SetCodeRepositoryName(CodeRepositoryNameT&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::forward<CodeRepositoryNameT>(value); }
    template<typename CodeRepositoryNameT = Aws::String>
    DescribeCodeRepositoryResult& WithCodeRepositoryName(CodeRepositoryNameT&& value) { SetCodeRepositoryName(std::forward<CodeRepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const { return m_codeRepositoryArn; }
    template<typename CodeRepositoryArnT = Aws::String>
    void SetCodeRepositoryArn(CodeRepositoryArnT&& value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn = std::forward<CodeRepositoryArnT>(value); }
    template<typename CodeRepositoryArnT = Aws::String>
    DescribeCodeRepositoryResult& WithCodeRepositoryArn(CodeRepositoryArnT&& value) { SetCodeRepositoryArn(std::forward<CodeRepositoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeCodeRepositoryResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the repository was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeCodeRepositoryResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details about the repository, including the URL where the
     * repository is located, the default branch, and the Amazon Resource Name (ARN) of
     * the Amazon Web Services Secrets Manager secret that contains the credentials
     * used to access the repository.</p>
     */
    inline const GitConfig& GetGitConfig() const { return m_gitConfig; }
    template<typename GitConfigT = GitConfig>
    void SetGitConfig(GitConfigT&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::forward<GitConfigT>(value); }
    template<typename GitConfigT = GitConfig>
    DescribeCodeRepositoryResult& WithGitConfig(GitConfigT&& value) { SetGitConfig(std::forward<GitConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCodeRepositoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
