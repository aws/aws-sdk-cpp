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
    AWS_SAGEMAKER_API DescribeCodeRepositoryResult();
    AWS_SAGEMAKER_API DescribeCodeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeCodeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const{ return m_codeRepositoryName; }
    inline void SetCodeRepositoryName(const Aws::String& value) { m_codeRepositoryName = value; }
    inline void SetCodeRepositoryName(Aws::String&& value) { m_codeRepositoryName = std::move(value); }
    inline void SetCodeRepositoryName(const char* value) { m_codeRepositoryName.assign(value); }
    inline DescribeCodeRepositoryResult& WithCodeRepositoryName(const Aws::String& value) { SetCodeRepositoryName(value); return *this;}
    inline DescribeCodeRepositoryResult& WithCodeRepositoryName(Aws::String&& value) { SetCodeRepositoryName(std::move(value)); return *this;}
    inline DescribeCodeRepositoryResult& WithCodeRepositoryName(const char* value) { SetCodeRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const{ return m_codeRepositoryArn; }
    inline void SetCodeRepositoryArn(const Aws::String& value) { m_codeRepositoryArn = value; }
    inline void SetCodeRepositoryArn(Aws::String&& value) { m_codeRepositoryArn = std::move(value); }
    inline void SetCodeRepositoryArn(const char* value) { m_codeRepositoryArn.assign(value); }
    inline DescribeCodeRepositoryResult& WithCodeRepositoryArn(const Aws::String& value) { SetCodeRepositoryArn(value); return *this;}
    inline DescribeCodeRepositoryResult& WithCodeRepositoryArn(Aws::String&& value) { SetCodeRepositoryArn(std::move(value)); return *this;}
    inline DescribeCodeRepositoryResult& WithCodeRepositoryArn(const char* value) { SetCodeRepositoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeCodeRepositoryResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeCodeRepositoryResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the repository was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeCodeRepositoryResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeCodeRepositoryResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details about the repository, including the URL where the
     * repository is located, the default branch, and the Amazon Resource Name (ARN) of
     * the Amazon Web Services Secrets Manager secret that contains the credentials
     * used to access the repository.</p>
     */
    inline const GitConfig& GetGitConfig() const{ return m_gitConfig; }
    inline void SetGitConfig(const GitConfig& value) { m_gitConfig = value; }
    inline void SetGitConfig(GitConfig&& value) { m_gitConfig = std::move(value); }
    inline DescribeCodeRepositoryResult& WithGitConfig(const GitConfig& value) { SetGitConfig(value); return *this;}
    inline DescribeCodeRepositoryResult& WithGitConfig(GitConfig&& value) { SetGitConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCodeRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCodeRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCodeRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_codeRepositoryName;

    Aws::String m_codeRepositoryArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    GitConfig m_gitConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
