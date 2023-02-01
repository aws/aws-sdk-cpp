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
   * <p>A Git repository that SageMaker automatically displays to users for cloning
   * in the JupyterServer application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CodeRepository">AWS
   * API Reference</a></p>
   */
  class CodeRepository
  {
  public:
    AWS_SAGEMAKER_API CodeRepository();
    AWS_SAGEMAKER_API CodeRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CodeRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the Git repository.</p>
     */
    inline const Aws::String& GetRepositoryUrl() const{ return m_repositoryUrl; }

    /**
     * <p>The URL of the Git repository.</p>
     */
    inline bool RepositoryUrlHasBeenSet() const { return m_repositoryUrlHasBeenSet; }

    /**
     * <p>The URL of the Git repository.</p>
     */
    inline void SetRepositoryUrl(const Aws::String& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = value; }

    /**
     * <p>The URL of the Git repository.</p>
     */
    inline void SetRepositoryUrl(Aws::String&& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = std::move(value); }

    /**
     * <p>The URL of the Git repository.</p>
     */
    inline void SetRepositoryUrl(const char* value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl.assign(value); }

    /**
     * <p>The URL of the Git repository.</p>
     */
    inline CodeRepository& WithRepositoryUrl(const Aws::String& value) { SetRepositoryUrl(value); return *this;}

    /**
     * <p>The URL of the Git repository.</p>
     */
    inline CodeRepository& WithRepositoryUrl(Aws::String&& value) { SetRepositoryUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Git repository.</p>
     */
    inline CodeRepository& WithRepositoryUrl(const char* value) { SetRepositoryUrl(value); return *this;}

  private:

    Aws::String m_repositoryUrl;
    bool m_repositoryUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
