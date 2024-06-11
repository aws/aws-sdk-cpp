/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/FaceMatch.h>
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
  class SearchFacesByImageResult
  {
  public:
    AWS_REKOGNITION_API SearchFacesByImageResult();
    AWS_REKOGNITION_API SearchFacesByImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchFacesByImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The bounding box around the face in the input image that Amazon Rekognition
     * used for the search.</p>
     */
    inline const BoundingBox& GetSearchedFaceBoundingBox() const{ return m_searchedFaceBoundingBox; }
    inline void SetSearchedFaceBoundingBox(const BoundingBox& value) { m_searchedFaceBoundingBox = value; }
    inline void SetSearchedFaceBoundingBox(BoundingBox&& value) { m_searchedFaceBoundingBox = std::move(value); }
    inline SearchFacesByImageResult& WithSearchedFaceBoundingBox(const BoundingBox& value) { SetSearchedFaceBoundingBox(value); return *this;}
    inline SearchFacesByImageResult& WithSearchedFaceBoundingBox(BoundingBox&& value) { SetSearchedFaceBoundingBox(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that the <code>searchedFaceBoundingBox</code>,
     * contains a face.</p>
     */
    inline double GetSearchedFaceConfidence() const{ return m_searchedFaceConfidence; }
    inline void SetSearchedFaceConfidence(double value) { m_searchedFaceConfidence = value; }
    inline SearchFacesByImageResult& WithSearchedFaceConfidence(double value) { SetSearchedFaceConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const{ return m_faceMatches; }
    inline void SetFaceMatches(const Aws::Vector<FaceMatch>& value) { m_faceMatches = value; }
    inline void SetFaceMatches(Aws::Vector<FaceMatch>&& value) { m_faceMatches = std::move(value); }
    inline SearchFacesByImageResult& WithFaceMatches(const Aws::Vector<FaceMatch>& value) { SetFaceMatches(value); return *this;}
    inline SearchFacesByImageResult& WithFaceMatches(Aws::Vector<FaceMatch>&& value) { SetFaceMatches(std::move(value)); return *this;}
    inline SearchFacesByImageResult& AddFaceMatches(const FaceMatch& value) { m_faceMatches.push_back(value); return *this; }
    inline SearchFacesByImageResult& AddFaceMatches(FaceMatch&& value) { m_faceMatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }
    inline SearchFacesByImageResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}
    inline SearchFacesByImageResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}
    inline SearchFacesByImageResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchFacesByImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchFacesByImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchFacesByImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BoundingBox m_searchedFaceBoundingBox;

    double m_searchedFaceConfidence;

    Aws::Vector<FaceMatch> m_faceMatches;

    Aws::String m_faceModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
