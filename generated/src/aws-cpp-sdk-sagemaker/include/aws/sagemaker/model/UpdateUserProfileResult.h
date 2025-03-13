/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class UpdateUserProfileResult
  {
  public:
    AWS_SAGEMAKER_API UpdateUserProfileResult() = default;
    AWS_SAGEMAKER_API UpdateUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetUserProfileArn() const { return m_userProfileArn; }
    template<typename UserProfileArnT = Aws::String>
    void SetUserProfileArn(UserProfileArnT&& value) { m_userProfileArnHasBeenSet = true; m_userProfileArn = std::forward<UserProfileArnT>(value); }
    template<typename UserProfileArnT = Aws::String>
    UpdateUserProfileResult& WithUserProfileArn(UserProfileArnT&& value) { SetUserProfileArn(std::forward<UserProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateUserProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userProfileArn;
    bool m_userProfileArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
