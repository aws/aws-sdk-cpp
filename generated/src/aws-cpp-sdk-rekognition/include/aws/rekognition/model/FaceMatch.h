/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/Face.h>
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
   * <p>Provides face metadata. In addition, it also provides the confidence in the
   * match of this face with the input face.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceMatch">AWS
   * API Reference</a></p>
   */
  class FaceMatch
  {
  public:
    AWS_REKOGNITION_API FaceMatch() = default;
    AWS_REKOGNITION_API FaceMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Confidence in the match of this face with the input face.</p>
     */
    inline double GetSimilarity() const { return m_similarity; }
    inline bool SimilarityHasBeenSet() const { return m_similarityHasBeenSet; }
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }
    inline FaceMatch& WithSimilarity(double value) { SetSimilarity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the source image, and external image ID that you assigned.</p>
     */
    inline const Face& GetFace() const { return m_face; }
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }
    template<typename FaceT = Face>
    void SetFace(FaceT&& value) { m_faceHasBeenSet = true; m_face = std::forward<FaceT>(value); }
    template<typename FaceT = Face>
    FaceMatch& WithFace(FaceT&& value) { SetFace(std::forward<FaceT>(value)); return *this;}
    ///@}
  private:

    double m_similarity{0.0};
    bool m_similarityHasBeenSet = false;

    Face m_face;
    bool m_faceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
