/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/ProjectStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/CustomizationFeature.h>
#include <aws/rekognition/model/ProjectAutoUpdate.h>
#include <aws/rekognition/model/DatasetMetadata.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A description of an Amazon Rekognition Custom Labels project. For more
   * information, see <a>DescribeProjects</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProjectDescription">AWS
   * API Reference</a></p>
   */
  class ProjectDescription
  {
  public:
    AWS_REKOGNITION_API ProjectDescription() = default;
    AWS_REKOGNITION_API ProjectDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProjectDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    ProjectDescription& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    ProjectDescription& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the project.</p>
     */
    inline ProjectStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProjectStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProjectDescription& WithStatus(ProjectStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline const Aws::Vector<DatasetMetadata>& GetDatasets() const { return m_datasets; }
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }
    template<typename DatasetsT = Aws::Vector<DatasetMetadata>>
    void SetDatasets(DatasetsT&& value) { m_datasetsHasBeenSet = true; m_datasets = std::forward<DatasetsT>(value); }
    template<typename DatasetsT = Aws::Vector<DatasetMetadata>>
    ProjectDescription& WithDatasets(DatasetsT&& value) { SetDatasets(std::forward<DatasetsT>(value)); return *this;}
    template<typename DatasetsT = DatasetMetadata>
    ProjectDescription& AddDatasets(DatasetsT&& value) { m_datasetsHasBeenSet = true; m_datasets.emplace_back(std::forward<DatasetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the project that is being customized.</p>
     */
    inline CustomizationFeature GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(CustomizationFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline ProjectDescription& WithFeature(CustomizationFeature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic retraining will be attempted for the versions of
     * the project. Applies only to adapters. </p>
     */
    inline ProjectAutoUpdate GetAutoUpdate() const { return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(ProjectAutoUpdate value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline ProjectDescription& WithAutoUpdate(ProjectAutoUpdate value) { SetAutoUpdate(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    ProjectStatus m_status{ProjectStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<DatasetMetadata> m_datasets;
    bool m_datasetsHasBeenSet = false;

    CustomizationFeature m_feature{CustomizationFeature::NOT_SET};
    bool m_featureHasBeenSet = false;

    ProjectAutoUpdate m_autoUpdate{ProjectAutoUpdate::NOT_SET};
    bool m_autoUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
