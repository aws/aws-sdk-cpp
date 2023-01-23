/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/CredentialSummary.h>
#include <aws/rolesanywhere/model/InstanceProperty.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The state of the subject after a read or write operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/SubjectDetail">AWS
   * API Reference</a></p>
   */
  class SubjectDetail
  {
  public:
    AWS_ROLESANYWHERE_API SubjectDetail();
    AWS_ROLESANYWHERE_API SubjectDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API SubjectDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ISO-8601 timestamp when the subject was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO-8601 timestamp when the subject was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the subject was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the subject was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the subject was created. </p>
     */
    inline SubjectDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the subject was created. </p>
     */
    inline SubjectDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline const Aws::Vector<CredentialSummary>& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline void SetCredentials(const Aws::Vector<CredentialSummary>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline void SetCredentials(Aws::Vector<CredentialSummary>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline SubjectDetail& WithCredentials(const Aws::Vector<CredentialSummary>& value) { SetCredentials(value); return *this;}

    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline SubjectDetail& WithCredentials(Aws::Vector<CredentialSummary>&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline SubjectDetail& AddCredentials(const CredentialSummary& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }

    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this Subject.</p>
     */
    inline SubjectDetail& AddCredentials(CredentialSummary&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }


    /**
     * <p>The enabled status of the subject.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>The enabled status of the subject.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>The enabled status of the subject.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>The enabled status of the subject.</p>
     */
    inline SubjectDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline const Aws::Vector<InstanceProperty>& GetInstanceProperties() const{ return m_instanceProperties; }

    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline bool InstancePropertiesHasBeenSet() const { return m_instancePropertiesHasBeenSet; }

    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline void SetInstanceProperties(const Aws::Vector<InstanceProperty>& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties = value; }

    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline void SetInstanceProperties(Aws::Vector<InstanceProperty>&& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties = std::move(value); }

    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline SubjectDetail& WithInstanceProperties(const Aws::Vector<InstanceProperty>& value) { SetInstanceProperties(value); return *this;}

    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline SubjectDetail& WithInstanceProperties(Aws::Vector<InstanceProperty>&& value) { SetInstanceProperties(std::move(value)); return *this;}

    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline SubjectDetail& AddInstanceProperties(const InstanceProperty& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties.push_back(value); return *this; }

    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline SubjectDetail& AddInstanceProperties(InstanceProperty&& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The ISO-8601 timestamp of the last time this Subject requested temporary
     * session credentials.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenAt() const{ return m_lastSeenAt; }

    /**
     * <p>The ISO-8601 timestamp of the last time this Subject requested temporary
     * session credentials.</p>
     */
    inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp of the last time this Subject requested temporary
     * session credentials.</p>
     */
    inline void SetLastSeenAt(const Aws::Utils::DateTime& value) { m_lastSeenAtHasBeenSet = true; m_lastSeenAt = value; }

    /**
     * <p>The ISO-8601 timestamp of the last time this Subject requested temporary
     * session credentials.</p>
     */
    inline void SetLastSeenAt(Aws::Utils::DateTime&& value) { m_lastSeenAtHasBeenSet = true; m_lastSeenAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp of the last time this Subject requested temporary
     * session credentials.</p>
     */
    inline SubjectDetail& WithLastSeenAt(const Aws::Utils::DateTime& value) { SetLastSeenAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp of the last time this Subject requested temporary
     * session credentials.</p>
     */
    inline SubjectDetail& WithLastSeenAt(Aws::Utils::DateTime&& value) { SetLastSeenAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetSubjectArn() const{ return m_subjectArn; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline bool SubjectArnHasBeenSet() const { return m_subjectArnHasBeenSet; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetSubjectArn(const Aws::String& value) { m_subjectArnHasBeenSet = true; m_subjectArn = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetSubjectArn(Aws::String&& value) { m_subjectArnHasBeenSet = true; m_subjectArn = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetSubjectArn(const char* value) { m_subjectArnHasBeenSet = true; m_subjectArn.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline SubjectDetail& WithSubjectArn(const Aws::String& value) { SetSubjectArn(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline SubjectDetail& WithSubjectArn(Aws::String&& value) { SetSubjectArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline SubjectDetail& WithSubjectArn(const char* value) { SetSubjectArn(value); return *this;}


    /**
     * <p>The id of the resource</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p>The id of the resource</p>
     */
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }

    /**
     * <p>The id of the resource</p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }

    /**
     * <p>The id of the resource</p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }

    /**
     * <p>The id of the resource</p>
     */
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }

    /**
     * <p>The id of the resource</p>
     */
    inline SubjectDetail& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p>The id of the resource</p>
     */
    inline SubjectDetail& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p>The id of the resource</p>
     */
    inline SubjectDetail& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}


    /**
     * <p>The ISO-8601 timestamp when the subject was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO-8601 timestamp when the subject was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the subject was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the subject was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the subject was last updated.</p>
     */
    inline SubjectDetail& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the subject was last updated.</p>
     */
    inline SubjectDetail& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline const Aws::String& GetX509Subject() const{ return m_x509Subject; }

    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline bool X509SubjectHasBeenSet() const { return m_x509SubjectHasBeenSet; }

    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline void SetX509Subject(const Aws::String& value) { m_x509SubjectHasBeenSet = true; m_x509Subject = value; }

    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline void SetX509Subject(Aws::String&& value) { m_x509SubjectHasBeenSet = true; m_x509Subject = std::move(value); }

    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline void SetX509Subject(const char* value) { m_x509SubjectHasBeenSet = true; m_x509Subject.assign(value); }

    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline SubjectDetail& WithX509Subject(const Aws::String& value) { SetX509Subject(value); return *this;}

    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline SubjectDetail& WithX509Subject(Aws::String&& value) { SetX509Subject(std::move(value)); return *this;}

    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline SubjectDetail& WithX509Subject(const char* value) { SetX509Subject(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<CredentialSummary> m_credentials;
    bool m_credentialsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<InstanceProperty> m_instanceProperties;
    bool m_instancePropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeenAt;
    bool m_lastSeenAtHasBeenSet = false;

    Aws::String m_subjectArn;
    bool m_subjectArnHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_x509Subject;
    bool m_x509SubjectHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
