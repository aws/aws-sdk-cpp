/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/UserProfile.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeUserProfiles</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeUserProfilesResult">AWS
   * API Reference</a></p>
   */
  class DescribeUserProfilesResult
  {
  public:
    AWS_OPSWORKS_API DescribeUserProfilesResult() = default;
    AWS_OPSWORKS_API DescribeUserProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeUserProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline const Aws::Vector<UserProfile>& GetUserProfiles() const { return m_userProfiles; }
    template<typename UserProfilesT = Aws::Vector<UserProfile>>
    void SetUserProfiles(UserProfilesT&& value) { m_userProfilesHasBeenSet = true; m_userProfiles = std::forward<UserProfilesT>(value); }
    template<typename UserProfilesT = Aws::Vector<UserProfile>>
    DescribeUserProfilesResult& WithUserProfiles(UserProfilesT&& value) { SetUserProfiles(std::forward<UserProfilesT>(value)); return *this;}
    template<typename UserProfilesT = UserProfile>
    DescribeUserProfilesResult& AddUserProfiles(UserProfilesT&& value) { m_userProfilesHasBeenSet = true; m_userProfiles.emplace_back(std::forward<UserProfilesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserProfile> m_userProfiles;
    bool m_userProfilesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
