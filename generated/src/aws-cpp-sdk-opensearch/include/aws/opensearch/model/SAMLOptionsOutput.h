/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/SAMLIdp.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Describes the SAML application configured for the domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SAMLOptionsOutput">AWS
   * API Reference</a></p>
   */
  class SAMLOptionsOutput
  {
  public:
    AWS_OPENSEARCHSERVICE_API SAMLOptionsOutput() = default;
    AWS_OPENSEARCHSERVICE_API SAMLOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SAMLOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if SAML is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SAMLOptionsOutput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the SAML identity provider's information.</p>
     */
    inline const SAMLIdp& GetIdp() const { return m_idp; }
    inline bool IdpHasBeenSet() const { return m_idpHasBeenSet; }
    template<typename IdpT = SAMLIdp>
    void SetIdp(IdpT&& value) { m_idpHasBeenSet = true; m_idp = std::forward<IdpT>(value); }
    template<typename IdpT = SAMLIdp>
    SAMLOptionsOutput& WithIdp(IdpT&& value) { SetIdp(std::forward<IdpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used for matching the SAML subject attribute.</p>
     */
    inline const Aws::String& GetSubjectKey() const { return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    template<typename SubjectKeyT = Aws::String>
    void SetSubjectKey(SubjectKeyT&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::forward<SubjectKeyT>(value); }
    template<typename SubjectKeyT = Aws::String>
    SAMLOptionsOutput& WithSubjectKey(SubjectKeyT&& value) { SetSubjectKey(std::forward<SubjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used for matching the SAML roles attribute.</p>
     */
    inline const Aws::String& GetRolesKey() const { return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    template<typename RolesKeyT = Aws::String>
    void SetRolesKey(RolesKeyT&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::forward<RolesKeyT>(value); }
    template<typename RolesKeyT = Aws::String>
    SAMLOptionsOutput& WithRolesKey(RolesKeyT&& value) { SetRolesKey(std::forward<RolesKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.</p>
     */
    inline int GetSessionTimeoutMinutes() const { return m_sessionTimeoutMinutes; }
    inline bool SessionTimeoutMinutesHasBeenSet() const { return m_sessionTimeoutMinutesHasBeenSet; }
    inline void SetSessionTimeoutMinutes(int value) { m_sessionTimeoutMinutesHasBeenSet = true; m_sessionTimeoutMinutes = value; }
    inline SAMLOptionsOutput& WithSessionTimeoutMinutes(int value) { SetSessionTimeoutMinutes(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    SAMLIdp m_idp;
    bool m_idpHasBeenSet = false;

    Aws::String m_subjectKey;
    bool m_subjectKeyHasBeenSet = false;

    Aws::String m_rolesKey;
    bool m_rolesKeyHasBeenSet = false;

    int m_sessionTimeoutMinutes{0};
    bool m_sessionTimeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
