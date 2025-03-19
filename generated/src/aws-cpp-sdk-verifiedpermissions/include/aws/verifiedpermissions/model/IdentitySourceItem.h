/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ConfigurationItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>A structure that defines an identity source.</p> <p>This data type is a
   * response parameter to the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListIdentitySources.html">ListIdentitySources</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/IdentitySourceItem">AWS
   * API Reference</a></p>
   */
  class IdentitySourceItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceItem() = default;
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    IdentitySourceItem& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const { return m_identitySourceId; }
    inline bool IdentitySourceIdHasBeenSet() const { return m_identitySourceIdHasBeenSet; }
    template<typename IdentitySourceIdT = Aws::String>
    void SetIdentitySourceId(IdentitySourceIdT&& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = std::forward<IdentitySourceIdT>(value); }
    template<typename IdentitySourceIdT = Aws::String>
    IdentitySourceItem& WithIdentitySourceId(IdentitySourceIdT&& value) { SetIdentitySourceId(std::forward<IdentitySourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    IdentitySourceItem& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    IdentitySourceItem& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const { return m_principalEntityType; }
    inline bool PrincipalEntityTypeHasBeenSet() const { return m_principalEntityTypeHasBeenSet; }
    template<typename PrincipalEntityTypeT = Aws::String>
    void SetPrincipalEntityType(PrincipalEntityTypeT&& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = std::forward<PrincipalEntityTypeT>(value); }
    template<typename PrincipalEntityTypeT = Aws::String>
    IdentitySourceItem& WithPrincipalEntityType(PrincipalEntityTypeT&& value) { SetPrincipalEntityType(std::forward<PrincipalEntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline const ConfigurationItem& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ConfigurationItem>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ConfigurationItem>
    IdentitySourceItem& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_identitySourceId;
    bool m_identitySourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_principalEntityType;
    bool m_principalEntityTypeHasBeenSet = false;

    ConfigurationItem m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
