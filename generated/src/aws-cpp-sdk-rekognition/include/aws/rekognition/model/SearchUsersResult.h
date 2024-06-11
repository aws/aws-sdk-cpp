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
    AWS_REKOGNITION_API SearchUsersResult();
    AWS_REKOGNITION_API SearchUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of UserMatch objects that matched the input face along with the
     * confidence in the match. Array will be empty if there are no matches.</p>
     */
    inline const Aws::Vector<UserMatch>& GetUserMatches() const{ return m_userMatches; }
    inline void SetUserMatches(const Aws::Vector<UserMatch>& value) { m_userMatches = value; }
    inline void SetUserMatches(Aws::Vector<UserMatch>&& value) { m_userMatches = std::move(value); }
    inline SearchUsersResult& WithUserMatches(const Aws::Vector<UserMatch>& value) { SetUserMatches(value); return *this;}
    inline SearchUsersResult& WithUserMatches(Aws::Vector<UserMatch>&& value) { SetUserMatches(std::move(value)); return *this;}
    inline SearchUsersResult& AddUserMatches(const UserMatch& value) { m_userMatches.push_back(value); return *this; }
    inline SearchUsersResult& AddUserMatches(UserMatch&& value) { m_userMatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the input
     * CollectionId.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }
    inline SearchUsersResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}
    inline SearchUsersResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}
    inline SearchUsersResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the ID of a face that was used to search for matches in a
     * collection.</p>
     */
    inline const SearchedFace& GetSearchedFace() const{ return m_searchedFace; }
    inline void SetSearchedFace(const SearchedFace& value) { m_searchedFace = value; }
    inline void SetSearchedFace(SearchedFace&& value) { m_searchedFace = std::move(value); }
    inline SearchUsersResult& WithSearchedFace(const SearchedFace& value) { SetSearchedFace(value); return *this;}
    inline SearchUsersResult& WithSearchedFace(SearchedFace&& value) { SetSearchedFace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the ID of the UserID that was used to search for matches in a
     * collection.</p>
     */
    inline const SearchedUser& GetSearchedUser() const{ return m_searchedUser; }
    inline void SetSearchedUser(const SearchedUser& value) { m_searchedUser = value; }
    inline void SetSearchedUser(SearchedUser&& value) { m_searchedUser = std::move(value); }
    inline SearchUsersResult& WithSearchedUser(const SearchedUser& value) { SetSearchedUser(value); return *this;}
    inline SearchUsersResult& WithSearchedUser(SearchedUser&& value) { SetSearchedUser(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UserMatch> m_userMatches;

    Aws::String m_faceModelVersion;

    SearchedFace m_searchedFace;

    SearchedUser m_searchedUser;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
