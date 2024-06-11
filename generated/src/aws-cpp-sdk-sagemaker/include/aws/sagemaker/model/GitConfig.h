﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies configuration details for a Git repository in your Amazon Web
   * Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GitConfig">AWS
   * API Reference</a></p>
   */
  class GitConfig
  {
  public:
    AWS_SAGEMAKER_API GitConfig();
    AWS_SAGEMAKER_API GitConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API GitConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline const Aws::String& GetRepositoryUrl() const{ return m_repositoryUrl; }
    inline bool RepositoryUrlHasBeenSet() const { return m_repositoryUrlHasBeenSet; }
    inline void SetRepositoryUrl(const Aws::String& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = value; }
    inline void SetRepositoryUrl(Aws::String&& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = std::move(value); }
    inline void SetRepositoryUrl(const char* value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl.assign(value); }
    inline GitConfig& WithRepositoryUrl(const Aws::String& value) { SetRepositoryUrl(value); return *this;}
    inline GitConfig& WithRepositoryUrl(Aws::String&& value) { SetRepositoryUrl(std::move(value)); return *this;}
    inline GitConfig& WithRepositoryUrl(const char* value) { SetRepositoryUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }
    inline GitConfig& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}
    inline GitConfig& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}
    inline GitConfig& WithBranch(const char* value) { SetBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that contains the credentials used to access the git repository. The
     * secret must have a staging label of <code>AWSCURRENT</code> and must be in the
     * following format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline GitConfig& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline GitConfig& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline GitConfig& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryUrl;
    bool m_repositoryUrlHasBeenSet = false;

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
