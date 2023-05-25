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
    AWS_SERVICECATALOG_API CodeStarParameters();
    AWS_SERVICECATALOG_API CodeStarParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API CodeStarParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline CodeStarParameters& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline CodeStarParameters& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The CodeStar ARN, which is the connection between Service Catalog and the
     * external repository.</p>
     */
    inline CodeStarParameters& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline CodeStarParameters& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline CodeStarParameters& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The specific repository where the product’s artifact-to-be-synced resides,
     * formatted as "Account/Repo." </p>
     */
    inline CodeStarParameters& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline CodeStarParameters& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline CodeStarParameters& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The specific branch where the artifact resides. </p>
     */
    inline CodeStarParameters& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline const Aws::String& GetArtifactPath() const{ return m_artifactPath; }

    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline bool ArtifactPathHasBeenSet() const { return m_artifactPathHasBeenSet; }

    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline void SetArtifactPath(const Aws::String& value) { m_artifactPathHasBeenSet = true; m_artifactPath = value; }

    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline void SetArtifactPath(Aws::String&& value) { m_artifactPathHasBeenSet = true; m_artifactPath = std::move(value); }

    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline void SetArtifactPath(const char* value) { m_artifactPathHasBeenSet = true; m_artifactPath.assign(value); }

    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline CodeStarParameters& WithArtifactPath(const Aws::String& value) { SetArtifactPath(value); return *this;}

    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline CodeStarParameters& WithArtifactPath(Aws::String&& value) { SetArtifactPath(std::move(value)); return *this;}

    /**
     * <p>The absolute path wehre the artifact resides within the repo and branch,
     * formatted as "folder/file.json." </p>
     */
    inline CodeStarParameters& WithArtifactPath(const char* value) { SetArtifactPath(value); return *this;}

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
