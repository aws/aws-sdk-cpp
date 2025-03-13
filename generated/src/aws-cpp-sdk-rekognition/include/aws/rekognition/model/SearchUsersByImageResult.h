/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/SearchedFaceDetails.h>
#include <aws/rekognition/model/UserMatch.h>
#include <aws/rekognition/model/UnsearchedFace.h>
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
  class SearchUsersByImageResult
  {
  public:
    AWS_REKOGNITION_API SearchUsersByImageResult() = default;
    AWS_REKOGNITION_API SearchUsersByImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchUsersByImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline const Aws::Vector<UserMatch>& GetUserMatches() const { return m_userMatches; }
    template<typename UserMatchesT = Aws::Vector<UserMatch>>
    void SetUserMatches(UserMatchesT&& value) { m_userMatchesHasBeenSet = true; m_userMatches = std::forward<UserMatchesT>(value); }
    template<typename UserMatchesT = Aws::Vector<UserMatch>>
    SearchUsersByImageResult& WithUserMatches(UserMatchesT&& value) { SetUserMatches(std::forward<UserMatchesT>(value)); return *this;}
    template<typename UserMatchesT = UserMatch>
    SearchUsersByImageResult& AddUserMatches(UserMatchesT&& value) { m_userMatchesHasBeenSet = true; m_userMatches.emplace_back(std::forward<UserMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const { return m_faceModelVersion; }
    template<typename FaceModelVersionT = Aws::String>
    void SetFaceModelVersion(FaceModelVersionT&& value) { m_faceModelVersionHasBeenSet = true; m_faceModelVersion = std::forward<FaceModelVersionT>(value); }
    template<typename FaceModelVersionT = Aws::String>
    SearchUsersByImageResult& WithFaceModelVersion(FaceModelVersionT&& value) { SetFaceModelVersion(std::forward<FaceModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of FaceDetail objects containing the BoundingBox for the largest face
     * in image, as well as the confidence in the bounding box, that was searched for
     * matches. If no valid face is detected in the image the response will contain no
     * SearchedFace object.</p>
     */
    inline const SearchedFaceDetails& GetSearchedFace() const { return m_searchedFace; }
    template<typename SearchedFaceT = SearchedFaceDetails>
    void SetSearchedFace(SearchedFaceT&& value) { m_searchedFaceHasBeenSet = true; m_searchedFace = std::forward<SearchedFaceT>(value); }
    template<typename SearchedFaceT = SearchedFaceDetails>
    SearchUsersByImageResult& WithSearchedFace(SearchedFaceT&& value) { SetSearchedFace(std::forward<SearchedFaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline const Aws::Vector<UnsearchedFace>& GetUnsearchedFaces() const { return m_unsearchedFaces; }
    template<typename UnsearchedFacesT = Aws::Vector<UnsearchedFace>>
    void SetUnsearchedFaces(UnsearchedFacesT&& value) { m_unsearchedFacesHasBeenSet = true; m_unsearchedFaces = std::forward<UnsearchedFacesT>(value); }
    template<typename UnsearchedFacesT = Aws::Vector<UnsearchedFace>>
    SearchUsersByImageResult& WithUnsearchedFaces(UnsearchedFacesT&& value) { SetUnsearchedFaces(std::forward<UnsearchedFacesT>(value)); return *this;}
    template<typename UnsearchedFacesT = UnsearchedFace>
    SearchUsersByImageResult& AddUnsearchedFaces(UnsearchedFacesT&& value) { m_unsearchedFacesHasBeenSet = true; m_unsearchedFaces.emplace_back(std::forward<UnsearchedFacesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchUsersByImageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserMatch> m_userMatches;
    bool m_userMatchesHasBeenSet = false;

    Aws::String m_faceModelVersion;
    bool m_faceModelVersionHasBeenSet = false;

    SearchedFaceDetails m_searchedFace;
    bool m_searchedFaceHasBeenSet = false;

    Aws::Vector<UnsearchedFace> m_unsearchedFaces;
    bool m_unsearchedFacesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
