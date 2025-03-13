/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/rekognition/model/FaceDetail.h>
#include <aws/rekognition/model/KnownGender.h>
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
   * <p>Information about a recognized celebrity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CelebrityDetail">AWS
   * API Reference</a></p>
   */
  class CelebrityDetail
  {
  public:
    AWS_REKOGNITION_API CelebrityDetail() = default;
    AWS_REKOGNITION_API CelebrityDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CelebrityDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const { return m_urls; }
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }
    template<typename UrlsT = Aws::Vector<Aws::String>>
    void SetUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls = std::forward<UrlsT>(value); }
    template<typename UrlsT = Aws::Vector<Aws::String>>
    CelebrityDetail& WithUrls(UrlsT&& value) { SetUrls(std::forward<UrlsT>(value)); return *this;}
    template<typename UrlsT = Aws::String>
    CelebrityDetail& AddUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls.emplace_back(std::forward<UrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the celebrity.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CelebrityDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CelebrityDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity. </p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline CelebrityDetail& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    CelebrityDetail& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline const FaceDetail& GetFace() const { return m_face; }
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }
    template<typename FaceT = FaceDetail>
    void SetFace(FaceT&& value) { m_faceHasBeenSet = true; m_face = std::forward<FaceT>(value); }
    template<typename FaceT = FaceDetail>
    CelebrityDetail& WithFace(FaceT&& value) { SetFace(std::forward<FaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the known gender for the celebrity.</p>
     */
    inline const KnownGender& GetKnownGender() const { return m_knownGender; }
    inline bool KnownGenderHasBeenSet() const { return m_knownGenderHasBeenSet; }
    template<typename KnownGenderT = KnownGender>
    void SetKnownGender(KnownGenderT&& value) { m_knownGenderHasBeenSet = true; m_knownGender = std::forward<KnownGenderT>(value); }
    template<typename KnownGenderT = KnownGender>
    CelebrityDetail& WithKnownGender(KnownGenderT&& value) { SetKnownGender(std::forward<KnownGenderT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    FaceDetail m_face;
    bool m_faceHasBeenSet = false;

    KnownGender m_knownGender;
    bool m_knownGenderHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
