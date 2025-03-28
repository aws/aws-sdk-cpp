﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <aws/rekognition/model/HumanLoopConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectModerationLabelsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectModerationLabelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectModerationLabels"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline const Image& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Image>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Image>
    DetectModerationLabelsRequest& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with a confidence level lower than this
     * specified value.</p> <p>If you don't specify <code>MinConfidence</code>, the
     * operation returns labels with confidence values greater than or equal to 50
     * percent.</p>
     */
    inline double GetMinConfidence() const { return m_minConfidence; }
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }
    inline DetectModerationLabelsRequest& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets up the configuration for human evaluation, including the FlowDefinition
     * the image will be sent to.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const { return m_humanLoopConfig; }
    inline bool HumanLoopConfigHasBeenSet() const { return m_humanLoopConfigHasBeenSet; }
    template<typename HumanLoopConfigT = HumanLoopConfig>
    void SetHumanLoopConfig(HumanLoopConfigT&& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = std::forward<HumanLoopConfigT>(value); }
    template<typename HumanLoopConfigT = HumanLoopConfig>
    DetectModerationLabelsRequest& WithHumanLoopConfig(HumanLoopConfigT&& value) { SetHumanLoopConfig(std::forward<HumanLoopConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the custom adapter. Expects the ProjectVersionArn as a value.
     * Use the CreateProject or CreateProjectVersion APIs to create a custom
     * adapter.</p>
     */
    inline const Aws::String& GetProjectVersion() const { return m_projectVersion; }
    inline bool ProjectVersionHasBeenSet() const { return m_projectVersionHasBeenSet; }
    template<typename ProjectVersionT = Aws::String>
    void SetProjectVersion(ProjectVersionT&& value) { m_projectVersionHasBeenSet = true; m_projectVersion = std::forward<ProjectVersionT>(value); }
    template<typename ProjectVersionT = Aws::String>
    DetectModerationLabelsRequest& WithProjectVersion(ProjectVersionT&& value) { SetProjectVersion(std::forward<ProjectVersionT>(value)); return *this;}
    ///@}
  private:

    Image m_image;
    bool m_imageHasBeenSet = false;

    double m_minConfidence{0.0};
    bool m_minConfidenceHasBeenSet = false;

    HumanLoopConfig m_humanLoopConfig;
    bool m_humanLoopConfigHasBeenSet = false;

    Aws::String m_projectVersion;
    bool m_projectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
