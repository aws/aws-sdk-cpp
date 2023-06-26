/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Object containing source code information that is linked to an application
   * component. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/SourceCodeRepository">AWS
   * API Reference</a></p>
   */
  class SourceCodeRepository
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCodeRepository();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCodeRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCodeRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The branch of the source code. </p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p> The branch of the source code. </p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p> The branch of the source code. </p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p> The branch of the source code. </p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p> The branch of the source code. </p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p> The branch of the source code. </p>
     */
    inline SourceCodeRepository& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p> The branch of the source code. </p>
     */
    inline SourceCodeRepository& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p> The branch of the source code. </p>
     */
    inline SourceCodeRepository& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline SourceCodeRepository& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline SourceCodeRepository& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline SourceCodeRepository& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p> The repository name for the source code. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline SourceCodeRepository& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The repository name for the source code. </p>
     */
    inline SourceCodeRepository& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The repository name for the source code. </p>
     */
    inline SourceCodeRepository& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline const Aws::String& GetVersionControlType() const{ return m_versionControlType; }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline bool VersionControlTypeHasBeenSet() const { return m_versionControlTypeHasBeenSet; }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline void SetVersionControlType(const Aws::String& value) { m_versionControlTypeHasBeenSet = true; m_versionControlType = value; }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline void SetVersionControlType(Aws::String&& value) { m_versionControlTypeHasBeenSet = true; m_versionControlType = std::move(value); }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline void SetVersionControlType(const char* value) { m_versionControlTypeHasBeenSet = true; m_versionControlType.assign(value); }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline SourceCodeRepository& WithVersionControlType(const Aws::String& value) { SetVersionControlType(value); return *this;}

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline SourceCodeRepository& WithVersionControlType(Aws::String&& value) { SetVersionControlType(std::move(value)); return *this;}

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline SourceCodeRepository& WithVersionControlType(const char* value) { SetVersionControlType(value); return *this;}

  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_versionControlType;
    bool m_versionControlTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
