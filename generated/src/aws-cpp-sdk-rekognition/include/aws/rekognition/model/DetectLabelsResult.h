/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DetectLabelsImageProperties.h>
#include <aws/rekognition/model/Label.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class DetectLabelsResult
  {
  public:
    AWS_REKOGNITION_API DetectLabelsResult() = default;
    AWS_REKOGNITION_API DetectLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline const Aws::Vector<Label>& GetLabels() const { return m_labels; }
    template<typename LabelsT = Aws::Vector<Label>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Label>>
    DetectLabelsResult& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Label>
    DetectLabelsResult& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline OrientationCorrection GetOrientationCorrection() const { return m_orientationCorrection; }
    inline void SetOrientationCorrection(OrientationCorrection value) { m_orientationCorrectionHasBeenSet = true; m_orientationCorrection = value; }
    inline DetectLabelsResult& WithOrientationCorrection(OrientationCorrection value) { SetOrientationCorrection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline const Aws::String& GetLabelModelVersion() const { return m_labelModelVersion; }
    template<typename LabelModelVersionT = Aws::String>
    void SetLabelModelVersion(LabelModelVersionT&& value) { m_labelModelVersionHasBeenSet = true; m_labelModelVersion = std::forward<LabelModelVersionT>(value); }
    template<typename LabelModelVersionT = Aws::String>
    DetectLabelsResult& WithLabelModelVersion(LabelModelVersionT&& value) { SetLabelModelVersion(std::forward<LabelModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the properties of the input image, such as brightness,
     * sharpness, contrast, and dominant colors.</p>
     */
    inline const DetectLabelsImageProperties& GetImageProperties() const { return m_imageProperties; }
    template<typename ImagePropertiesT = DetectLabelsImageProperties>
    void SetImageProperties(ImagePropertiesT&& value) { m_imagePropertiesHasBeenSet = true; m_imageProperties = std::forward<ImagePropertiesT>(value); }
    template<typename ImagePropertiesT = DetectLabelsImageProperties>
    DetectLabelsResult& WithImageProperties(ImagePropertiesT&& value) { SetImageProperties(std::forward<ImagePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectLabelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Label> m_labels;
    bool m_labelsHasBeenSet = false;

    OrientationCorrection m_orientationCorrection{OrientationCorrection::NOT_SET};
    bool m_orientationCorrectionHasBeenSet = false;

    Aws::String m_labelModelVersion;
    bool m_labelModelVersionHasBeenSet = false;

    DetectLabelsImageProperties m_imageProperties;
    bool m_imagePropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
