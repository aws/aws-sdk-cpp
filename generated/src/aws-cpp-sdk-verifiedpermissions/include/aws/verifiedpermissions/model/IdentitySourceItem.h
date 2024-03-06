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
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceItem();
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline IdentitySourceItem& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline IdentitySourceItem& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const{ return m_identitySourceId; }

    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline bool IdentitySourceIdHasBeenSet() const { return m_identitySourceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline void SetIdentitySourceId(const Aws::String& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = value; }

    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline void SetIdentitySourceId(Aws::String&& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = std::move(value); }

    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline void SetIdentitySourceId(const char* value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId.assign(value); }

    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline IdentitySourceItem& WithIdentitySourceId(const Aws::String& value) { SetIdentitySourceId(value); return *this;}

    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline IdentitySourceItem& WithIdentitySourceId(Aws::String&& value) { SetIdentitySourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the identity source.</p>
     */
    inline IdentitySourceItem& WithIdentitySourceId(const char* value) { SetIdentitySourceId(value); return *this;}


    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline IdentitySourceItem& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline IdentitySourceItem& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline IdentitySourceItem& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline IdentitySourceItem& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the policy store that contains the identity source.</p>
     */
    inline IdentitySourceItem& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const{ return m_principalEntityType; }

    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline bool PrincipalEntityTypeHasBeenSet() const { return m_principalEntityTypeHasBeenSet; }

    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline void SetPrincipalEntityType(const Aws::String& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = value; }

    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline void SetPrincipalEntityType(Aws::String&& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = std::move(value); }

    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline void SetPrincipalEntityType(const char* value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType.assign(value); }

    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline IdentitySourceItem& WithPrincipalEntityType(const Aws::String& value) { SetPrincipalEntityType(value); return *this;}

    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline IdentitySourceItem& WithPrincipalEntityType(Aws::String&& value) { SetPrincipalEntityType(std::move(value)); return *this;}

    /**
     * <p>The Cedar entity type of the principals returned from the IdP associated with
     * this identity source.</p>
     */
    inline IdentitySourceItem& WithPrincipalEntityType(const char* value) { SetPrincipalEntityType(value); return *this;}


    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline const ConfigurationItem& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline void SetConfiguration(const ConfigurationItem& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline void SetConfiguration(ConfigurationItem&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline IdentitySourceItem& WithConfiguration(const ConfigurationItem& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline IdentitySourceItem& WithConfiguration(ConfigurationItem&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_identitySourceId;
    bool m_identitySourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
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
