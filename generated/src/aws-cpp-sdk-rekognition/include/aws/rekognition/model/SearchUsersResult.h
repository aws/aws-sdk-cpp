/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/SearchedFace.h>
#include <aws/rekognition/model/SearchedUser.h>
#include <aws/rekognition/model/UserMatch.h>
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
  class SearchUsersResult
  {
  public:
    AWS_REKOGNITION_API SearchUsersResult() = default;
    AWS_REKOGNITION_API SearchUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of UserMatch objects that matched the input face along with the
     * confidence in the match. Array will be empty if there are no matches.</p>
     */
    inline const Aws::Vector<UserMatch>& GetUserMatches() const { return m_userMatches; }
    template<typename UserMatchesT = Aws::Vector<UserMatch>>
    void SetUserMatches(UserMatchesT&& value) { m_userMatchesHasBeenSet = true; m_userMatches = std::forward<UserMatchesT>(value); }
    template<typename UserMatchesT = Aws::Vector<UserMatch>>
    SearchUsersResult& WithUserMatches(UserMatchesT&& value) { SetUserMatches(std::forward<UserMatchesT>(value)); return *this;}
    template<typename UserMatchesT = UserMatch>
    SearchUsersResult& AddUserMatches(UserMatchesT&& value) { m_userMatchesHasBeenSet = true; m_userMatches.emplace_back(std::forward<UserMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the input
     * CollectionId.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const { return m_faceModelVersion; }
    template<typename FaceModelVersionT = Aws::String>
    void SetFaceModelVersion(FaceModelVersionT&& value) { m_faceModelVersionHasBeenSet = true; m_faceModelVersion = std::forward<FaceModelVersionT>(value); }
    template<typename FaceModelVersionT = Aws::String>
    SearchUsersResult& WithFaceModelVersion(FaceModelVersionT&& value) { SetFaceModelVersion(std::forward<FaceModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the ID of a face that was used to search for matches in a
     * collection.</p>
     */
    inline const SearchedFace& GetSearchedFace() const { return m_searchedFace; }
    template<typename SearchedFaceT = SearchedFace>
    void SetSearchedFace(SearchedFaceT&& value) { m_searchedFaceHasBeenSet = true; m_searchedFace = std::forward<SearchedFaceT>(value); }
    template<typename SearchedFaceT = SearchedFace>
    SearchUsersResult& WithSearchedFace(SearchedFaceT&& value) { SetSearchedFace(std::forward<SearchedFaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the ID of the UserID that was used to search for matches in a
     * collection.</p>
     */
    inline const SearchedUser& GetSearchedUser() const { return m_searchedUser; }
    template<typename SearchedUserT = SearchedUser>
    void SetSearchedUser(SearchedUserT&& value) { m_searchedUserHasBeenSet = true; m_searchedUser = std::forward<SearchedUserT>(value); }
    template<typename SearchedUserT = SearchedUser>
    SearchUsersResult& WithSearchedUser(SearchedUserT&& value) { SetSearchedUser(std::forward<SearchedUserT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchUsersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserMatch> m_userMatches;
    bool m_userMatchesHasBeenSet = false;

    Aws::String m_faceModelVersion;
    bool m_faceModelVersionHasBeenSet = false;

    SearchedFace m_searchedFace;
    bool m_searchedFaceHasBeenSet = false;

    SearchedUser m_searchedUser;
    bool m_searchedUserHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
