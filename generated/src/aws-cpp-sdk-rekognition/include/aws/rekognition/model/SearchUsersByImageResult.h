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
    AWS_REKOGNITION_API SearchUsersByImageResult();
    AWS_REKOGNITION_API SearchUsersByImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchUsersByImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline const Aws::Vector<UserMatch>& GetUserMatches() const{ return m_userMatches; }

    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline void SetUserMatches(const Aws::Vector<UserMatch>& value) { m_userMatches = value; }

    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline void SetUserMatches(Aws::Vector<UserMatch>&& value) { m_userMatches = std::move(value); }

    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline SearchUsersByImageResult& WithUserMatches(const Aws::Vector<UserMatch>& value) { SetUserMatches(value); return *this;}

    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline SearchUsersByImageResult& WithUserMatches(Aws::Vector<UserMatch>&& value) { SetUserMatches(std::move(value)); return *this;}

    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline SearchUsersByImageResult& AddUserMatches(const UserMatch& value) { m_userMatches.push_back(value); return *this; }

    /**
     * <p>An array of UserID objects that matched the input face, along with the
     * confidence in the match. The returned structure will be empty if there are no
     * matches. Returned if the SearchUsersByImageResponse action is successful.</p>
     */
    inline SearchUsersByImageResult& AddUserMatches(UserMatch&& value) { m_userMatches.push_back(std::move(value)); return *this; }


    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }

    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline SearchUsersByImageResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}

    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline SearchUsersByImageResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the face detection model associated with the input
     * collection CollectionId.</p>
     */
    inline SearchUsersByImageResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}


    /**
     * <p>A list of FaceDetail objects containing the BoundingBox for the largest face
     * in image, as well as the confidence in the bounding box, that was searched for
     * matches. If no valid face is detected in the image the response will contain no
     * SearchedFace object.</p>
     */
    inline const SearchedFaceDetails& GetSearchedFace() const{ return m_searchedFace; }

    /**
     * <p>A list of FaceDetail objects containing the BoundingBox for the largest face
     * in image, as well as the confidence in the bounding box, that was searched for
     * matches. If no valid face is detected in the image the response will contain no
     * SearchedFace object.</p>
     */
    inline void SetSearchedFace(const SearchedFaceDetails& value) { m_searchedFace = value; }

    /**
     * <p>A list of FaceDetail objects containing the BoundingBox for the largest face
     * in image, as well as the confidence in the bounding box, that was searched for
     * matches. If no valid face is detected in the image the response will contain no
     * SearchedFace object.</p>
     */
    inline void SetSearchedFace(SearchedFaceDetails&& value) { m_searchedFace = std::move(value); }

    /**
     * <p>A list of FaceDetail objects containing the BoundingBox for the largest face
     * in image, as well as the confidence in the bounding box, that was searched for
     * matches. If no valid face is detected in the image the response will contain no
     * SearchedFace object.</p>
     */
    inline SearchUsersByImageResult& WithSearchedFace(const SearchedFaceDetails& value) { SetSearchedFace(value); return *this;}

    /**
     * <p>A list of FaceDetail objects containing the BoundingBox for the largest face
     * in image, as well as the confidence in the bounding box, that was searched for
     * matches. If no valid face is detected in the image the response will contain no
     * SearchedFace object.</p>
     */
    inline SearchUsersByImageResult& WithSearchedFace(SearchedFaceDetails&& value) { SetSearchedFace(std::move(value)); return *this;}


    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline const Aws::Vector<UnsearchedFace>& GetUnsearchedFaces() const{ return m_unsearchedFaces; }

    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline void SetUnsearchedFaces(const Aws::Vector<UnsearchedFace>& value) { m_unsearchedFaces = value; }

    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline void SetUnsearchedFaces(Aws::Vector<UnsearchedFace>&& value) { m_unsearchedFaces = std::move(value); }

    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline SearchUsersByImageResult& WithUnsearchedFaces(const Aws::Vector<UnsearchedFace>& value) { SetUnsearchedFaces(value); return *this;}

    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline SearchUsersByImageResult& WithUnsearchedFaces(Aws::Vector<UnsearchedFace>&& value) { SetUnsearchedFaces(std::move(value)); return *this;}

    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline SearchUsersByImageResult& AddUnsearchedFaces(const UnsearchedFace& value) { m_unsearchedFaces.push_back(value); return *this; }

    /**
     * <p>List of UnsearchedFace objects. Contains the face details infered from the
     * specified image but not used for search. Contains reasons that describe why a
     * face wasn't used for Search. </p>
     */
    inline SearchUsersByImageResult& AddUnsearchedFaces(UnsearchedFace&& value) { m_unsearchedFaces.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchUsersByImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchUsersByImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchUsersByImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserMatch> m_userMatches;

    Aws::String m_faceModelVersion;

    SearchedFaceDetails m_searchedFace;

    Aws::Vector<UnsearchedFace> m_unsearchedFaces;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
