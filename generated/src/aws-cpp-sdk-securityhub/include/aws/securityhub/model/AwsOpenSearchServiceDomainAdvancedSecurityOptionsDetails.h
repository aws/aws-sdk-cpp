/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainMasterUserOptionsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about domain access control options. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails();
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables fine-grained access control. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables fine-grained access control. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables fine-grained access control. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables fine-grained access control. </p>
     */
    inline AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Enables the internal user database. </p>
     */
    inline bool GetInternalUserDatabaseEnabled() const{ return m_internalUserDatabaseEnabled; }

    /**
     * <p>Enables the internal user database. </p>
     */
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }

    /**
     * <p>Enables the internal user database. </p>
     */
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }

    /**
     * <p>Enables the internal user database. </p>
     */
    inline AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}


    /**
     * <p>Specifies information about the master user of the domain. </p>
     */
    inline const AwsOpenSearchServiceDomainMasterUserOptionsDetails& GetMasterUserOptions() const{ return m_masterUserOptions; }

    /**
     * <p>Specifies information about the master user of the domain. </p>
     */
    inline bool MasterUserOptionsHasBeenSet() const { return m_masterUserOptionsHasBeenSet; }

    /**
     * <p>Specifies information about the master user of the domain. </p>
     */
    inline void SetMasterUserOptions(const AwsOpenSearchServiceDomainMasterUserOptionsDetails& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = value; }

    /**
     * <p>Specifies information about the master user of the domain. </p>
     */
    inline void SetMasterUserOptions(AwsOpenSearchServiceDomainMasterUserOptionsDetails&& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = std::move(value); }

    /**
     * <p>Specifies information about the master user of the domain. </p>
     */
    inline AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& WithMasterUserOptions(const AwsOpenSearchServiceDomainMasterUserOptionsDetails& value) { SetMasterUserOptions(value); return *this;}

    /**
     * <p>Specifies information about the master user of the domain. </p>
     */
    inline AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& WithMasterUserOptions(AwsOpenSearchServiceDomainMasterUserOptionsDetails&& value) { SetMasterUserOptions(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled;
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    AwsOpenSearchServiceDomainMasterUserOptionsDetails m_masterUserOptions;
    bool m_masterUserOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
