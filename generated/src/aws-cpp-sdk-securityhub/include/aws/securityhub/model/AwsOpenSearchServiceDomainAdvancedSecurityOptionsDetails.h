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
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables fine-grained access control. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the internal user database. </p>
     */
    inline bool GetInternalUserDatabaseEnabled() const { return m_internalUserDatabaseEnabled; }
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }
    inline AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the master user of the domain. </p>
     */
    inline const AwsOpenSearchServiceDomainMasterUserOptionsDetails& GetMasterUserOptions() const { return m_masterUserOptions; }
    inline bool MasterUserOptionsHasBeenSet() const { return m_masterUserOptionsHasBeenSet; }
    template<typename MasterUserOptionsT = AwsOpenSearchServiceDomainMasterUserOptionsDetails>
    void SetMasterUserOptions(MasterUserOptionsT&& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = std::forward<MasterUserOptionsT>(value); }
    template<typename MasterUserOptionsT = AwsOpenSearchServiceDomainMasterUserOptionsDetails>
    AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& WithMasterUserOptions(MasterUserOptionsT&& value) { SetMasterUserOptions(std::forward<MasterUserOptionsT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled{false};
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    AwsOpenSearchServiceDomainMasterUserOptionsDetails m_masterUserOptions;
    bool m_masterUserOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
