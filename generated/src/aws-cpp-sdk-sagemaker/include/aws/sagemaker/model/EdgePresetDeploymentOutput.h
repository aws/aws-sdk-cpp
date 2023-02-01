/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EdgePresetDeploymentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgePresetDeploymentStatus.h>
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
   * <p>The output of a SageMaker Edge Manager deployable resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgePresetDeploymentOutput">AWS
   * API Reference</a></p>
   */
  class EdgePresetDeploymentOutput
  {
  public:
    AWS_SAGEMAKER_API EdgePresetDeploymentOutput();
    AWS_SAGEMAKER_API EdgePresetDeploymentOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgePresetDeploymentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline const EdgePresetDeploymentType& GetType() const{ return m_type; }

    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline void SetType(const EdgePresetDeploymentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline void SetType(EdgePresetDeploymentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline EdgePresetDeploymentOutput& WithType(const EdgePresetDeploymentType& value) { SetType(value); return *this;}

    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline EdgePresetDeploymentOutput& WithType(EdgePresetDeploymentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline const Aws::String& GetArtifact() const{ return m_artifact; }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline bool ArtifactHasBeenSet() const { return m_artifactHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline void SetArtifact(const Aws::String& value) { m_artifactHasBeenSet = true; m_artifact = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline void SetArtifact(Aws::String&& value) { m_artifactHasBeenSet = true; m_artifact = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline void SetArtifact(const char* value) { m_artifactHasBeenSet = true; m_artifact.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithArtifact(const Aws::String& value) { SetArtifact(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithArtifact(Aws::String&& value) { SetArtifact(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithArtifact(const char* value) { SetArtifact(value); return *this;}


    /**
     * <p>The status of the deployable resource.</p>
     */
    inline const EdgePresetDeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deployable resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the deployable resource.</p>
     */
    inline void SetStatus(const EdgePresetDeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the deployable resource.</p>
     */
    inline void SetStatus(EdgePresetDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the deployable resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithStatus(const EdgePresetDeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployable resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithStatus(EdgePresetDeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline EdgePresetDeploymentOutput& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    EdgePresetDeploymentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_artifact;
    bool m_artifactHasBeenSet = false;

    EdgePresetDeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
