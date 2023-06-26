/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/User.h>
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
namespace WorkDocs
{
namespace Model
{
  class GetCurrentUserResult
  {
  public:
    AWS_WORKDOCS_API GetCurrentUserResult();
    AWS_WORKDOCS_API GetCurrentUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API GetCurrentUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata of the user.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>Metadata of the user.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>Metadata of the user.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>Metadata of the user.</p>
     */
    inline GetCurrentUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>Metadata of the user.</p>
     */
    inline GetCurrentUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCurrentUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCurrentUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCurrentUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    User m_user;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
