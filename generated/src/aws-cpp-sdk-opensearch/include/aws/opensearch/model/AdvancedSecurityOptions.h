/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/SAMLOptionsOutput.h>
#include <aws/opensearch/model/JWTOptionsOutput.h>
#include <aws/opensearch/model/IAMFederationOptionsOutput.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Container for fine-grained access control settings.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdvancedSecurityOptions">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptions() = default;
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if fine-grained access control is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AdvancedSecurityOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline bool GetInternalUserDatabaseEnabled() const { return m_internalUserDatabaseEnabled; }
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }
    inline AdvancedSecurityOptions& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline const SAMLOptionsOutput& GetSAMLOptions() const { return m_sAMLOptions; }
    inline bool SAMLOptionsHasBeenSet() const { return m_sAMLOptionsHasBeenSet; }
    template<typename SAMLOptionsT = SAMLOptionsOutput>
    void SetSAMLOptions(SAMLOptionsT&& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = std::forward<SAMLOptionsT>(value); }
    template<typename SAMLOptionsT = SAMLOptionsOutput>
    AdvancedSecurityOptions& WithSAMLOptions(SAMLOptionsT&& value) { SetSAMLOptions(std::forward<SAMLOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the JWT configuration of the Amazon
     * OpenSearch Service.</p>
     */
    inline const JWTOptionsOutput& GetJWTOptions() const { return m_jWTOptions; }
    inline bool JWTOptionsHasBeenSet() const { return m_jWTOptionsHasBeenSet; }
    template<typename JWTOptionsT = JWTOptionsOutput>
    void SetJWTOptions(JWTOptionsT&& value) { m_jWTOptionsHasBeenSet = true; m_jWTOptions = std::forward<JWTOptionsT>(value); }
    template<typename JWTOptionsT = JWTOptionsOutput>
    AdvancedSecurityOptions& WithJWTOptions(JWTOptionsT&& value) { SetJWTOptions(std::forward<JWTOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the IAM federation configuration for an
     * OpenSearch UI application.</p>
     */
    inline const IAMFederationOptionsOutput& GetIAMFederationOptions() const { return m_iAMFederationOptions; }
    inline bool IAMFederationOptionsHasBeenSet() const { return m_iAMFederationOptionsHasBeenSet; }
    template<typename IAMFederationOptionsT = IAMFederationOptionsOutput>
    void SetIAMFederationOptions(IAMFederationOptionsT&& value) { m_iAMFederationOptionsHasBeenSet = true; m_iAMFederationOptions = std::forward<IAMFederationOptionsT>(value); }
    template<typename IAMFederationOptionsT = IAMFederationOptionsOutput>
    AdvancedSecurityOptions& WithIAMFederationOptions(IAMFederationOptionsT&& value) { SetIAMFederationOptions(std::forward<IAMFederationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the migration period will be disabled. Only necessary when
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetAnonymousAuthDisableDate() const { return m_anonymousAuthDisableDate; }
    inline bool AnonymousAuthDisableDateHasBeenSet() const { return m_anonymousAuthDisableDateHasBeenSet; }
    template<typename AnonymousAuthDisableDateT = Aws::Utils::DateTime>
    void SetAnonymousAuthDisableDate(AnonymousAuthDisableDateT&& value) { m_anonymousAuthDisableDateHasBeenSet = true; m_anonymousAuthDisableDate = std::forward<AnonymousAuthDisableDateT>(value); }
    template<typename AnonymousAuthDisableDateT = Aws::Utils::DateTime>
    AdvancedSecurityOptions& WithAnonymousAuthDisableDate(AnonymousAuthDisableDateT&& value) { SetAnonymousAuthDisableDate(std::forward<AnonymousAuthDisableDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if a 30-day migration period is enabled, during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline bool GetAnonymousAuthEnabled() const { return m_anonymousAuthEnabled; }
    inline bool AnonymousAuthEnabledHasBeenSet() const { return m_anonymousAuthEnabledHasBeenSet; }
    inline void SetAnonymousAuthEnabled(bool value) { m_anonymousAuthEnabledHasBeenSet = true; m_anonymousAuthEnabled = value; }
    inline AdvancedSecurityOptions& WithAnonymousAuthEnabled(bool value) { SetAnonymousAuthEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled{false};
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    SAMLOptionsOutput m_sAMLOptions;
    bool m_sAMLOptionsHasBeenSet = false;

    JWTOptionsOutput m_jWTOptions;
    bool m_jWTOptionsHasBeenSet = false;

    IAMFederationOptionsOutput m_iAMFederationOptions;
    bool m_iAMFederationOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_anonymousAuthDisableDate{};
    bool m_anonymousAuthDisableDateHasBeenSet = false;

    bool m_anonymousAuthEnabled{false};
    bool m_anonymousAuthEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
