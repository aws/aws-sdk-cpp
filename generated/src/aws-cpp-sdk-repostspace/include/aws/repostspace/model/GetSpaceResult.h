/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/ConfigurationStatus.h>
#include <aws/repostspace/model/VanityDomainStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/repostspace/model/TierLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/repostspace/model/SupportedEmailDomainsStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/model/Role.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace repostspace
{
namespace Model
{
  class GetSpaceResult
  {
  public:
    AWS_REPOSTSPACE_API GetSpaceResult() = default;
    AWS_REPOSTSPACE_API GetSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API GetSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    GetSpaceResult& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSpaceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the private re:Post.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetSpaceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation or deletion status of the private re:Post.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetSpaceResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline ConfigurationStatus GetConfigurationStatus() const { return m_configurationStatus; }
    inline void SetConfigurationStatus(ConfigurationStatus value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = value; }
    inline GetSpaceResult& WithConfigurationStatus(ConfigurationStatus value) { SetConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity Center identifier for the Application Instance.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    GetSpaceResult& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
    template<typename IdentityStoreIdT = Aws::String>
    void SetIdentityStoreId(IdentityStoreIdT&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::forward<IdentityStoreIdT>(value); }
    template<typename IdentityStoreIdT = Aws::String>
    GetSpaceResult& WithIdentityStoreId(IdentityStoreIdT&& value) { SetIdentityStoreId(std::forward<IdentityStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    GetSpaceResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSpaceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the custom subdomain.</p>
     */
    inline VanityDomainStatus GetVanityDomainStatus() const { return m_vanityDomainStatus; }
    inline void SetVanityDomainStatus(VanityDomainStatus value) { m_vanityDomainStatusHasBeenSet = true; m_vanityDomainStatus = value; }
    inline GetSpaceResult& WithVanityDomainStatus(VanityDomainStatus value) { SetVanityDomainStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline const Aws::String& GetVanityDomain() const { return m_vanityDomain; }
    template<typename VanityDomainT = Aws::String>
    void SetVanityDomain(VanityDomainT&& value) { m_vanityDomainHasBeenSet = true; m_vanityDomain = std::forward<VanityDomainT>(value); }
    template<typename VanityDomainT = Aws::String>
    GetSpaceResult& WithVanityDomain(VanityDomainT&& value) { SetVanityDomain(std::forward<VanityDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS generated subdomain of the private re:Post</p>
     */
    inline const Aws::String& GetRandomDomain() const { return m_randomDomain; }
    template<typename RandomDomainT = Aws::String>
    void SetRandomDomain(RandomDomainT&& value) { m_randomDomainHasBeenSet = true; m_randomDomain = std::forward<RandomDomainT>(value); }
    template<typename RandomDomainT = Aws::String>
    GetSpaceResult& WithRandomDomain(RandomDomainT&& value) { SetRandomDomain(std::forward<RandomDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline const Aws::String& GetCustomerRoleArn() const { return m_customerRoleArn; }
    template<typename CustomerRoleArnT = Aws::String>
    void SetCustomerRoleArn(CustomerRoleArnT&& value) { m_customerRoleArnHasBeenSet = true; m_customerRoleArn = std::forward<CustomerRoleArnT>(value); }
    template<typename CustomerRoleArnT = Aws::String>
    GetSpaceResult& WithCustomerRoleArn(CustomerRoleArnT&& value) { SetCustomerRoleArn(std::forward<CustomerRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const { return m_createDateTime; }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    void SetCreateDateTime(CreateDateTimeT&& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = std::forward<CreateDateTimeT>(value); }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    GetSpaceResult& WithCreateDateTime(CreateDateTimeT&& value) { SetCreateDateTime(std::forward<CreateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const { return m_deleteDateTime; }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    void SetDeleteDateTime(DeleteDateTimeT&& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = std::forward<DeleteDateTimeT>(value); }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    GetSpaceResult& WithDeleteDateTime(DeleteDateTimeT&& value) { SetDeleteDateTime(std::forward<DeleteDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline TierLevel GetTier() const { return m_tier; }
    inline void SetTier(TierLevel value) { m_tierHasBeenSet = true; m_tier = value; }
    inline GetSpaceResult& WithTier(TierLevel value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline long long GetStorageLimit() const { return m_storageLimit; }
    inline void SetStorageLimit(long long value) { m_storageLimitHasBeenSet = true; m_storageLimit = value; }
    inline GetSpaceResult& WithStorageLimit(long long value) { SetStorageLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of accessor identifiers and their roles.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Role>>& GetRoles() const { return m_roles; }
    template<typename RolesT = Aws::Map<Aws::String, Aws::Vector<Role>>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Map<Aws::String, Aws::Vector<Role>>>
    GetSpaceResult& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesKeyT = Aws::String, typename RolesValueT = Aws::Vector<Role>>
    GetSpaceResult& AddRoles(RolesKeyT&& key, RolesValueT&& value) {
      m_rolesHasBeenSet = true; m_roles.emplace(std::forward<RolesKeyT>(key), std::forward<RolesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline const Aws::String& GetUserKMSKey() const { return m_userKMSKey; }
    template<typename UserKMSKeyT = Aws::String>
    void SetUserKMSKey(UserKMSKeyT&& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = std::forward<UserKMSKeyT>(value); }
    template<typename UserKMSKeyT = Aws::String>
    GetSpaceResult& WithUserKMSKey(UserKMSKeyT&& value) { SetUserKMSKey(std::forward<UserKMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that have onboarded to the private re:Post.</p>
     */
    inline int GetUserCount() const { return m_userCount; }
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }
    inline GetSpaceResult& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline long long GetContentSize() const { return m_contentSize; }
    inline void SetContentSize(long long value) { m_contentSizeHasBeenSet = true; m_contentSize = value; }
    inline GetSpaceResult& WithContentSize(long long value) { SetContentSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const SupportedEmailDomainsStatus& GetSupportedEmailDomains() const { return m_supportedEmailDomains; }
    template<typename SupportedEmailDomainsT = SupportedEmailDomainsStatus>
    void SetSupportedEmailDomains(SupportedEmailDomainsT&& value) { m_supportedEmailDomainsHasBeenSet = true; m_supportedEmailDomains = std::forward<SupportedEmailDomainsT>(value); }
    template<typename SupportedEmailDomainsT = SupportedEmailDomainsStatus>
    GetSpaceResult& WithSupportedEmailDomains(SupportedEmailDomainsT&& value) { SetSupportedEmailDomains(std::forward<SupportedEmailDomainsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSpaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ConfigurationStatus m_configurationStatus{ConfigurationStatus::NOT_SET};
    bool m_configurationStatusHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    VanityDomainStatus m_vanityDomainStatus{VanityDomainStatus::NOT_SET};
    bool m_vanityDomainStatusHasBeenSet = false;

    Aws::String m_vanityDomain;
    bool m_vanityDomainHasBeenSet = false;

    Aws::String m_randomDomain;
    bool m_randomDomainHasBeenSet = false;

    Aws::String m_customerRoleArn;
    bool m_customerRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createDateTime{};
    bool m_createDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteDateTime{};
    bool m_deleteDateTimeHasBeenSet = false;

    TierLevel m_tier{TierLevel::NOT_SET};
    bool m_tierHasBeenSet = false;

    long long m_storageLimit{0};
    bool m_storageLimitHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Role>> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::String m_userKMSKey;
    bool m_userKMSKeyHasBeenSet = false;

    int m_userCount{0};
    bool m_userCountHasBeenSet = false;

    long long m_contentSize{0};
    bool m_contentSizeHasBeenSet = false;

    SupportedEmailDomainsStatus m_supportedEmailDomains;
    bool m_supportedEmailDomainsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
