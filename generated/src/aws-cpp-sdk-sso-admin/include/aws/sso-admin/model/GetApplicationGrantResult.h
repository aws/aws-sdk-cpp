/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/Grant.h>
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
  class GetApplicationGrantResult
  {
  public:
    AWS_SSOADMIN_API GetApplicationGrantResult();
    AWS_SSOADMIN_API GetApplicationGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetApplicationGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that describes the requested grant.</p>
     */
    inline const Grant& GetGrant() const{ return m_grant; }

    /**
     * <p>A structure that describes the requested grant.</p>
     */
    inline void SetGrant(const Grant& value) { m_grant = value; }

    /**
     * <p>A structure that describes the requested grant.</p>
     */
    inline void SetGrant(Grant&& value) { m_grant = std::move(value); }

    /**
     * <p>A structure that describes the requested grant.</p>
     */
    inline GetApplicationGrantResult& WithGrant(const Grant& value) { SetGrant(value); return *this;}

    /**
     * <p>A structure that describes the requested grant.</p>
     */
    inline GetApplicationGrantResult& WithGrant(Grant&& value) { SetGrant(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApplicationGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApplicationGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApplicationGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Grant m_grant;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
