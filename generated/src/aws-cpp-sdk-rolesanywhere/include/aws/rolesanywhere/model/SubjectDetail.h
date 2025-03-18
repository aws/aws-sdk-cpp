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
    AWS_ROLESANYWHERE_API SubjectDetail() = default;
    AWS_ROLESANYWHERE_API SubjectDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API SubjectDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ISO-8601 timestamp when the subject was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SubjectDetail& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The temporary session credentials vended at the last authenticating call with
     * this subject.</p>
     */
    inline const Aws::Vector<CredentialSummary>& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = Aws::Vector<CredentialSummary>>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Aws::Vector<CredentialSummary>>
    SubjectDetail& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    template<typename CredentialsT = CredentialSummary>
    SubjectDetail& AddCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials.emplace_back(std::forward<CredentialsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The enabled status of the subject.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SubjectDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified instance properties associated with the request.</p>
     */
    inline const Aws::Vector<InstanceProperty>& GetInstanceProperties() const { return m_instanceProperties; }
    inline bool InstancePropertiesHasBeenSet() const { return m_instancePropertiesHasBeenSet; }
    template<typename InstancePropertiesT = Aws::Vector<InstanceProperty>>
    void SetInstanceProperties(InstancePropertiesT&& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties = std::forward<InstancePropertiesT>(value); }
    template<typename InstancePropertiesT = Aws::Vector<InstanceProperty>>
    SubjectDetail& WithInstanceProperties(InstancePropertiesT&& value) { SetInstanceProperties(std::forward<InstancePropertiesT>(value)); return *this;}
    template<typename InstancePropertiesT = InstanceProperty>
    SubjectDetail& AddInstanceProperties(InstancePropertiesT&& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties.emplace_back(std::forward<InstancePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 timestamp of the last time this subject requested temporary
     * session credentials.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenAt() const { return m_lastSeenAt; }
    inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }
    template<typename LastSeenAtT = Aws::Utils::DateTime>
    void SetLastSeenAt(LastSeenAtT&& value) { m_lastSeenAtHasBeenSet = true; m_lastSeenAt = std::forward<LastSeenAtT>(value); }
    template<typename LastSeenAtT = Aws::Utils::DateTime>
    SubjectDetail& WithLastSeenAt(LastSeenAtT&& value) { SetLastSeenAt(std::forward<LastSeenAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetSubjectArn() const { return m_subjectArn; }
    inline bool SubjectArnHasBeenSet() const { return m_subjectArnHasBeenSet; }
    template<typename SubjectArnT = Aws::String>
    void SetSubjectArn(SubjectArnT&& value) { m_subjectArnHasBeenSet = true; m_subjectArn = std::forward<SubjectArnT>(value); }
    template<typename SubjectArnT = Aws::String>
    SubjectDetail& WithSubjectArn(SubjectArnT&& value) { SetSubjectArn(std::forward<SubjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the resource</p>
     */
    inline const Aws::String& GetSubjectId() const { return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    template<typename SubjectIdT = Aws::String>
    void SetSubjectId(SubjectIdT&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::forward<SubjectIdT>(value); }
    template<typename SubjectIdT = Aws::String>
    SubjectDetail& WithSubjectId(SubjectIdT&& value) { SetSubjectId(std::forward<SubjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 timestamp when the subject was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SubjectDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The x509 principal identifier of the authenticating certificate.</p>
     */
    inline const Aws::String& GetX509Subject() const { return m_x509Subject; }
    inline bool X509SubjectHasBeenSet() const { return m_x509SubjectHasBeenSet; }
    template<typename X509SubjectT = Aws::String>
    void SetX509Subject(X509SubjectT&& value) { m_x509SubjectHasBeenSet = true; m_x509Subject = std::forward<X509SubjectT>(value); }
    template<typename X509SubjectT = Aws::String>
    SubjectDetail& WithX509Subject(X509SubjectT&& value) { SetX509Subject(std::forward<X509SubjectT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<CredentialSummary> m_credentials;
    bool m_credentialsHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<InstanceProperty> m_instanceProperties;
    bool m_instancePropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeenAt{};
    bool m_lastSeenAtHasBeenSet = false;

    Aws::String m_subjectArn;
    bool m_subjectArnHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_x509Subject;
    bool m_x509SubjectHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
