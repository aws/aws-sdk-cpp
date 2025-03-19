/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the build input source code for this build
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectSource">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectSource
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectSource() = default;
    AWS_SECURITYHUB_API AwsCodeBuildProjectSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values are:</p> <ul> <li> <p> <code>BITBUCKET</code> - The source code is in a
     * Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code> - The source
     * code is in an CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code> - The source code settings are specified in the source
     * action of a pipeline in CodePipeline.</p> </li> <li> <p> <code>GITHUB</code> -
     * The source code is in a GitHub repository.</p> </li> <li> <p>
     * <code>GITHUB_ENTERPRISE</code> - The source code is in a GitHub Enterprise
     * repository.</p> </li> <li> <p> <code>NO_SOURCE</code> - The project does not
     * have input source code.</p> </li> <li> <p> <code>S3</code> - The source code is
     * in an S3 input bucket. </p> </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsCodeBuildProjectSource& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location of the source code to be built.</p> <p>Valid
     * values include:</p> <ul> <li> <p>For source code settings that are specified in
     * the source action of a pipeline in CodePipeline, location should not be
     * specified. If it is specified, CodePipeline ignores it. This is because
     * CodePipeline uses the settings in a pipeline's source action instead of this
     * value.</p> </li> <li> <p>For source code in an CodeCommit repository, the HTTPS
     * clone URL to the repository that contains the source code and the build spec
     * file (for example,
     * <code>https://git-codecommit.region-ID.amazonaws.com/v1/repos/repo-name</code>
     * ).</p> </li> <li> <p>For source code in an S3 input bucket, one of the
     * following.</p> <ul> <li> <p>The path to the ZIP file that contains the source
     * code (for example, <code>bucket-name/path/to/object-name.zip</code>).</p> </li>
     * <li> <p> The path to the folder that contains the source code (for example,
     * <code>bucket-name/path/to/source-code/folder/</code>).</p> </li> </ul> </li>
     * <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec file.</p> </li> <li>
     * <p>For source code in a Bitbucket repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec file. </p> </li> </ul>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    AwsCodeBuildProjectSource& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Git clone depth for the build project.</p>
     */
    inline int GetGitCloneDepth() const { return m_gitCloneDepth; }
    inline bool GitCloneDepthHasBeenSet() const { return m_gitCloneDepthHasBeenSet; }
    inline void SetGitCloneDepth(int value) { m_gitCloneDepthHasBeenSet = true; m_gitCloneDepth = value; }
    inline AwsCodeBuildProjectSource& WithGitCloneDepth(int value) { SetGitCloneDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to ignore SSL warnings while connecting to the project source
     * code.</p>
     */
    inline bool GetInsecureSsl() const { return m_insecureSsl; }
    inline bool InsecureSslHasBeenSet() const { return m_insecureSslHasBeenSet; }
    inline void SetInsecureSsl(bool value) { m_insecureSslHasBeenSet = true; m_insecureSsl = value; }
    inline AwsCodeBuildProjectSource& WithInsecureSsl(bool value) { SetInsecureSsl(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    int m_gitCloneDepth{0};
    bool m_gitCloneDepthHasBeenSet = false;

    bool m_insecureSsl{false};
    bool m_insecureSslHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
