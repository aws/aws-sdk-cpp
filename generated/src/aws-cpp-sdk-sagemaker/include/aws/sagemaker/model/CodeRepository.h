/**
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
   * <p>A Git repository that SageMaker AI automatically displays to users for
   * cloning in the JupyterServer application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CodeRepository">AWS
   * API Reference</a></p>
   */
  class CodeRepository
  {
  public:
    AWS_SAGEMAKER_API CodeRepository() = default;
    AWS_SAGEMAKER_API CodeRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CodeRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the Git repository.</p>
     */
    inline const Aws::String& GetRepositoryUrl() const { return m_repositoryUrl; }
    inline bool RepositoryUrlHasBeenSet() const { return m_repositoryUrlHasBeenSet; }
    template<typename RepositoryUrlT = Aws::String>
    void SetRepositoryUrl(RepositoryUrlT&& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = std::forward<RepositoryUrlT>(value); }
    template<typename RepositoryUrlT = Aws::String>
    CodeRepository& WithRepositoryUrl(RepositoryUrlT&& value) { SetRepositoryUrl(std::forward<RepositoryUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryUrl;
    bool m_repositoryUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
