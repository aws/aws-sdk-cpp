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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCode() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SourceCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The repository name for the source code. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    SourceCode& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    SourceCode& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The branch of the source code. </p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    SourceCode& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of repository to use for the source code. </p>
     */
    inline VersionControl GetVersionControl() const { return m_versionControl; }
    inline bool VersionControlHasBeenSet() const { return m_versionControlHasBeenSet; }
    inline void SetVersionControl(VersionControl value) { m_versionControlHasBeenSet = true; m_versionControl = value; }
    inline SourceCode& WithVersionControl(VersionControl value) { SetVersionControl(value); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    VersionControl m_versionControl{VersionControl::NOT_SET};
    bool m_versionControlHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
