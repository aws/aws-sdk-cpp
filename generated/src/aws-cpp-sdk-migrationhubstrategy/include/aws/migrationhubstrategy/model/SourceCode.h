/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/VersionControl.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/SourceCode">AWS
   * API Reference</a></p>
   */
  class SourceCode
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCode();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The repository name for the source code. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p> The repository name for the source code. </p>
     */
    inline SourceCode& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p> The repository name for the source code. </p>
     */
    inline SourceCode& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p> The repository name for the source code. </p>
     */
    inline SourceCode& WithLocation(const char* value) { SetLocation(value); return *this;}


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
    inline SourceCode& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline SourceCode& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline SourceCode& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p> The branch of the source code. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p> The branch of the source code. </p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p> The branch of the source code. </p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p> The branch of the source code. </p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p> The branch of the source code. </p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p> The branch of the source code. </p>
     */
    inline SourceCode& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p> The branch of the source code. </p>
     */
    inline SourceCode& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p> The branch of the source code. </p>
     */
    inline SourceCode& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline const VersionControl& GetVersionControl() const{ return m_versionControl; }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline bool VersionControlHasBeenSet() const { return m_versionControlHasBeenSet; }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline void SetVersionControl(const VersionControl& value) { m_versionControlHasBeenSet = true; m_versionControl = value; }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline void SetVersionControl(VersionControl&& value) { m_versionControlHasBeenSet = true; m_versionControl = std::move(value); }

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline SourceCode& WithVersionControl(const VersionControl& value) { SetVersionControl(value); return *this;}

    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline SourceCode& WithVersionControl(VersionControl&& value) { SetVersionControl(std::move(value)); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    VersionControl m_versionControl;
    bool m_versionControlHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
