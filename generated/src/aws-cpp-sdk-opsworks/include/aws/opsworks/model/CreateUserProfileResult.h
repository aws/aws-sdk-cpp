/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
   * <p>Contains the response to a <code>CreateUserProfile</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateUserProfileResult">AWS
   * API Reference</a></p>
   */
  class CreateUserProfileResult
  {
  public:
    AWS_OPSWORKS_API CreateUserProfileResult() = default;
    AWS_OPSWORKS_API CreateUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API CreateUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user's IAM ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const { return m_iamUserArn; }
    template<typename IamUserArnT = Aws::String>
    void SetIamUserArn(IamUserArnT&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::forward<IamUserArnT>(value); }
    template<typename IamUserArnT = Aws::String>
    CreateUserProfileResult& WithIamUserArn(IamUserArnT&& value) { SetIamUserArn(std::forward<IamUserArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUserProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
