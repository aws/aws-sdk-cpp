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
    AWS_WORKMAIL_API DescribeOrganizationResult();
    AWS_WORKMAIL_API DescribeOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of an organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationId.assign(value); }
    inline DescribeOrganizationResult& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline DescribeOrganizationResult& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias for an organization.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline void SetAlias(const Aws::String& value) { m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_alias.assign(value); }
    inline DescribeOrganizationResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline DescribeOrganizationResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an organization.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline void SetState(const Aws::String& value) { m_state = value; }
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }
    inline void SetState(const char* value) { m_state.assign(value); }
    inline DescribeOrganizationResult& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline DescribeOrganizationResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the directory associated with an WorkMail
     * organization.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline DescribeOrganizationResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DescribeOrganizationResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline const Aws::String& GetDirectoryType() const{ return m_directoryType; }
    inline void SetDirectoryType(const Aws::String& value) { m_directoryType = value; }
    inline void SetDirectoryType(Aws::String&& value) { m_directoryType = std::move(value); }
    inline void SetDirectoryType(const char* value) { m_directoryType.assign(value); }
    inline DescribeOrganizationResult& WithDirectoryType(const Aws::String& value) { SetDirectoryType(value); return *this;}
    inline DescribeOrganizationResult& WithDirectoryType(Aws::String&& value) { SetDirectoryType(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithDirectoryType(const char* value) { SetDirectoryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline const Aws::String& GetDefaultMailDomain() const{ return m_defaultMailDomain; }
    inline void SetDefaultMailDomain(const Aws::String& value) { m_defaultMailDomain = value; }
    inline void SetDefaultMailDomain(Aws::String&& value) { m_defaultMailDomain = std::move(value); }
    inline void SetDefaultMailDomain(const char* value) { m_defaultMailDomain.assign(value); }
    inline DescribeOrganizationResult& WithDefaultMailDomain(const Aws::String& value) { SetDefaultMailDomain(value); return *this;}
    inline DescribeOrganizationResult& WithDefaultMailDomain(Aws::String&& value) { SetDefaultMailDomain(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithDefaultMailDomain(const char* value) { SetDefaultMailDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date at which the organization became usable in the WorkMail context, in
     * UNIX epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedDate() const{ return m_completedDate; }
    inline void SetCompletedDate(const Aws::Utils::DateTime& value) { m_completedDate = value; }
    inline void SetCompletedDate(Aws::Utils::DateTime&& value) { m_completedDate = std::move(value); }
    inline DescribeOrganizationResult& WithCompletedDate(const Aws::Utils::DateTime& value) { SetCompletedDate(value); return *this;}
    inline DescribeOrganizationResult& WithCompletedDate(Aws::Utils::DateTime&& value) { SetCompletedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeOrganizationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeOrganizationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the organization.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline DescribeOrganizationResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline DescribeOrganizationResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the migration admin if migration is enabled for the
     * organization.</p>
     */
    inline const Aws::String& GetMigrationAdmin() const{ return m_migrationAdmin; }
    inline void SetMigrationAdmin(const Aws::String& value) { m_migrationAdmin = value; }
    inline void SetMigrationAdmin(Aws::String&& value) { m_migrationAdmin = std::move(value); }
    inline void SetMigrationAdmin(const char* value) { m_migrationAdmin.assign(value); }
    inline DescribeOrganizationResult& WithMigrationAdmin(const Aws::String& value) { SetMigrationAdmin(value); return *this;}
    inline DescribeOrganizationResult& WithMigrationAdmin(Aws::String&& value) { SetMigrationAdmin(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithMigrationAdmin(const char* value) { SetMigrationAdmin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if interoperability is enabled for this organization.</p>
     */
    inline bool GetInteroperabilityEnabled() const{ return m_interoperabilityEnabled; }
    inline void SetInteroperabilityEnabled(bool value) { m_interoperabilityEnabled = value; }
    inline DescribeOrganizationResult& WithInteroperabilityEnabled(bool value) { SetInteroperabilityEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;

    Aws::String m_alias;

    Aws::String m_state;

    Aws::String m_directoryId;

    Aws::String m_directoryType;

    Aws::String m_defaultMailDomain;

    Aws::Utils::DateTime m_completedDate;

    Aws::String m_errorMessage;

    Aws::String m_aRN;

    Aws::String m_migrationAdmin;

    bool m_interoperabilityEnabled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
