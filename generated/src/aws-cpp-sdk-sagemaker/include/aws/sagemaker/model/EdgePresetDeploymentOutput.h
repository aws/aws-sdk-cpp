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
    AWS_SAGEMAKER_API EdgePresetDeploymentOutput() = default;
    AWS_SAGEMAKER_API EdgePresetDeploymentOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgePresetDeploymentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment type created by SageMaker Edge Manager. Currently only
     * supports Amazon Web Services IoT Greengrass Version 2 components.</p>
     */
    inline EdgePresetDeploymentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EdgePresetDeploymentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EdgePresetDeploymentOutput& WithType(EdgePresetDeploymentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the generated deployable resource.</p>
     */
    inline const Aws::String& GetArtifact() const { return m_artifact; }
    inline bool ArtifactHasBeenSet() const { return m_artifactHasBeenSet; }
    template<typename ArtifactT = Aws::String>
    void SetArtifact(ArtifactT&& value) { m_artifactHasBeenSet = true; m_artifact = std::forward<ArtifactT>(value); }
    template<typename ArtifactT = Aws::String>
    EdgePresetDeploymentOutput& WithArtifact(ArtifactT&& value) { SetArtifact(std::forward<ArtifactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployable resource.</p>
     */
    inline EdgePresetDeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EdgePresetDeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EdgePresetDeploymentOutput& WithStatus(EdgePresetDeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a message describing the status of the deployed resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    EdgePresetDeploymentOutput& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    EdgePresetDeploymentType m_type{EdgePresetDeploymentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_artifact;
    bool m_artifactHasBeenSet = false;

    EdgePresetDeploymentStatus m_status{EdgePresetDeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
