/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectFacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectFaces"; }

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
    DetectFacesRequest& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of facial attributes you want to be returned. A <code>DEFAULT</code>
     * subset of facial attributes - <code>BoundingBox</code>, <code>Confidence</code>,
     * <code>Pose</code>, <code>Quality</code>, and <code>Landmarks</code> - will
     * always be returned. You can request for specific facial attributes (in addition
     * to the default list) - by using [<code>"DEFAULT", "FACE_OCCLUDED"</code>] or
     * just [<code>"FACE_OCCLUDED"</code>]. You can request for all facial attributes
     * by using [<code>"ALL"]</code>. Requesting more attributes may increase response
     * time.</p> <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service
     * uses a logical "AND" operator to determine which attributes to return (in this
     * case, all attributes). </p> <p>Note that while the FaceOccluded and EyeDirection
     * attributes are supported when using <code>DetectFaces</code>, they aren't
     * supported when analyzing videos with <code>StartFaceDetection</code> and
     * <code>GetFaceDetection</code>.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    DetectFacesRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline DetectFacesRequest& AddAttributes(Attribute value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    ///@}
  private:

    Image m_image;
    bool m_imageHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
