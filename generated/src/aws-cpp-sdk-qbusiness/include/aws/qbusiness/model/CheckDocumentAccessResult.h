/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentAcl.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AssociatedGroup.h>
#include <aws/qbusiness/model/AssociatedUser.h>
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
  class CheckDocumentAccessResult
  {
  public:
    AWS_QBUSINESS_API CheckDocumentAccessResult() = default;
    AWS_QBUSINESS_API CheckDocumentAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CheckDocumentAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of groups the user is part of for the specified data source. Each
     * group has a name and type.</p>
     */
    inline const Aws::Vector<AssociatedGroup>& GetUserGroups() const { return m_userGroups; }
    template<typename UserGroupsT = Aws::Vector<AssociatedGroup>>
    void SetUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::forward<UserGroupsT>(value); }
    template<typename UserGroupsT = Aws::Vector<AssociatedGroup>>
    CheckDocumentAccessResult& WithUserGroups(UserGroupsT&& value) { SetUserGroups(std::forward<UserGroupsT>(value)); return *this;}
    template<typename UserGroupsT = AssociatedGroup>
    CheckDocumentAccessResult& AddUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups.emplace_back(std::forward<UserGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of aliases associated with the user. This includes both global and
     * local aliases, each with a name and type.</p>
     */
    inline const Aws::Vector<AssociatedUser>& GetUserAliases() const { return m_userAliases; }
    template<typename UserAliasesT = Aws::Vector<AssociatedUser>>
    void SetUserAliases(UserAliasesT&& value) { m_userAliasesHasBeenSet = true; m_userAliases = std::forward<UserAliasesT>(value); }
    template<typename UserAliasesT = Aws::Vector<AssociatedUser>>
    CheckDocumentAccessResult& WithUserAliases(UserAliasesT&& value) { SetUserAliases(std::forward<UserAliasesT>(value)); return *this;}
    template<typename UserAliasesT = AssociatedUser>
    CheckDocumentAccessResult& AddUserAliases(UserAliasesT&& value) { m_userAliasesHasBeenSet = true; m_userAliases.emplace_back(std::forward<UserAliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether the specified user has access to the
     * document, either direct access or transitive access via groups and aliases
     * attached to the document.</p>
     */
    inline bool GetHasAccess() const { return m_hasAccess; }
    inline void SetHasAccess(bool value) { m_hasAccessHasBeenSet = true; m_hasAccess = value; }
    inline CheckDocumentAccessResult& WithHasAccess(bool value) { SetHasAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Access Control List (ACL) associated with the document. Includes
     * allowlist and denylist conditions that determine user access.</p>
     */
    inline const DocumentAcl& GetDocumentAcl() const { return m_documentAcl; }
    template<typename DocumentAclT = DocumentAcl>
    void SetDocumentAcl(DocumentAclT&& value) { m_documentAclHasBeenSet = true; m_documentAcl = std::forward<DocumentAclT>(value); }
    template<typename DocumentAclT = DocumentAcl>
    CheckDocumentAccessResult& WithDocumentAcl(DocumentAclT&& value) { SetDocumentAcl(std::forward<DocumentAclT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CheckDocumentAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedGroup> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::Vector<AssociatedUser> m_userAliases;
    bool m_userAliasesHasBeenSet = false;

    bool m_hasAccess{false};
    bool m_hasAccessHasBeenSet = false;

    DocumentAcl m_documentAcl;
    bool m_documentAclHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
