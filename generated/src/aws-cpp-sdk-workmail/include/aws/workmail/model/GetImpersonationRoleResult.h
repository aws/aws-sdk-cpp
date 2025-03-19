/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ImpersonationRoleType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workmail/model/ImpersonationRule.h>
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
namespace WorkMail
{
namespace Model
{
  class GetImpersonationRoleResult
  {
  public:
    AWS_WORKMAIL_API GetImpersonationRoleResult() = default;
    AWS_WORKMAIL_API GetImpersonationRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetImpersonationRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The impersonation role ID.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const { return m_impersonationRoleId; }
    template<typename ImpersonationRoleIdT = Aws::String>
    void SetImpersonationRoleId(ImpersonationRoleIdT&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::forward<ImpersonationRoleIdT>(value); }
    template<typename ImpersonationRoleIdT = Aws::String>
    GetImpersonationRoleResult& WithImpersonationRoleId(ImpersonationRoleIdT&& value) { SetImpersonationRoleId(std::forward<ImpersonationRoleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetImpersonationRoleResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role type.</p>
     */
    inline ImpersonationRoleType GetType() const { return m_type; }
    inline void SetType(ImpersonationRoleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetImpersonationRoleResult& WithType(ImpersonationRoleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetImpersonationRoleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of rules for the given impersonation role.</p>
     */
    inline const Aws::Vector<ImpersonationRule>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<ImpersonationRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<ImpersonationRule>>
    GetImpersonationRoleResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = ImpersonationRule>
    GetImpersonationRoleResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    GetImpersonationRoleResult& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const { return m_dateModified; }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    void SetDateModified(DateModifiedT&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::forward<DateModifiedT>(value); }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    GetImpersonationRoleResult& WithDateModified(DateModifiedT&& value) { SetDateModified(std::forward<DateModifiedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImpersonationRoleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ImpersonationRoleType m_type{ImpersonationRoleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ImpersonationRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified{};
    bool m_dateModifiedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
