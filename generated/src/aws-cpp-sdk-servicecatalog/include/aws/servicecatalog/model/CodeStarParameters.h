/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The subtype containing details about the Codestar connection
   * <code>Type</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CodeStarParameters">AWS
   * API Reference</a></p>
   */
  class CodeStarParameters
  {
  public:
    AWS_SERVICECATALOG_API CodeStarParameters() = default;
    AWS_SERVICECATALOG_API CodeStarParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API CodeStarParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    CodeStarParameters& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    CodeStarParameters& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    CodeStarParameters& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline const Aws::String& GetArtifactPath() const { return m_artifactPath; }
    inline bool ArtifactPathHasBeenSet() const { return m_artifactPathHasBeenSet; }
    template<typename ArtifactPathT = Aws::String>
    void SetArtifactPath(ArtifactPathT&& value) { m_artifactPathHasBeenSet = true; m_artifactPath = std::forward<ArtifactPathT>(value); }
    template<typename ArtifactPathT = Aws::String>
    CodeStarParameters& WithArtifactPath(ArtifactPathT&& value) { SetArtifactPath(std::forward<ArtifactPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_artifactPath;
    bool m_artifactPathHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
