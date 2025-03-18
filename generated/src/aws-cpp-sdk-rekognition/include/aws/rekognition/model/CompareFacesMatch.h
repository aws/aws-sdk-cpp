/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ComparedFace.h>
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
   * <p>Provides information about a face in a target image that matches the source
   * image face analyzed by <code>CompareFaces</code>. The <code>Face</code> property
   * contains the bounding box of the face in the target image. The
   * <code>Similarity</code> property is the confidence that the source image face
   * matches the face in the bounding box.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CompareFacesMatch">AWS
   * API Reference</a></p>
   */
  class CompareFacesMatch
  {
  public:
    AWS_REKOGNITION_API CompareFacesMatch() = default;
    AWS_REKOGNITION_API CompareFacesMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CompareFacesMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Level of confidence that the faces match.</p>
     */
    inline double GetSimilarity() const { return m_similarity; }
    inline bool SimilarityHasBeenSet() const { return m_similarityHasBeenSet; }
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }
    inline CompareFacesMatch& WithSimilarity(double value) { SetSimilarity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides face metadata (bounding box and confidence that the bounding box
     * actually contains a face).</p>
     */
    inline const ComparedFace& GetFace() const { return m_face; }
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }
    template<typename FaceT = ComparedFace>
    void SetFace(FaceT&& value) { m_faceHasBeenSet = true; m_face = std::forward<FaceT>(value); }
    template<typename FaceT = ComparedFace>
    CompareFacesMatch& WithFace(FaceT&& value) { SetFace(std::forward<FaceT>(value)); return *this;}
    ///@}
  private:

    double m_similarity{0.0};
    bool m_similarityHasBeenSet = false;

    ComparedFace m_face;
    bool m_faceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
