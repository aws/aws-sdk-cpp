﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class SearchFacesResult
  {
  public:
    AWS_REKOGNITION_API SearchFacesResult();
    AWS_REKOGNITION_API SearchFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline const Aws::String& GetSearchedFaceId() const{ return m_searchedFaceId; }
    inline void SetSearchedFaceId(const Aws::String& value) { m_searchedFaceId = value; }
    inline void SetSearchedFaceId(Aws::String&& value) { m_searchedFaceId = std::move(value); }
    inline void SetSearchedFaceId(const char* value) { m_searchedFaceId.assign(value); }
    inline SearchFacesResult& WithSearchedFaceId(const Aws::String& value) { SetSearchedFaceId(value); return *this;}
    inline SearchFacesResult& WithSearchedFaceId(Aws::String&& value) { SetSearchedFaceId(std::move(value)); return *this;}
    inline SearchFacesResult& WithSearchedFaceId(const char* value) { SetSearchedFaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const{ return m_faceMatches; }
    inline void SetFaceMatches(const Aws::Vector<FaceMatch>& value) { m_faceMatches = value; }
    inline void SetFaceMatches(Aws::Vector<FaceMatch>&& value) { m_faceMatches = std::move(value); }
    inline SearchFacesResult& WithFaceMatches(const Aws::Vector<FaceMatch>& value) { SetFaceMatches(value); return *this;}
    inline SearchFacesResult& WithFaceMatches(Aws::Vector<FaceMatch>&& value) { SetFaceMatches(std::move(value)); return *this;}
    inline SearchFacesResult& AddFaceMatches(const FaceMatch& value) { m_faceMatches.push_back(value); return *this; }
    inline SearchFacesResult& AddFaceMatches(FaceMatch&& value) { m_faceMatches.push_back(std::move(value)); return *this; }
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
    inline SearchFacesResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}
    inline SearchFacesResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}
    inline SearchFacesResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchFacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchFacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchFacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_searchedFaceId;

    Aws::Vector<FaceMatch> m_faceMatches;

    Aws::String m_faceModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
