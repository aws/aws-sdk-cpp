/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/ComparedFace.h>
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
   * <p>Provides information about a celebrity recognized by the
   * <a>RecognizeCelebrities</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Celebrity">AWS
   * API Reference</a></p>
   */
  class Celebrity
  {
  public:
    AWS_REKOGNITION_API Celebrity();
    AWS_REKOGNITION_API Celebrity(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Celebrity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const{ return m_urls; }

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline void SetUrls(const Aws::Vector<Aws::String>& value) { m_urlsHasBeenSet = true; m_urls = value; }

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline void SetUrls(Aws::Vector<Aws::String>&& value) { m_urlsHasBeenSet = true; m_urls = std::move(value); }

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline Celebrity& WithUrls(const Aws::Vector<Aws::String>& value) { SetUrls(value); return *this;}

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline Celebrity& WithUrls(Aws::Vector<Aws::String>&& value) { SetUrls(std::move(value)); return *this;}

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline Celebrity& AddUrls(const Aws::String& value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline Celebrity& AddUrls(Aws::String&& value) { m_urlsHasBeenSet = true; m_urls.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of URLs pointing to additional information about the celebrity. If
     * there is no additional information about the celebrity, this list is empty.</p>
     */
    inline Celebrity& AddUrls(const char* value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }


    /**
     * <p>The name of the celebrity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline Celebrity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the celebrity.</p>
     */
    inline Celebrity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the celebrity.</p>
     */
    inline Celebrity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline Celebrity& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline Celebrity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the celebrity. </p>
     */
    inline Celebrity& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Provides information about the celebrity's face, such as its location on the
     * image.</p>
     */
    inline const ComparedFace& GetFace() const{ return m_face; }

    /**
     * <p>Provides information about the celebrity's face, such as its location on the
     * image.</p>
     */
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }

    /**
     * <p>Provides information about the celebrity's face, such as its location on the
     * image.</p>
     */
    inline void SetFace(const ComparedFace& value) { m_faceHasBeenSet = true; m_face = value; }

    /**
     * <p>Provides information about the celebrity's face, such as its location on the
     * image.</p>
     */
    inline void SetFace(ComparedFace&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    /**
     * <p>Provides information about the celebrity's face, such as its location on the
     * image.</p>
     */
    inline Celebrity& WithFace(const ComparedFace& value) { SetFace(value); return *this;}

    /**
     * <p>Provides information about the celebrity's face, such as its location on the
     * image.</p>
     */
    inline Celebrity& WithFace(ComparedFace&& value) { SetFace(std::move(value)); return *this;}


    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity.</p>
     */
    inline double GetMatchConfidence() const{ return m_matchConfidence; }

    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity.</p>
     */
    inline bool MatchConfidenceHasBeenSet() const { return m_matchConfidenceHasBeenSet; }

    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity.</p>
     */
    inline void SetMatchConfidence(double value) { m_matchConfidenceHasBeenSet = true; m_matchConfidence = value; }

    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity.</p>
     */
    inline Celebrity& WithMatchConfidence(double value) { SetMatchConfidence(value); return *this;}


    
    inline const KnownGender& GetKnownGender() const{ return m_knownGender; }

    
    inline bool KnownGenderHasBeenSet() const { return m_knownGenderHasBeenSet; }

    
    inline void SetKnownGender(const KnownGender& value) { m_knownGenderHasBeenSet = true; m_knownGender = value; }

    
    inline void SetKnownGender(KnownGender&& value) { m_knownGenderHasBeenSet = true; m_knownGender = std::move(value); }

    
    inline Celebrity& WithKnownGender(const KnownGender& value) { SetKnownGender(value); return *this;}

    
    inline Celebrity& WithKnownGender(KnownGender&& value) { SetKnownGender(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ComparedFace m_face;
    bool m_faceHasBeenSet = false;

    double m_matchConfidence;
    bool m_matchConfidenceHasBeenSet = false;

    KnownGender m_knownGender;
    bool m_knownGenderHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
