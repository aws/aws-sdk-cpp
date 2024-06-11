﻿/**
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
    AWS_REKOGNITION_API CelebrityDetail();
    AWS_REKOGNITION_API CelebrityDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CelebrityDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const{ return m_urls; }
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }
    inline void SetUrls(const Aws::Vector<Aws::String>& value) { m_urlsHasBeenSet = true; m_urls = value; }
    inline void SetUrls(Aws::Vector<Aws::String>&& value) { m_urlsHasBeenSet = true; m_urls = std::move(value); }
    inline CelebrityDetail& WithUrls(const Aws::Vector<Aws::String>& value) { SetUrls(value); return *this;}
    inline CelebrityDetail& WithUrls(Aws::Vector<Aws::String>&& value) { SetUrls(std::move(value)); return *this;}
    inline CelebrityDetail& AddUrls(const Aws::String& value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }
    inline CelebrityDetail& AddUrls(Aws::String&& value) { m_urlsHasBeenSet = true; m_urls.push_back(std::move(value)); return *this; }
    inline CelebrityDetail& AddUrls(const char* value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the celebrity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CelebrityDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CelebrityDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CelebrityDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CelebrityDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CelebrityDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CelebrityDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity. </p>
     */
    inline double GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline CelebrityDetail& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline CelebrityDetail& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}
    inline CelebrityDetail& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline const FaceDetail& GetFace() const{ return m_face; }
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }
    inline void SetFace(const FaceDetail& value) { m_faceHasBeenSet = true; m_face = value; }
    inline void SetFace(FaceDetail&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }
    inline CelebrityDetail& WithFace(const FaceDetail& value) { SetFace(value); return *this;}
    inline CelebrityDetail& WithFace(FaceDetail&& value) { SetFace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the known gender for the celebrity.</p>
     */
    inline const KnownGender& GetKnownGender() const{ return m_knownGender; }
    inline bool KnownGenderHasBeenSet() const { return m_knownGenderHasBeenSet; }
    inline void SetKnownGender(const KnownGender& value) { m_knownGenderHasBeenSet = true; m_knownGender = value; }
    inline void SetKnownGender(KnownGender&& value) { m_knownGenderHasBeenSet = true; m_knownGender = std::move(value); }
    inline CelebrityDetail& WithKnownGender(const KnownGender& value) { SetKnownGender(value); return *this;}
    inline CelebrityDetail& WithKnownGender(KnownGender&& value) { SetKnownGender(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    double m_confidence;
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
