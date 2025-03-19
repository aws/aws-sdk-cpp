/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UserProfileDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class ListUserProfilesResult
  {
  public:
    AWS_SAGEMAKER_API ListUserProfilesResult() = default;
    AWS_SAGEMAKER_API ListUserProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListUserProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of user profiles.</p>
     */
    inline const Aws::Vector<UserProfileDetails>& GetUserProfiles() const { return m_userProfiles; }
    template<typename UserProfilesT = Aws::Vector<UserProfileDetails>>
    void SetUserProfiles(UserProfilesT&& value) { m_userProfilesHasBeenSet = true; m_userProfiles = std::forward<UserProfilesT>(value); }
    template<typename UserProfilesT = Aws::Vector<UserProfileDetails>>
    ListUserProfilesResult& WithUserProfiles(UserProfilesT&& value) { SetUserProfiles(std::forward<UserProfilesT>(value)); return *this;}
    template<typename UserProfilesT = UserProfileDetails>
    ListUserProfilesResult& AddUserProfiles(UserProfilesT&& value) { m_userProfilesHasBeenSet = true; m_userProfiles.emplace_back(std::forward<UserProfilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUserProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUserProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserProfileDetails> m_userProfiles;
    bool m_userProfilesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
