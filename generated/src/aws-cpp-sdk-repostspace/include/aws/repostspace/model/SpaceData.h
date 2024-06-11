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


    ///@{
    /**
     * <p>The ARN of the private re:Post.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SpaceData& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SpaceData& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SpaceData& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration status of the private re:Post.</p>
     */
    inline const ConfigurationStatus& GetConfigurationStatus() const{ return m_configurationStatus; }
    inline bool ConfigurationStatusHasBeenSet() const { return m_configurationStatusHasBeenSet; }
    inline void SetConfigurationStatus(const ConfigurationStatus& value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = value; }
    inline void SetConfigurationStatus(ConfigurationStatus&& value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = std::move(value); }
    inline SpaceData& WithConfigurationStatus(const ConfigurationStatus& value) { SetConfigurationStatus(value); return *this;}
    inline SpaceData& WithConfigurationStatus(ConfigurationStatus&& value) { SetConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content size of the private re:Post.</p>
     */
    inline long long GetContentSize() const{ return m_contentSize; }
    inline bool ContentSizeHasBeenSet() const { return m_contentSizeHasBeenSet; }
    inline void SetContentSize(long long value) { m_contentSizeHasBeenSet = true; m_contentSize = value; }
    inline SpaceData& WithContentSize(long long value) { SetContentSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const{ return m_createDateTime; }
    inline bool CreateDateTimeHasBeenSet() const { return m_createDateTimeHasBeenSet; }
    inline void SetCreateDateTime(const Aws::Utils::DateTime& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = value; }
    inline void SetCreateDateTime(Aws::Utils::DateTime&& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = std::move(value); }
    inline SpaceData& WithCreateDateTime(const Aws::Utils::DateTime& value) { SetCreateDateTime(value); return *this;}
    inline SpaceData& WithCreateDateTime(Aws::Utils::DateTime&& value) { SetCreateDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the private re:Post was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const{ return m_deleteDateTime; }
    inline bool DeleteDateTimeHasBeenSet() const { return m_deleteDateTimeHasBeenSet; }
    inline void SetDeleteDateTime(const Aws::Utils::DateTime& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = value; }
    inline void SetDeleteDateTime(Aws::Utils::DateTime&& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = std::move(value); }
    inline SpaceData& WithDeleteDateTime(const Aws::Utils::DateTime& value) { SetDeleteDateTime(value); return *this;}
    inline SpaceData& WithDeleteDateTime(Aws::Utils::DateTime&& value) { SetDeleteDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the private re:Post. This is used only to help you
     * identify this private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SpaceData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SpaceData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SpaceData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the private re:Post.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SpaceData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SpaceData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SpaceData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS generated subdomain of the private re:Post.</p>
     */
    inline const Aws::String& GetRandomDomain() const{ return m_randomDomain; }
    inline bool RandomDomainHasBeenSet() const { return m_randomDomainHasBeenSet; }
    inline void SetRandomDomain(const Aws::String& value) { m_randomDomainHasBeenSet = true; m_randomDomain = value; }
    inline void SetRandomDomain(Aws::String&& value) { m_randomDomainHasBeenSet = true; m_randomDomain = std::move(value); }
    inline void SetRandomDomain(const char* value) { m_randomDomainHasBeenSet = true; m_randomDomain.assign(value); }
    inline SpaceData& WithRandomDomain(const Aws::String& value) { SetRandomDomain(value); return *this;}
    inline SpaceData& WithRandomDomain(Aws::String&& value) { SetRandomDomain(std::move(value)); return *this;}
    inline SpaceData& WithRandomDomain(const char* value) { SetRandomDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    inline void SetSpaceId(const Aws::String& value) { m_spaceIdHasBeenSet = true; m_spaceId = value; }
    inline void SetSpaceId(Aws::String&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::move(value); }
    inline void SetSpaceId(const char* value) { m_spaceIdHasBeenSet = true; m_spaceId.assign(value); }
    inline SpaceData& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}
    inline SpaceData& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}
    inline SpaceData& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation/deletion status of the private re:Post.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SpaceData& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SpaceData& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SpaceData& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage limit of the private re:Post.</p>
     */
    inline long long GetStorageLimit() const{ return m_storageLimit; }
    inline bool StorageLimitHasBeenSet() const { return m_storageLimitHasBeenSet; }
    inline void SetStorageLimit(long long value) { m_storageLimitHasBeenSet = true; m_storageLimit = value; }
    inline SpaceData& WithStorageLimit(long long value) { SetStorageLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing tier of the private re:Post.</p>
     */
    inline const TierLevel& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const TierLevel& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(TierLevel&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline SpaceData& WithTier(const TierLevel& value) { SetTier(value); return *this;}
    inline SpaceData& WithTier(TierLevel&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of onboarded users to the private re:Post.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }
    inline SpaceData& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom AWS KMS key ARN that’s used for the AWS KMS encryption.</p>
     */
    inline const Aws::String& GetUserKMSKey() const{ return m_userKMSKey; }
    inline bool UserKMSKeyHasBeenSet() const { return m_userKMSKeyHasBeenSet; }
    inline void SetUserKMSKey(const Aws::String& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = value; }
    inline void SetUserKMSKey(Aws::String&& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = std::move(value); }
    inline void SetUserKMSKey(const char* value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey.assign(value); }
    inline SpaceData& WithUserKMSKey(const Aws::String& value) { SetUserKMSKey(value); return *this;}
    inline SpaceData& WithUserKMSKey(Aws::String&& value) { SetUserKMSKey(std::move(value)); return *this;}
    inline SpaceData& WithUserKMSKey(const char* value) { SetUserKMSKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This custom subdomain that you use to access your private re:Post. All custom
     * subdomains must be approved by AWS before use.</p>
     */
    inline const Aws::String& GetVanityDomain() const{ return m_vanityDomain; }
    inline bool VanityDomainHasBeenSet() const { return m_vanityDomainHasBeenSet; }
    inline void SetVanityDomain(const Aws::String& value) { m_vanityDomainHasBeenSet = true; m_vanityDomain = value; }
    inline void SetVanityDomain(Aws::String&& value) { m_vanityDomainHasBeenSet = true; m_vanityDomain = std::move(value); }
    inline void SetVanityDomain(const char* value) { m_vanityDomainHasBeenSet = true; m_vanityDomain.assign(value); }
    inline SpaceData& WithVanityDomain(const Aws::String& value) { SetVanityDomain(value); return *this;}
    inline SpaceData& WithVanityDomain(Aws::String&& value) { SetVanityDomain(std::move(value)); return *this;}
    inline SpaceData& WithVanityDomain(const char* value) { SetVanityDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This approval status of the custom subdomain.</p>
     */
    inline const VanityDomainStatus& GetVanityDomainStatus() const{ return m_vanityDomainStatus; }
    inline bool VanityDomainStatusHasBeenSet() const { return m_vanityDomainStatusHasBeenSet; }
    inline void SetVanityDomainStatus(const VanityDomainStatus& value) { m_vanityDomainStatusHasBeenSet = true; m_vanityDomainStatus = value; }
    inline void SetVanityDomainStatus(VanityDomainStatus&& value) { m_vanityDomainStatusHasBeenSet = true; m_vanityDomainStatus = std::move(value); }
    inline SpaceData& WithVanityDomainStatus(const VanityDomainStatus& value) { SetVanityDomainStatus(value); return *this;}
    inline SpaceData& WithVanityDomainStatus(VanityDomainStatus&& value) { SetVanityDomainStatus(std::move(value)); return *this;}
    ///@}
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
