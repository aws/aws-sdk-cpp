/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{
  class CreateApplicationResult
  {
  public:
    AWS_SSOADMIN_API CreateApplicationResult();
    AWS_SSOADMIN_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
