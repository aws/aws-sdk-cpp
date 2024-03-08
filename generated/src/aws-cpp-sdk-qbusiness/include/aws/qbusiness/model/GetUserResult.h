/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/UserAlias.h>
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
namespace QBusiness
{
namespace Model
{
  class GetUserResult
  {
  public:
    AWS_QBUSINESS_API GetUserResult();
    AWS_QBUSINESS_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliases() const{ return m_userAliases; }

    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline void SetUserAliases(const Aws::Vector<UserAlias>& value) { m_userAliases = value; }

    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline void SetUserAliases(Aws::Vector<UserAlias>&& value) { m_userAliases = std::move(value); }

    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline GetUserResult& WithUserAliases(const Aws::Vector<UserAlias>& value) { SetUserAliases(value); return *this;}

    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline GetUserResult& WithUserAliases(Aws::Vector<UserAlias>&& value) { SetUserAliases(std::move(value)); return *this;}

    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline GetUserResult& AddUserAliases(const UserAlias& value) { m_userAliases.push_back(value); return *this; }

    /**
     * <p>A list of user aliases attached to a user.</p>
     */
    inline GetUserResult& AddUserAliases(UserAlias&& value) { m_userAliases.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserAlias> m_userAliases;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
