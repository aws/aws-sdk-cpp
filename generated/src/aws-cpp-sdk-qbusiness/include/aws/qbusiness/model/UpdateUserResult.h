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
    AWS_QBUSINESS_API UpdateUserResult() = default;
    AWS_QBUSINESS_API UpdateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API UpdateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user aliases that have been to be added to a user id.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesAdded() const { return m_userAliasesAdded; }
    template<typename UserAliasesAddedT = Aws::Vector<UserAlias>>
    void SetUserAliasesAdded(UserAliasesAddedT&& value) { m_userAliasesAddedHasBeenSet = true; m_userAliasesAdded = std::forward<UserAliasesAddedT>(value); }
    template<typename UserAliasesAddedT = Aws::Vector<UserAlias>>
    UpdateUserResult& WithUserAliasesAdded(UserAliasesAddedT&& value) { SetUserAliasesAdded(std::forward<UserAliasesAddedT>(value)); return *this;}
    template<typename UserAliasesAddedT = UserAlias>
    UpdateUserResult& AddUserAliasesAdded(UserAliasesAddedT&& value) { m_userAliasesAddedHasBeenSet = true; m_userAliasesAdded.emplace_back(std::forward<UserAliasesAddedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user aliases attached to a user id that have been updated.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesUpdated() const { return m_userAliasesUpdated; }
    template<typename UserAliasesUpdatedT = Aws::Vector<UserAlias>>
    void SetUserAliasesUpdated(UserAliasesUpdatedT&& value) { m_userAliasesUpdatedHasBeenSet = true; m_userAliasesUpdated = std::forward<UserAliasesUpdatedT>(value); }
    template<typename UserAliasesUpdatedT = Aws::Vector<UserAlias>>
    UpdateUserResult& WithUserAliasesUpdated(UserAliasesUpdatedT&& value) { SetUserAliasesUpdated(std::forward<UserAliasesUpdatedT>(value)); return *this;}
    template<typename UserAliasesUpdatedT = UserAlias>
    UpdateUserResult& AddUserAliasesUpdated(UserAliasesUpdatedT&& value) { m_userAliasesUpdatedHasBeenSet = true; m_userAliasesUpdated.emplace_back(std::forward<UserAliasesUpdatedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user aliases that have been deleted from a user id.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesDeleted() const { return m_userAliasesDeleted; }
    template<typename UserAliasesDeletedT = Aws::Vector<UserAlias>>
    void SetUserAliasesDeleted(UserAliasesDeletedT&& value) { m_userAliasesDeletedHasBeenSet = true; m_userAliasesDeleted = std::forward<UserAliasesDeletedT>(value); }
    template<typename UserAliasesDeletedT = Aws::Vector<UserAlias>>
    UpdateUserResult& WithUserAliasesDeleted(UserAliasesDeletedT&& value) { SetUserAliasesDeleted(std::forward<UserAliasesDeletedT>(value)); return *this;}
    template<typename UserAliasesDeletedT = UserAlias>
    UpdateUserResult& AddUserAliasesDeleted(UserAliasesDeletedT&& value) { m_userAliasesDeletedHasBeenSet = true; m_userAliasesDeleted.emplace_back(std::forward<UserAliasesDeletedT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserAlias> m_userAliasesAdded;
    bool m_userAliasesAddedHasBeenSet = false;

    Aws::Vector<UserAlias> m_userAliasesUpdated;
    bool m_userAliasesUpdatedHasBeenSet = false;

    Aws::Vector<UserAlias> m_userAliasesDeleted;
    bool m_userAliasesDeletedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
