/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/MasterUserOptions.h>
#include <aws/opensearch/model/SAMLOptionsInput.h>
#include <aws/opensearch/model/JWTOptionsInput.h>
#include <aws/opensearch/model/IAMFederationOptionsInput.h>
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
   * <p>Options for enabling and configuring fine-grained access control. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html">Fine-grained
   * access control in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdvancedSecurityOptionsInput">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsInput() = default;
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True to enable fine-grained access control.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AdvancedSecurityOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to enable the internal user database.</p>
     */
    inline bool GetInternalUserDatabaseEnabled() const { return m_internalUserDatabaseEnabled; }
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }
    inline AdvancedSecurityOptionsInput& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the master user.</p>
     */
    inline const MasterUserOptions& GetMasterUserOptions() const { return m_masterUserOptions; }
    inline bool MasterUserOptionsHasBeenSet() const { return m_masterUserOptionsHasBeenSet; }
    template<typename MasterUserOptionsT = MasterUserOptions>
    void SetMasterUserOptions(MasterUserOptionsT&& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = std::forward<MasterUserOptionsT>(value); }
    template<typename MasterUserOptionsT = MasterUserOptions>
    AdvancedSecurityOptionsInput& WithMasterUserOptions(MasterUserOptionsT&& value) { SetMasterUserOptions(std::forward<MasterUserOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline const SAMLOptionsInput& GetSAMLOptions() const { return m_sAMLOptions; }
    inline bool SAMLOptionsHasBeenSet() const { return m_sAMLOptionsHasBeenSet; }
    template<typename SAMLOptionsT = SAMLOptionsInput>
    void SetSAMLOptions(SAMLOptionsT&& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = std::forward<SAMLOptionsT>(value); }
    template<typename SAMLOptionsT = SAMLOptionsInput>
    AdvancedSecurityOptionsInput& WithSAMLOptions(SAMLOptionsT&& value) { SetSAMLOptions(std::forward<SAMLOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the JWT configuration of the Amazon
     * OpenSearch Service. </p>
     */
    inline const JWTOptionsInput& GetJWTOptions() const { return m_jWTOptions; }
    inline bool JWTOptionsHasBeenSet() const { return m_jWTOptionsHasBeenSet; }
    template<typename JWTOptionsT = JWTOptionsInput>
    void SetJWTOptions(JWTOptionsT&& value) { m_jWTOptionsHasBeenSet = true; m_jWTOptions = std::forward<JWTOptionsT>(value); }
    template<typename JWTOptionsT = JWTOptionsInput>
    AdvancedSecurityOptionsInput& WithJWTOptions(JWTOptionsT&& value) { SetJWTOptions(std::forward<JWTOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the IAM federation configuration for an
     * OpenSearch UI application.</p>
     */
    inline const IAMFederationOptionsInput& GetIAMFederationOptions() const { return m_iAMFederationOptions; }
    inline bool IAMFederationOptionsHasBeenSet() const { return m_iAMFederationOptionsHasBeenSet; }
    template<typename IAMFederationOptionsT = IAMFederationOptionsInput>
    void SetIAMFederationOptions(IAMFederationOptionsT&& value) { m_iAMFederationOptionsHasBeenSet = true; m_iAMFederationOptions = std::forward<IAMFederationOptionsT>(value); }
    template<typename IAMFederationOptionsT = IAMFederationOptionsInput>
    AdvancedSecurityOptionsInput& WithIAMFederationOptions(IAMFederationOptionsT&& value) { SetIAMFederationOptions(std::forward<IAMFederationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to enable a 30-day migration period during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline bool GetAnonymousAuthEnabled() const { return m_anonymousAuthEnabled; }
    inline bool AnonymousAuthEnabledHasBeenSet() const { return m_anonymousAuthEnabledHasBeenSet; }
    inline void SetAnonymousAuthEnabled(bool value) { m_anonymousAuthEnabledHasBeenSet = true; m_anonymousAuthEnabled = value; }
    inline AdvancedSecurityOptionsInput& WithAnonymousAuthEnabled(bool value) { SetAnonymousAuthEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled{false};
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    MasterUserOptions m_masterUserOptions;
    bool m_masterUserOptionsHasBeenSet = false;

    SAMLOptionsInput m_sAMLOptions;
    bool m_sAMLOptionsHasBeenSet = false;

    JWTOptionsInput m_jWTOptions;
    bool m_jWTOptionsHasBeenSet = false;

    IAMFederationOptionsInput m_iAMFederationOptions;
    bool m_iAMFederationOptionsHasBeenSet = false;

    bool m_anonymousAuthEnabled{false};
    bool m_anonymousAuthEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
