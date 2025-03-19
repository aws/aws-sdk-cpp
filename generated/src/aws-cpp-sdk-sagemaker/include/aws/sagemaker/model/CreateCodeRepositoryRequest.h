/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/GitConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateCodeRepositoryRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateCodeRepositoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCodeRepository"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const { return m_codeRepositoryName; }
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }
    template<typename CodeRepositoryNameT = Aws::String>
    void SetCodeRepositoryName(CodeRepositoryNameT&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::forward<CodeRepositoryNameT>(value); }
    template<typename CodeRepositoryNameT = Aws::String>
    CreateCodeRepositoryRequest& WithCodeRepositoryName(CodeRepositoryNameT&& value) { SetCodeRepositoryName(std::forward<CodeRepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about the repository, including the URL where the
     * repository is located, the default branch, and credentials to use to access the
     * repository.</p>
     */
    inline const GitConfig& GetGitConfig() const { return m_gitConfig; }
    inline bool GitConfigHasBeenSet() const { return m_gitConfigHasBeenSet; }
    template<typename GitConfigT = GitConfig>
    void SetGitConfig(GitConfigT&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::forward<GitConfigT>(value); }
    template<typename GitConfigT = GitConfig>
    CreateCodeRepositoryRequest& WithGitConfig(GitConfigT&& value) { SetGitConfig(std::forward<GitConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCodeRepositoryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCodeRepositoryRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet = false;

    GitConfig m_gitConfig;
    bool m_gitConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
