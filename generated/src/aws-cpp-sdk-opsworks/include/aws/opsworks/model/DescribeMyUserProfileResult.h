/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/SelfUserProfile.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the response to a <code>DescribeMyUserProfile</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeMyUserProfileResult">AWS
   * API Reference</a></p>
   */
  class DescribeMyUserProfileResult
  {
  public:
    AWS_OPSWORKS_API DescribeMyUserProfileResult() = default;
    AWS_OPSWORKS_API DescribeMyUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeMyUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>UserProfile</code> object that describes the user's SSH
     * information.</p>
     */
    inline const SelfUserProfile& GetUserProfile() const { return m_userProfile; }
    template<typename UserProfileT = SelfUserProfile>
    void SetUserProfile(UserProfileT&& value) { m_userProfileHasBeenSet = true; m_userProfile = std::forward<UserProfileT>(value); }
    template<typename UserProfileT = SelfUserProfile>
    DescribeMyUserProfileResult& WithUserProfile(UserProfileT&& value) { SetUserProfile(std::forward<UserProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMyUserProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SelfUserProfile m_userProfile;
    bool m_userProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
