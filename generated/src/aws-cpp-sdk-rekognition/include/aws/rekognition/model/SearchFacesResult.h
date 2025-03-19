/**
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
    AWS_REKOGNITION_API SearchFacesResult() = default;
    AWS_REKOGNITION_API SearchFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the face that was searched for matches in a collection.</p>
     */
    inline const Aws::String& GetSearchedFaceId() const { return m_searchedFaceId; }
    template<typename SearchedFaceIdT = Aws::String>
    void SetSearchedFaceId(SearchedFaceIdT&& value) { m_searchedFaceIdHasBeenSet = true; m_searchedFaceId = std::forward<SearchedFaceIdT>(value); }
    template<typename SearchedFaceIdT = Aws::String>
    SearchFacesResult& WithSearchedFaceId(SearchedFaceIdT&& value) { SetSearchedFaceId(std::forward<SearchedFaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces that matched the input face, along with the confidence in
     * the match.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const { return m_faceMatches; }
    template<typename FaceMatchesT = Aws::Vector<FaceMatch>>
    void SetFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches = std::forward<FaceMatchesT>(value); }
    template<typename FaceMatchesT = Aws::Vector<FaceMatch>>
    SearchFacesResult& WithFaceMatches(FaceMatchesT&& value) { SetFaceMatches(std::forward<FaceMatchesT>(value)); return *this;}
    template<typename FaceMatchesT = FaceMatch>
    SearchFacesResult& AddFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches.emplace_back(std::forward<FaceMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline const Aws::String& GetFaceModelVersion() const { return m_faceModelVersion; }
    template<typename FaceModelVersionT = Aws::String>
    void SetFaceModelVersion(FaceModelVersionT&& value) { m_faceModelVersionHasBeenSet = true; m_faceModelVersion = std::forward<FaceModelVersionT>(value); }
    template<typename FaceModelVersionT = Aws::String>
    SearchFacesResult& WithFaceModelVersion(FaceModelVersionT&& value) { SetFaceModelVersion(std::forward<FaceModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchFacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchedFaceId;
    bool m_searchedFaceIdHasBeenSet = false;

    Aws::Vector<FaceMatch> m_faceMatches;
    bool m_faceMatchesHasBeenSet = false;

    Aws::String m_faceModelVersion;
    bool m_faceModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
