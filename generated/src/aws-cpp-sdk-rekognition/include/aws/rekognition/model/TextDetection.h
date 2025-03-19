/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/TextTypes.h>
#include <aws/rekognition/model/Geometry.h>
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
   * <p>Information about a word or line of text detected by <a>DetectText</a>.</p>
   * <p>The <code>DetectedText</code> field contains the text that Amazon Rekognition
   * detected in the image. </p> <p>Every word and line has an identifier
   * (<code>Id</code>). Each word belongs to a line and has a parent identifier
   * (<code>ParentId</code>) that identifies the line of text in which the word
   * appears. The word <code>Id</code> is also an index for the word within a line of
   * words. </p> <p>For more information, see Detecting text in the Amazon
   * Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TextDetection">AWS
   * API Reference</a></p>
   */
  class TextDetection
  {
  public:
    AWS_REKOGNITION_API TextDetection() = default;
    AWS_REKOGNITION_API TextDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TextDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline const Aws::String& GetDetectedText() const { return m_detectedText; }
    inline bool DetectedTextHasBeenSet() const { return m_detectedTextHasBeenSet; }
    template<typename DetectedTextT = Aws::String>
    void SetDetectedText(DetectedTextT&& value) { m_detectedTextHasBeenSet = true; m_detectedText = std::forward<DetectedTextT>(value); }
    template<typename DetectedTextT = Aws::String>
    TextDetection& WithDetectedText(DetectedTextT&& value) { SetDetectedText(std::forward<DetectedTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of text that was detected.</p>
     */
    inline TextTypes GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TextTypes value) { m_typeHasBeenSet = true; m_type = value; }
    inline TextDetection& WithType(TextTypes value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the detected text. The identifier is only unique for a
     * single call to <code>DetectText</code>. </p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline TextDetection& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Parent identifier for the detected text identified by the value of
     * <code>ID</code>. If the type of detected text is <code>LINE</code>, the value of
     * <code>ParentId</code> is <code>Null</code>. </p>
     */
    inline int GetParentId() const { return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    inline void SetParentId(int value) { m_parentIdHasBeenSet = true; m_parentId = value; }
    inline TextDetection& WithParentId(int value) { SetParentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the detected
     * text and the accuracy of the geometry points around the detected text.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline TextDetection& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the detected text on the image. Includes an axis aligned
     * coarse bounding box surrounding the text and a finer grain polygon for more
     * accurate spatial information.</p>
     */
    inline const Geometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = Geometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = Geometry>
    TextDetection& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectedText;
    bool m_detectedTextHasBeenSet = false;

    TextTypes m_type{TextTypes::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;

    int m_parentId{0};
    bool m_parentIdHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
