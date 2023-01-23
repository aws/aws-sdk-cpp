/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/GitConfigForUpdate.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateCodeRepositoryRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateCodeRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCodeRepository"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const{ return m_codeRepositoryName; }

    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }

    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline void SetCodeRepositoryName(const Aws::String& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = value; }

    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline void SetCodeRepositoryName(Aws::String&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::move(value); }

    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline void SetCodeRepositoryName(const char* value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName.assign(value); }

    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline UpdateCodeRepositoryRequest& WithCodeRepositoryName(const Aws::String& value) { SetCodeRepositoryName(value); return *this;}

    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline UpdateCodeRepositoryRequest& WithCodeRepositoryName(Aws::String&& value) { SetCodeRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline UpdateCodeRepositoryRequest& WithCodeRepositoryName(const char* value) { SetCodeRepositoryName(value); return *this;}


    /**
     * <p>The configuration of the git repository, including the URL and the Amazon
     * Resource Name (ARN) of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository. The secret must have a
     * staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline const GitConfigForUpdate& GetGitConfig() const{ return m_gitConfig; }

    /**
     * <p>The configuration of the git repository, including the URL and the Amazon
     * Resource Name (ARN) of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository. The secret must have a
     * staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline bool GitConfigHasBeenSet() const { return m_gitConfigHasBeenSet; }

    /**
     * <p>The configuration of the git repository, including the URL and the Amazon
     * Resource Name (ARN) of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository. The secret must have a
     * staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetGitConfig(const GitConfigForUpdate& value) { m_gitConfigHasBeenSet = true; m_gitConfig = value; }

    /**
     * <p>The configuration of the git repository, including the URL and the Amazon
     * Resource Name (ARN) of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository. The secret must have a
     * staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetGitConfig(GitConfigForUpdate&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::move(value); }

    /**
     * <p>The configuration of the git repository, including the URL and the Amazon
     * Resource Name (ARN) of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository. The secret must have a
     * staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline UpdateCodeRepositoryRequest& WithGitConfig(const GitConfigForUpdate& value) { SetGitConfig(value); return *this;}

    /**
     * <p>The configuration of the git repository, including the URL and the Amazon
     * Resource Name (ARN) of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository. The secret must have a
     * staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline UpdateCodeRepositoryRequest& WithGitConfig(GitConfigForUpdate&& value) { SetGitConfig(std::move(value)); return *this;}

  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet = false;

    GitConfigForUpdate m_gitConfig;
    bool m_gitConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
