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


    ///@{
    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline const EdgePresetDeploymentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EdgePresetDeploymentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EdgePresetDeploymentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EdgePresetDeploymentOutput& WithType(const EdgePresetDeploymentType& value) { SetType(value); return *this;}
    inline EdgePresetDeploymentOutput& WithType(EdgePresetDeploymentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline const Aws::String& GetArtifact() const{ return m_artifact; }
    inline bool ArtifactHasBeenSet() const { return m_artifactHasBeenSet; }
    inline void SetArtifact(const Aws::String& value) { m_artifactHasBeenSet = true; m_artifact = value; }
    inline void SetArtifact(Aws::String&& value) { m_artifactHasBeenSet = true; m_artifact = std::move(value); }
    inline void SetArtifact(const char* value) { m_artifactHasBeenSet = true; m_artifact.assign(value); }
    inline EdgePresetDeploymentOutput& WithArtifact(const Aws::String& value) { SetArtifact(value); return *this;}
    inline EdgePresetDeploymentOutput& WithArtifact(Aws::String&& value) { SetArtifact(std::move(value)); return *this;}
    inline EdgePresetDeploymentOutput& WithArtifact(const char* value) { SetArtifact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployable resource.</p>
     */
    inline const EdgePresetDeploymentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EdgePresetDeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EdgePresetDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EdgePresetDeploymentOutput& WithStatus(const EdgePresetDeploymentStatus& value) { SetStatus(value); return *this;}
    inline EdgePresetDeploymentOutput& WithStatus(EdgePresetDeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline EdgePresetDeploymentOutput& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline EdgePresetDeploymentOutput& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline EdgePresetDeploymentOutput& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
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
