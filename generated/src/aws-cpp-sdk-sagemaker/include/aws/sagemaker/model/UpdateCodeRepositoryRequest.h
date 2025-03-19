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
    AWS_SAGEMAKER_API UpdateCodeRepositoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCodeRepository"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Git repository to update.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const { return m_codeRepositoryName; }
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }
    template<typename CodeRepositoryNameT = Aws::String>
    void SetCodeRepositoryName(CodeRepositoryNameT&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::forward<CodeRepositoryNameT>(value); }
    template<typename CodeRepositoryNameT = Aws::String>
    UpdateCodeRepositoryRequest& WithCodeRepositoryName(CodeRepositoryNameT&& value) { SetCodeRepositoryName(std::forward<CodeRepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the git repository, including the URL and the Amazon
     * Resource Name (ARN) of the Amazon Web Services Secrets Manager secret that
     * contains the credentials used to access the repository. The secret must have a
     * staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline const GitConfigForUpdate& GetGitConfig() const { return m_gitConfig; }
    inline bool GitConfigHasBeenSet() const { return m_gitConfigHasBeenSet; }
    template<typename GitConfigT = GitConfigForUpdate>
    void SetGitConfig(GitConfigT&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::forward<GitConfigT>(value); }
    template<typename GitConfigT = GitConfigForUpdate>
    UpdateCodeRepositoryRequest& WithGitConfig(GitConfigT&& value) { SetGitConfig(std::forward<GitConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet = false;

    GitConfigForUpdate m_gitConfig;
    bool m_gitConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
