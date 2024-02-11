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
  class UpdateUserResult
  {
  public:
    AWS_QBUSINESS_API UpdateUserResult();
    AWS_QBUSINESS_API UpdateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API UpdateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesAdded() const{ return m_userAliasesAdded; }

    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline void SetUserAliasesAdded(const Aws::Vector<UserAlias>& value) { m_userAliasesAdded = value; }

    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline void SetUserAliasesAdded(Aws::Vector<UserAlias>&& value) { m_userAliasesAdded = std::move(value); }

    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline UpdateUserResult& WithUserAliasesAdded(const Aws::Vector<UserAlias>& value) { SetUserAliasesAdded(value); return *this;}

    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline UpdateUserResult& WithUserAliasesAdded(Aws::Vector<UserAlias>&& value) { SetUserAliasesAdded(std::move(value)); return *this;}

    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline UpdateUserResult& AddUserAliasesAdded(const UserAlias& value) { m_userAliasesAdded.push_back(value); return *this; }

    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline UpdateUserResult& AddUserAliasesAdded(UserAlias&& value) { m_userAliasesAdded.push_back(std::move(value)); return *this; }


    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesDeleted() const{ return m_userAliasesDeleted; }

    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline void SetUserAliasesDeleted(const Aws::Vector<UserAlias>& value) { m_userAliasesDeleted = value; }

    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline void SetUserAliasesDeleted(Aws::Vector<UserAlias>&& value) { m_userAliasesDeleted = std::move(value); }

    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline UpdateUserResult& WithUserAliasesDeleted(const Aws::Vector<UserAlias>& value) { SetUserAliasesDeleted(value); return *this;}

    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline UpdateUserResult& WithUserAliasesDeleted(Aws::Vector<UserAlias>&& value) { SetUserAliasesDeleted(std::move(value)); return *this;}

    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline UpdateUserResult& AddUserAliasesDeleted(const UserAlias& value) { m_userAliasesDeleted.push_back(value); return *this; }

    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline UpdateUserResult& AddUserAliasesDeleted(UserAlias&& value) { m_userAliasesDeleted.push_back(std::move(value)); return *this; }


    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesUpdated() const{ return m_userAliasesUpdated; }

    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline void SetUserAliasesUpdated(const Aws::Vector<UserAlias>& value) { m_userAliasesUpdated = value; }

    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline void SetUserAliasesUpdated(Aws::Vector<UserAlias>&& value) { m_userAliasesUpdated = std::move(value); }

    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline UpdateUserResult& WithUserAliasesUpdated(const Aws::Vector<UserAlias>& value) { SetUserAliasesUpdated(value); return *this;}

    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline UpdateUserResult& WithUserAliasesUpdated(Aws::Vector<UserAlias>&& value) { SetUserAliasesUpdated(std::move(value)); return *this;}

    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline UpdateUserResult& AddUserAliasesUpdated(const UserAlias& value) { m_userAliasesUpdated.push_back(value); return *this; }

    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline UpdateUserResult& AddUserAliasesUpdated(UserAlias&& value) { m_userAliasesUpdated.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserAlias> m_userAliasesAdded;

    Aws::Vector<UserAlias> m_userAliasesDeleted;

    Aws::Vector<UserAlias> m_userAliasesUpdated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
