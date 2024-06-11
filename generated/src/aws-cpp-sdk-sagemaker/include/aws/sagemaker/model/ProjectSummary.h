/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ProjectStatus.h>
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
   * <p>Information about a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class ProjectSummary
  {
  public:
    AWS_SAGEMAKER_API ProjectSummary();
    AWS_SAGEMAKER_API ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline ProjectSummary& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline ProjectSummary& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline ProjectSummary& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = value; }
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::move(value); }
    inline void SetProjectDescription(const char* value) { m_projectDescriptionHasBeenSet = true; m_projectDescription.assign(value); }
    inline ProjectSummary& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}
    inline ProjectSummary& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}
    inline ProjectSummary& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline ProjectSummary& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline ProjectSummary& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline ProjectSummary& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline ProjectSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline ProjectSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline ProjectSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ProjectSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ProjectSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline const ProjectStatus& GetProjectStatus() const{ return m_projectStatus; }
    inline bool ProjectStatusHasBeenSet() const { return m_projectStatusHasBeenSet; }
    inline void SetProjectStatus(const ProjectStatus& value) { m_projectStatusHasBeenSet = true; m_projectStatus = value; }
    inline void SetProjectStatus(ProjectStatus&& value) { m_projectStatusHasBeenSet = true; m_projectStatus = std::move(value); }
    inline ProjectSummary& WithProjectStatus(const ProjectStatus& value) { SetProjectStatus(value); return *this;}
    inline ProjectSummary& WithProjectStatus(ProjectStatus&& value) { SetProjectStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ProjectStatus m_projectStatus;
    bool m_projectStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
