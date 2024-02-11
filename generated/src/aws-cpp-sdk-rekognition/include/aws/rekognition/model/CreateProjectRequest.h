/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/CustomizationFeature.h>
#include <aws/rekognition/model/ProjectAutoUpdate.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateProjectRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the project to create.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project to create.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project to create.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project to create.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project to create.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project to create.</p>
     */
    inline CreateProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project to create.</p>
     */
    inline CreateProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project to create.</p>
     */
    inline CreateProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>Specifies feature that is being customized. If no value is provided
     * CUSTOM_LABELS is used as a default.</p>
     */
    inline const CustomizationFeature& GetFeature() const{ return m_feature; }

    /**
     * <p>Specifies feature that is being customized. If no value is provided
     * CUSTOM_LABELS is used as a default.</p>
     */
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }

    /**
     * <p>Specifies feature that is being customized. If no value is provided
     * CUSTOM_LABELS is used as a default.</p>
     */
    inline void SetFeature(const CustomizationFeature& value) { m_featureHasBeenSet = true; m_feature = value; }

    /**
     * <p>Specifies feature that is being customized. If no value is provided
     * CUSTOM_LABELS is used as a default.</p>
     */
    inline void SetFeature(CustomizationFeature&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }

    /**
     * <p>Specifies feature that is being customized. If no value is provided
     * CUSTOM_LABELS is used as a default.</p>
     */
    inline CreateProjectRequest& WithFeature(const CustomizationFeature& value) { SetFeature(value); return *this;}

    /**
     * <p>Specifies feature that is being customized. If no value is provided
     * CUSTOM_LABELS is used as a default.</p>
     */
    inline CreateProjectRequest& WithFeature(CustomizationFeature&& value) { SetFeature(std::move(value)); return *this;}


    /**
     * <p>Specifies whether automatic retraining should be attempted for the versions
     * of the project. Automatic retraining is done as a best effort. Required argument
     * for Content Moderation. Applicable only to adapters.</p>
     */
    inline const ProjectAutoUpdate& GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>Specifies whether automatic retraining should be attempted for the versions
     * of the project. Automatic retraining is done as a best effort. Required argument
     * for Content Moderation. Applicable only to adapters.</p>
     */
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }

    /**
     * <p>Specifies whether automatic retraining should be attempted for the versions
     * of the project. Automatic retraining is done as a best effort. Required argument
     * for Content Moderation. Applicable only to adapters.</p>
     */
    inline void SetAutoUpdate(const ProjectAutoUpdate& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }

    /**
     * <p>Specifies whether automatic retraining should be attempted for the versions
     * of the project. Automatic retraining is done as a best effort. Required argument
     * for Content Moderation. Applicable only to adapters.</p>
     */
    inline void SetAutoUpdate(ProjectAutoUpdate&& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = std::move(value); }

    /**
     * <p>Specifies whether automatic retraining should be attempted for the versions
     * of the project. Automatic retraining is done as a best effort. Required argument
     * for Content Moderation. Applicable only to adapters.</p>
     */
    inline CreateProjectRequest& WithAutoUpdate(const ProjectAutoUpdate& value) { SetAutoUpdate(value); return *this;}

    /**
     * <p>Specifies whether automatic retraining should be attempted for the versions
     * of the project. Automatic retraining is done as a best effort. Required argument
     * for Content Moderation. Applicable only to adapters.</p>
     */
    inline CreateProjectRequest& WithAutoUpdate(ProjectAutoUpdate&& value) { SetAutoUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    CustomizationFeature m_feature;
    bool m_featureHasBeenSet = false;

    ProjectAutoUpdate m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
