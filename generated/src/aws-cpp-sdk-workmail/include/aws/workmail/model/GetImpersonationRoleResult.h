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
    AWS_WORKMAIL_API GetImpersonationRoleResult();
    AWS_WORKMAIL_API GetImpersonationRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetImpersonationRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The impersonation role ID.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const{ return m_impersonationRoleId; }
    inline void SetImpersonationRoleId(const Aws::String& value) { m_impersonationRoleId = value; }
    inline void SetImpersonationRoleId(Aws::String&& value) { m_impersonationRoleId = std::move(value); }
    inline void SetImpersonationRoleId(const char* value) { m_impersonationRoleId.assign(value); }
    inline GetImpersonationRoleResult& WithImpersonationRoleId(const Aws::String& value) { SetImpersonationRoleId(value); return *this;}
    inline GetImpersonationRoleResult& WithImpersonationRoleId(Aws::String&& value) { SetImpersonationRoleId(std::move(value)); return *this;}
    inline GetImpersonationRoleResult& WithImpersonationRoleId(const char* value) { SetImpersonationRoleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetImpersonationRoleResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetImpersonationRoleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetImpersonationRoleResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role type.</p>
     */
    inline const ImpersonationRoleType& GetType() const{ return m_type; }
    inline void SetType(const ImpersonationRoleType& value) { m_type = value; }
    inline void SetType(ImpersonationRoleType&& value) { m_type = std::move(value); }
    inline GetImpersonationRoleResult& WithType(const ImpersonationRoleType& value) { SetType(value); return *this;}
    inline GetImpersonationRoleResult& WithType(ImpersonationRoleType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetImpersonationRoleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetImpersonationRoleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetImpersonationRoleResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of rules for the given impersonation role.</p>
     */
    inline const Aws::Vector<ImpersonationRule>& GetRules() const{ return m_rules; }
    inline void SetRules(const Aws::Vector<ImpersonationRule>& value) { m_rules = value; }
    inline void SetRules(Aws::Vector<ImpersonationRule>&& value) { m_rules = std::move(value); }
    inline GetImpersonationRoleResult& WithRules(const Aws::Vector<ImpersonationRule>& value) { SetRules(value); return *this;}
    inline GetImpersonationRoleResult& WithRules(Aws::Vector<ImpersonationRule>&& value) { SetRules(std::move(value)); return *this;}
    inline GetImpersonationRoleResult& AddRules(const ImpersonationRule& value) { m_rules.push_back(value); return *this; }
    inline GetImpersonationRoleResult& AddRules(ImpersonationRule&& value) { m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date when the impersonation role was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreated = std::move(value); }
    inline GetImpersonationRoleResult& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline GetImpersonationRoleResult& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the impersonation role was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModified = value; }
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModified = std::move(value); }
    inline GetImpersonationRoleResult& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}
    inline GetImpersonationRoleResult& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetImpersonationRoleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetImpersonationRoleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetImpersonationRoleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_impersonationRoleId;

    Aws::String m_name;

    ImpersonationRoleType m_type;

    Aws::String m_description;

    Aws::Vector<ImpersonationRule> m_rules;

    Aws::Utils::DateTime m_dateCreated;

    Aws::Utils::DateTime m_dateModified;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
