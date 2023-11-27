/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/ConfigurationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/repostspace/model/TierLevel.h>
#include <aws/repostspace/model/VanityDomainStatus.h>
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
    AWS_REPOSTSPACE_API SpaceData();
    AWS_REPOSTSPACE_API SpaceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API SpaceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline SpaceData& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline SpaceData& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline SpaceData& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline bool ConfigurationStatusHasBeenSet() const { return m_configurationStatusHasBeenSet; }

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = value; }

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = std::move(value); }

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline SpaceData& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}

    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline SpaceData& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline long long GetContentSize() const{ return m_contentSize; }

    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline bool ContentSizeHasBeenSet() const { return m_contentSizeHasBeenSet; }

    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline void SetContentSize(long long value) { m_contentSizeHasBeenSet = true; m_contentSize = value; }

    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline SpaceData& WithContentSize(long long value) { SetContentSize(value); return *this;}


    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const{ return m_createDateTime; }

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline bool CreateDateTimeHasBeenSet() const { return m_createDateTimeHasBeenSet; }

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline void SetCreateDateTime(const Aws::Utils::DateTime& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = value; }

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline void SetCreateDateTime(Aws::Utils::DateTime&& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = std::move(value); }

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline SpaceData& WithCreateDateTime(const Aws::Utils::DateTime& value) { SetCreateDateTime(value); return *this;}

    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline SpaceData& WithCreateDateTime(Aws::Utils::DateTime&& value) { SetCreateDateTime(std::move(value)); return *this;}


    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const{ return m_deleteDateTime; }

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline bool DeleteDateTimeHasBeenSet() const { return m_deleteDateTimeHasBeenSet; }

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline void SetDeleteDateTime(const Aws::Utils::DateTime& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = value; }

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline void SetDeleteDateTime(Aws::Utils::DateTime&& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = std::move(value); }

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline SpaceData& WithDeleteDateTime(const Aws::Utils::DateTime& value) { SetDeleteDateTime(value); return *this;}

    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline SpaceData& WithDeleteDateTime(Aws::Utils::DateTime&& value) { SetDeleteDateTime(std::move(value)); return *this;}


    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline SpaceData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline SpaceData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline SpaceData& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name for the private re:Post.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the private re:Post.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the private re:Post.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the private re:Post.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the private re:Post.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the private re:Post.</p>
     */
    inline SpaceData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the private re:Post.</p>
     */
    inline SpaceData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the private re:Post.</p>
     */
    inline SpaceData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline const Aws::String& GetRandomDomain() const{ return m_randomDomain; }

    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline bool RandomDomainHasBeenSet() const { return m_randomDomainHasBeenSet; }

    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline void SetRandomDomain(const Aws::String& value) { m_randomDomainHasBeenSet = true; m_randomDomain = value; }

    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline void SetRandomDomain(Aws::String&& value) { m_randomDomainHasBeenSet = true; m_randomDomain = std::move(value); }

    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline void SetRandomDomain(const char* value) { m_randomDomainHasBeenSet = true; m_randomDomain.assign(value); }

    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline SpaceData& WithRandomDomain(const Aws::String& value) { SetRandomDomain(value); return *this;}

    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline SpaceData& WithRandomDomain(Aws::String&& value) { SetRandomDomain(std::move(value)); return *this;}

    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline SpaceData& WithRandomDomain(const char* value) { SetRandomDomain(value); return *this;}


    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const Aws::String& value) { m_spaceIdHasBeenSet = true; m_spaceId = value; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(Aws::String&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::move(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const char* value) { m_spaceIdHasBeenSet = true; m_spaceId.assign(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline SpaceData& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline SpaceData& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline SpaceData& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}


    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline SpaceData& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline SpaceData& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline SpaceData& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline long long GetStorageLimit() const{ return m_storageLimit; }

    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline bool StorageLimitHasBeenSet() const { return m_storageLimitHasBeenSet; }

    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline void SetStorageLimit(long long value) { m_storageLimitHasBeenSet = true; m_storageLimit = value; }

    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline SpaceData& WithStorageLimit(long long value) { SetStorageLimit(value); return *this;}


    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline const TierLevel& GetTier() const{ return m_tier; }

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline void SetTier(const TierLevel& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline void SetTier(TierLevel&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline SpaceData& WithTier(const TierLevel& value) { SetTier(value); return *this;}

    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline SpaceData& WithTier(TierLevel&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>The number of onboarded users to the private re:Post.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }

    /**
     * <p>The number of onboarded users to the private re:Post.</p>
     */
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }

    /**
     * <p>The number of onboarded users to the private re:Post.</p>
     */
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }

    /**
     * <p>The number of onboarded users to the private re:Post.</p>
     */
    inline SpaceData& WithUserCount(int value) { SetUserCount(value); return *this;}


    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline const Aws::String& GetUserKMSKey() const{ return m_userKMSKey; }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline bool UserKMSKeyHasBeenSet() const { return m_userKMSKeyHasBeenSet; }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline void SetUserKMSKey(const Aws::String& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = value; }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline void SetUserKMSKey(Aws::String&& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = std::move(value); }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline void SetUserKMSKey(const char* value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey.assign(value); }

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline SpaceData& WithUserKMSKey(const Aws::String& value) { SetUserKMSKey(value); return *this;}

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline SpaceData& WithUserKMSKey(Aws::String&& value) { SetUserKMSKey(std::move(value)); return *this;}

    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline SpaceData& WithUserKMSKey(const char* value) { SetUserKMSKey(value); return *this;}


    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline const Aws::String& GetVanityDomain() const{ return m_vanityDomain; }

    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline bool VanityDomainHasBeenSet() const { return m_vanityDomainHasBeenSet; }

    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline void SetVanityDomain(const Aws::String& value) { m_vanityDomainHasBeenSet = true; m_vanityDomain = value; }

    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline void SetVanityDomain(Aws::String&& value) { m_vanityDomainHasBeenSet = true; m_vanityDomain = std::move(value); }

    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline void SetVanityDomain(const char* value) { m_vanityDomainHasBeenSet = true; m_vanityDomain.assign(value); }

    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline SpaceData& WithVanityDomain(const Aws::String& value) { SetVanityDomain(value); return *this;}

    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline SpaceData& WithVanityDomain(Aws::String&& value) { SetVanityDomain(std::move(value)); return *this;}

    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline SpaceData& WithVanityDomain(const char* value) { SetVanityDomain(value); return *this;}


    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline const VanityDomainStatus& GetVanityDomainStatus() const{ return m_vanityDomainStatus; }

    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline bool VanityDomainStatusHasBeenSet() const { return m_vanityDomainStatusHasBeenSet; }

    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline void SetVanityDomainStatus(const VanityDomainStatus& value) { m_vanityDomainStatusHasBeenSet = true; m_vanityDomainStatus = value; }

    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline void SetVanityDomainStatus(VanityDomainStatus&& value) { m_vanityDomainStatusHasBeenSet = true; m_vanityDomainStatus = std::move(value); }

    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline SpaceData& WithVanityDomainStatus(const VanityDomainStatus& value) { SetVanityDomainStatus(value); return *this;}

    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline SpaceData& WithVanityDomainStatus(VanityDomainStatus&& value) { SetVanityDomainStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ConfigurationStatus m_configurationStatus;
    bool m_configurationStatusHasBeenSet = false;

    long long m_contentSize;
    bool m_contentSizeHasBeenSet = false;

    Aws::Utils::DateTime m_createDateTime;
    bool m_createDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteDateTime;
    bool m_deleteDateTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_randomDomain;
    bool m_randomDomainHasBeenSet = false;

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    long long m_storageLimit;
    bool m_storageLimitHasBeenSet = false;

    TierLevel m_tier;
    bool m_tierHasBeenSet = false;

    int m_userCount;
    bool m_userCountHasBeenSet = false;

    Aws::String m_userKMSKey;
    bool m_userKMSKeyHasBeenSet = false;

    Aws::String m_vanityDomain;
    bool m_vanityDomainHasBeenSet = false;

    VanityDomainStatus m_vanityDomainStatus;
    bool m_vanityDomainStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
