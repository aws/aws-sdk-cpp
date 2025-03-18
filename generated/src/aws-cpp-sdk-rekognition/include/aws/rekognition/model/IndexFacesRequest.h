/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Image.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/QualityFilter.h>
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
  class IndexFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API IndexFacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IndexFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline const Aws::String& GetCollectionId() const { return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    template<typename CollectionIdT = Aws::String>
    void SetCollectionId(CollectionIdT&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::forward<CollectionIdT>(value); }
    template<typename CollectionIdT = Aws::String>
    IndexFacesRequest& WithCollectionId(CollectionIdT&& value) { SetCollectionId(std::forward<CollectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes
     * isn't supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline const Image& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Image>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Image>
    IndexFacesRequest& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID you want to assign to all the faces detected in the image.</p>
     */
    inline const Aws::String& GetExternalImageId() const { return m_externalImageId; }
    inline bool ExternalImageIdHasBeenSet() const { return m_externalImageIdHasBeenSet; }
    template<typename ExternalImageIdT = Aws::String>
    void SetExternalImageId(ExternalImageIdT&& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = std::forward<ExternalImageIdT>(value); }
    template<typename ExternalImageIdT = Aws::String>
    IndexFacesRequest& WithExternalImageId(ExternalImageIdT&& value) { SetExternalImageId(std::forward<ExternalImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of facial attributes you want to be returned. A <code>DEFAULT</code>
     * subset of facial attributes - <code>BoundingBox</code>, <code>Confidence</code>,
     * <code>Pose</code>, <code>Quality</code>, and <code>Landmarks</code> - will
     * always be returned. You can request for specific facial attributes (in addition
     * to the default list) - by using <code>["DEFAULT", "FACE_OCCLUDED"]</code> or
     * just <code>["FACE_OCCLUDED"]</code>. You can request for all facial attributes
     * by using <code>["ALL"]</code>. Requesting more attributes may increase response
     * time.</p> <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service
     * uses a logical AND operator to determine which attributes to return (in this
     * case, all attributes). </p>
     */
    inline const Aws::Vector<Attribute>& GetDetectionAttributes() const { return m_detectionAttributes; }
    inline bool DetectionAttributesHasBeenSet() const { return m_detectionAttributesHasBeenSet; }
    template<typename DetectionAttributesT = Aws::Vector<Attribute>>
    void SetDetectionAttributes(DetectionAttributesT&& value) { m_detectionAttributesHasBeenSet = true; m_detectionAttributes = std::forward<DetectionAttributesT>(value); }
    template<typename DetectionAttributesT = Aws::Vector<Attribute>>
    IndexFacesRequest& WithDetectionAttributes(DetectionAttributesT&& value) { SetDetectionAttributes(std::forward<DetectionAttributesT>(value)); return *this;}
    inline IndexFacesRequest& AddDetectionAttributes(Attribute value) { m_detectionAttributesHasBeenSet = true; m_detectionAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of faces to index. The value of <code>MaxFaces</code> must
     * be greater than or equal to 1. <code>IndexFaces</code> returns no more than 100
     * detected faces in an image, even if you specify a larger value for
     * <code>MaxFaces</code>.</p> <p>If <code>IndexFaces</code> detects more faces than
     * the value of <code>MaxFaces</code>, the faces with the lowest quality are
     * filtered out first. If there are still more faces than the value of
     * <code>MaxFaces</code>, the faces with the smallest bounding boxes are filtered
     * out (up to the number that's needed to satisfy the value of
     * <code>MaxFaces</code>). Information about the unindexed faces is available in
     * the <code>UnindexedFaces</code> array. </p> <p>The faces that are returned by
     * <code>IndexFaces</code> are sorted by the largest face bounding box size to the
     * smallest size, in descending order.</p> <p> <code>MaxFaces</code> can be used
     * with a collection associated with any version of the face model.</p>
     */
    inline int GetMaxFaces() const { return m_maxFaces; }
    inline bool MaxFacesHasBeenSet() const { return m_maxFacesHasBeenSet; }
    inline void SetMaxFaces(int value) { m_maxFacesHasBeenSet = true; m_maxFaces = value; }
    inline IndexFacesRequest& WithMaxFaces(int value) { SetMaxFaces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't indexed. If you specify <code>AUTO</code>,
     * Amazon Rekognition chooses the quality bar. If you specify <code>LOW</code>,
     * <code>MEDIUM</code>, or <code>HIGH</code>, filtering removes all faces that
     * don’t meet the chosen quality bar. The default value is <code>AUTO</code>. The
     * quality bar is based on a variety of common use cases. Low-quality detections
     * can occur for a number of reasons. Some examples are an object that's
     * misidentified as a face, a face that's too blurry, or a face with a pose that's
     * too extreme to use. If you specify <code>NONE</code>, no filtering is performed.
     * </p> <p>To use quality filtering, the collection you are using must be
     * associated with version 3 of the face model or higher.</p>
     */
    inline QualityFilter GetQualityFilter() const { return m_qualityFilter; }
    inline bool QualityFilterHasBeenSet() const { return m_qualityFilterHasBeenSet; }
    inline void SetQualityFilter(QualityFilter value) { m_qualityFilterHasBeenSet = true; m_qualityFilter = value; }
    inline IndexFacesRequest& WithQualityFilter(QualityFilter value) { SetQualityFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Image m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_externalImageId;
    bool m_externalImageIdHasBeenSet = false;

    Aws::Vector<Attribute> m_detectionAttributes;
    bool m_detectionAttributesHasBeenSet = false;

    int m_maxFaces{0};
    bool m_maxFacesHasBeenSet = false;

    QualityFilter m_qualityFilter{QualityFilter::NOT_SET};
    bool m_qualityFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
