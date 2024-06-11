﻿/**
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
    AWS_OPSWORKS_API CreateUserProfileResult();
    AWS_OPSWORKS_API CreateUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API CreateUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user's IAM ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArn = value; }
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArn = std::move(value); }
    inline void SetIamUserArn(const char* value) { m_iamUserArn.assign(value); }
    inline CreateUserProfileResult& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}
    inline CreateUserProfileResult& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}
    inline CreateUserProfileResult& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_iamUserArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
