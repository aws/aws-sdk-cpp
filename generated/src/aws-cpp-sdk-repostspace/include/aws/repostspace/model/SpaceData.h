/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/ConfigurationStatus.h>
#include <aws/repostspace/model/VanityDomainStatus.h>
#include <aws/repostspace/model/TierLevel.h>
#include <aws/core/utils/DateTime.h>
#include <aws/repostspace/model/SupportedEmailDomainsStatus.h>
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
namespace repostspace
{
namespace Model
{

  /**
   * <p>A structure that contains some information about a private re:Post in the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/SpaceData">AWS
   * API Reference</a></p>
   */
  class SpaceData
  {
  public:
    AWS_REPOSTSPACE_API SpaceData() = default;
    AWS_REPOSTSPACE_API SpaceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API SpaceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    SpaceData& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SpaceData& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the private re:Post.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SpaceData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SpaceData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SpaceData& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline ConfigurationStatus GetConfigurationStatus() const { return m_configurationStatus; }
    inline bool ConfigurationStatusHasBeenSet() const { return m_configurationStatusHasBeenSet; }
    inline void SetConfigurationStatus(ConfigurationStatus value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = value; }
    inline SpaceData& WithConfigurationStatus(ConfigurationStatus value) { SetConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline VanityDomainStatus GetVanityDomainStatus() const { return m_vanityDomainStatus; }
    inline bool VanityDomainStatusHasBeenSet() const { return m_vanityDomainStatusHasBeenSet; }
    inline void SetVanityDomainStatus(VanityDomainStatus value) { m_vanityDomainStatusHasBeenSet = true; m_vanityDomainStatus = value; }
    inline SpaceData& WithVanityDomainStatus(VanityDomainStatus value) { SetVanityDomainStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline const Aws::String& GetVanityDomain() const { return m_vanityDomain; }
    inline bool VanityDomainHasBeenSet() const { return m_vanityDomainHasBeenSet; }
    template<typename VanityDomainT = Aws::String>
    void SetVanityDomain(VanityDomainT&& value) { m_vanityDomainHasBeenSet = true; m_vanityDomain = std::forward<VanityDomainT>(value); }
    template<typename VanityDomainT = Aws::String>
    SpaceData& WithVanityDomain(VanityDomainT&& value) { SetVanityDomain(std::forward<VanityDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline const Aws::String& GetRandomDomain() const { return m_randomDomain; }
    inline bool RandomDomainHasBeenSet() const { return m_randomDomainHasBeenSet; }
    template<typename RandomDomainT = Aws::String>
    void SetRandomDomain(RandomDomainT&& value) { m_randomDomainHasBeenSet = true; m_randomDomain = std::forward<RandomDomainT>(value); }
    template<typename RandomDomainT = Aws::String>
    SpaceData& WithRandomDomain(RandomDomainT&& value) { SetRandomDomain(std::forward<RandomDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline TierLevel GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(TierLevel value) { m_tierHasBeenSet = true; m_tier = value; }
    inline SpaceData& WithTier(TierLevel value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline long long GetStorageLimit() const { return m_storageLimit; }
    inline bool StorageLimitHasBeenSet() const { return m_storageLimitHasBeenSet; }
    inline void SetStorageLimit(long long value) { m_storageLimitHasBeenSet = true; m_storageLimit = value; }
    inline SpaceData& WithStorageLimit(long long value) { SetStorageLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const { return m_createDateTime; }
    inline bool CreateDateTimeHasBeenSet() const { return m_createDateTimeHasBeenSet; }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    void SetCreateDateTime(CreateDateTimeT&& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = std::forward<CreateDateTimeT>(value); }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    SpaceData& WithCreateDateTime(CreateDateTimeT&& value) { SetCreateDateTime(std::forward<CreateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const { return m_deleteDateTime; }
    inline bool DeleteDateTimeHasBeenSet() const { return m_deleteDateTimeHasBeenSet; }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    void SetDeleteDateTime(DeleteDateTimeT&& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = std::forward<DeleteDateTimeT>(value); }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    SpaceData& WithDeleteDateTime(DeleteDateTimeT&& value) { SetDeleteDateTime(std::forward<DeleteDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline const Aws::String& GetUserKMSKey() const { return m_userKMSKey; }
    inline bool UserKMSKeyHasBeenSet() const { return m_userKMSKeyHasBeenSet; }
    template<typename UserKMSKeyT = Aws::String>
    void SetUserKMSKey(UserKMSKeyT&& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = std::forward<UserKMSKeyT>(value); }
    template<typename UserKMSKeyT = Aws::String>
    SpaceData& WithUserKMSKey(UserKMSKeyT&& value) { SetUserKMSKey(std::forward<UserKMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of onboarded users to the private re:Post.</p>
     */
    inline int GetUserCount() const { return m_userCount; }
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }
    inline SpaceData& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline long long GetContentSize() const { return m_contentSize; }
    inline bool ContentSizeHasBeenSet() const { return m_contentSizeHasBeenSet; }
    inline void SetContentSize(long long value) { m_contentSizeHasBeenSet = true; m_contentSize = value; }
    inline SpaceData& WithContentSize(long long value) { SetContentSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const SupportedEmailDomainsStatus& GetSupportedEmailDomains() const { return m_supportedEmailDomains; }
    inline bool SupportedEmailDomainsHasBeenSet() const { return m_supportedEmailDomainsHasBeenSet; }
    template<typename SupportedEmailDomainsT = SupportedEmailDomainsStatus>
    void SetSupportedEmailDomains(SupportedEmailDomainsT&& value) { m_supportedEmailDomainsHasBeenSet = true; m_supportedEmailDomains = std::forward<SupportedEmailDomainsT>(value); }
    template<typename SupportedEmailDomainsT = SupportedEmailDomainsStatus>
    SpaceData& WithSupportedEmailDomains(SupportedEmailDomainsT&& value) { SetSupportedEmailDomains(std::forward<SupportedEmailDomainsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ConfigurationStatus m_configurationStatus{ConfigurationStatus::NOT_SET};
    bool m_configurationStatusHasBeenSet = false;

    VanityDomainStatus m_vanityDomainStatus{VanityDomainStatus::NOT_SET};
    bool m_vanityDomainStatusHasBeenSet = false;

    Aws::String m_vanityDomain;
    bool m_vanityDomainHasBeenSet = false;

    Aws::String m_randomDomain;
    bool m_randomDomainHasBeenSet = false;

    TierLevel m_tier{TierLevel::NOT_SET};
    bool m_tierHasBeenSet = false;

    long long m_storageLimit{0};
    bool m_storageLimitHasBeenSet = false;

    Aws::Utils::DateTime m_createDateTime{};
    bool m_createDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteDateTime{};
    bool m_deleteDateTimeHasBeenSet = false;

    Aws::String m_userKMSKey;
    bool m_userKMSKeyHasBeenSet = false;

    int m_userCount{0};
    bool m_userCountHasBeenSet = false;

    long long m_contentSize{0};
    bool m_contentSizeHasBeenSet = false;

    SupportedEmailDomainsStatus m_supportedEmailDomains;
    bool m_supportedEmailDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
