/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/MasterUserOptions.h>
#include <aws/opensearch/model/SAMLOptionsInput.h>
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
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsInput();
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True to enable fine-grained access control.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True to enable fine-grained access control.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True to enable fine-grained access control.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True to enable fine-grained access control.</p>
     */
    inline AdvancedSecurityOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>True to enable the internal user database.</p>
     */
    inline bool GetInternalUserDatabaseEnabled() const{ return m_internalUserDatabaseEnabled; }

    /**
     * <p>True to enable the internal user database.</p>
     */
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }

    /**
     * <p>True to enable the internal user database.</p>
     */
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }

    /**
     * <p>True to enable the internal user database.</p>
     */
    inline AdvancedSecurityOptionsInput& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}


    /**
     * <p>Container for information about the master user.</p>
     */
    inline const MasterUserOptions& GetMasterUserOptions() const{ return m_masterUserOptions; }

    /**
     * <p>Container for information about the master user.</p>
     */
    inline bool MasterUserOptionsHasBeenSet() const { return m_masterUserOptionsHasBeenSet; }

    /**
     * <p>Container for information about the master user.</p>
     */
    inline void SetMasterUserOptions(const MasterUserOptions& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = value; }

    /**
     * <p>Container for information about the master user.</p>
     */
    inline void SetMasterUserOptions(MasterUserOptions&& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = std::move(value); }

    /**
     * <p>Container for information about the master user.</p>
     */
    inline AdvancedSecurityOptionsInput& WithMasterUserOptions(const MasterUserOptions& value) { SetMasterUserOptions(value); return *this;}

    /**
     * <p>Container for information about the master user.</p>
     */
    inline AdvancedSecurityOptionsInput& WithMasterUserOptions(MasterUserOptions&& value) { SetMasterUserOptions(std::move(value)); return *this;}


    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline const SAMLOptionsInput& GetSAMLOptions() const{ return m_sAMLOptions; }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline bool SAMLOptionsHasBeenSet() const { return m_sAMLOptionsHasBeenSet; }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline void SetSAMLOptions(const SAMLOptionsInput& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = value; }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline void SetSAMLOptions(SAMLOptionsInput&& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = std::move(value); }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline AdvancedSecurityOptionsInput& WithSAMLOptions(const SAMLOptionsInput& value) { SetSAMLOptions(value); return *this;}

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline AdvancedSecurityOptionsInput& WithSAMLOptions(SAMLOptionsInput&& value) { SetSAMLOptions(std::move(value)); return *this;}


    /**
     * <p>True to enable a 30-day migration period during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline bool GetAnonymousAuthEnabled() const{ return m_anonymousAuthEnabled; }

    /**
     * <p>True to enable a 30-day migration period during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline bool AnonymousAuthEnabledHasBeenSet() const { return m_anonymousAuthEnabledHasBeenSet; }

    /**
     * <p>True to enable a 30-day migration period during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline void SetAnonymousAuthEnabled(bool value) { m_anonymousAuthEnabledHasBeenSet = true; m_anonymousAuthEnabled = value; }

    /**
     * <p>True to enable a 30-day migration period during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline AdvancedSecurityOptionsInput& WithAnonymousAuthEnabled(bool value) { SetAnonymousAuthEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled;
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    MasterUserOptions m_masterUserOptions;
    bool m_masterUserOptionsHasBeenSet = false;

    SAMLOptionsInput m_sAMLOptions;
    bool m_sAMLOptionsHasBeenSet = false;

    bool m_anonymousAuthEnabled;
    bool m_anonymousAuthEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
