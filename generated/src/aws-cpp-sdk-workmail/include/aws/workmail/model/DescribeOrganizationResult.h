/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeOrganizationResult
  {
  public:
    AWS_WORKMAIL_API DescribeOrganizationResult() = default;
    AWS_WORKMAIL_API DescribeOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of an organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    DescribeOrganizationResult& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias for an organization.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    DescribeOrganizationResult& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an organization.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    DescribeOrganizationResult& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the directory associated with an WorkMail
     * organization.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeOrganizationResult& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline const Aws::String& GetDirectoryType() const { return m_directoryType; }
    template<typename DirectoryTypeT = Aws::String>
    void SetDirectoryType(DirectoryTypeT&& value) { m_directoryTypeHasBeenSet = true; m_directoryType = std::forward<DirectoryTypeT>(value); }
    template<typename DirectoryTypeT = Aws::String>
    DescribeOrganizationResult& WithDirectoryType(DirectoryTypeT&& value) { SetDirectoryType(std::forward<DirectoryTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline const Aws::String& GetDefaultMailDomain() const { return m_defaultMailDomain; }
    template<typename DefaultMailDomainT = Aws::String>
    void SetDefaultMailDomain(DefaultMailDomainT&& value) { m_defaultMailDomainHasBeenSet = true; m_defaultMailDomain = std::forward<DefaultMailDomainT>(value); }
    template<typename DefaultMailDomainT = Aws::String>
    DescribeOrganizationResult& WithDefaultMailDomain(DefaultMailDomainT&& value) { SetDefaultMailDomain(std::forward<DefaultMailDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date at which the organization became usable in the WorkMail context, in
     * UNIX epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedDate() const { return m_completedDate; }
    template<typename CompletedDateT = Aws::Utils::DateTime>
    void SetCompletedDate(CompletedDateT&& value) { m_completedDateHasBeenSet = true; m_completedDate = std::forward<CompletedDateT>(value); }
    template<typename CompletedDateT = Aws::Utils::DateTime>
    DescribeOrganizationResult& WithCompletedDate(CompletedDateT&& value) { SetCompletedDate(std::forward<CompletedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeOrganizationResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the organization.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    DescribeOrganizationResult& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the migration admin if migration is enabled for the
     * organization.</p>
     */
    inline const Aws::String& GetMigrationAdmin() const { return m_migrationAdmin; }
    template<typename MigrationAdminT = Aws::String>
    void SetMigrationAdmin(MigrationAdminT&& value) { m_migrationAdminHasBeenSet = true; m_migrationAdmin = std::forward<MigrationAdminT>(value); }
    template<typename MigrationAdminT = Aws::String>
    DescribeOrganizationResult& WithMigrationAdmin(MigrationAdminT&& value) { SetMigrationAdmin(std::forward<MigrationAdminT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if interoperability is enabled for this organization.</p>
     */
    inline bool GetInteroperabilityEnabled() const { return m_interoperabilityEnabled; }
    inline void SetInteroperabilityEnabled(bool value) { m_interoperabilityEnabledHasBeenSet = true; m_interoperabilityEnabled = value; }
    inline DescribeOrganizationResult& WithInteroperabilityEnabled(bool value) { SetInteroperabilityEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_directoryType;
    bool m_directoryTypeHasBeenSet = false;

    Aws::String m_defaultMailDomain;
    bool m_defaultMailDomainHasBeenSet = false;

    Aws::Utils::DateTime m_completedDate{};
    bool m_completedDateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_migrationAdmin;
    bool m_migrationAdminHasBeenSet = false;

    bool m_interoperabilityEnabled{false};
    bool m_interoperabilityEnabledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
