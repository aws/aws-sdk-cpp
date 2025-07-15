/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/SpaceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace repostspace
{
namespace Model
{

SpaceData::SpaceData(JsonView jsonValue)
{
  *this = jsonValue;
}

SpaceData& SpaceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spaceId"))
  {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = ConfigurationStatusMapper::GetConfigurationStatusForName(jsonValue.GetString("configurationStatus"));
    m_configurationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vanityDomainStatus"))
  {
    m_vanityDomainStatus = VanityDomainStatusMapper::GetVanityDomainStatusForName(jsonValue.GetString("vanityDomainStatus"));
    m_vanityDomainStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vanityDomain"))
  {
    m_vanityDomain = jsonValue.GetString("vanityDomain");
    m_vanityDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("randomDomain"))
  {
    m_randomDomain = jsonValue.GetString("randomDomain");
    m_randomDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tier"))
  {
    m_tier = TierLevelMapper::GetTierLevelForName(jsonValue.GetString("tier"));
    m_tierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageLimit"))
  {
    m_storageLimit = jsonValue.GetInt64("storageLimit");
    m_storageLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createDateTime"))
  {
    m_createDateTime = jsonValue.GetString("createDateTime");
    m_createDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteDateTime"))
  {
    m_deleteDateTime = jsonValue.GetString("deleteDateTime");
    m_deleteDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userKMSKey"))
  {
    m_userKMSKey = jsonValue.GetString("userKMSKey");
    m_userKMSKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userCount"))
  {
    m_userCount = jsonValue.GetInteger("userCount");
    m_userCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentSize"))
  {
    m_contentSize = jsonValue.GetInt64("contentSize");
    m_contentSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedEmailDomains"))
  {
    m_supportedEmailDomains = jsonValue.GetObject("supportedEmailDomains");
    m_supportedEmailDomainsHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceData::Jsonize() const
{
  JsonValue payload;

  if(m_spaceIdHasBeenSet)
  {
   payload.WithString("spaceId", m_spaceId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_configurationStatusHasBeenSet)
  {
   payload.WithString("configurationStatus", ConfigurationStatusMapper::GetNameForConfigurationStatus(m_configurationStatus));
  }

  if(m_vanityDomainStatusHasBeenSet)
  {
   payload.WithString("vanityDomainStatus", VanityDomainStatusMapper::GetNameForVanityDomainStatus(m_vanityDomainStatus));
  }

  if(m_vanityDomainHasBeenSet)
  {
   payload.WithString("vanityDomain", m_vanityDomain);

  }

  if(m_randomDomainHasBeenSet)
  {
   payload.WithString("randomDomain", m_randomDomain);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", TierLevelMapper::GetNameForTierLevel(m_tier));
  }

  if(m_storageLimitHasBeenSet)
  {
   payload.WithInt64("storageLimit", m_storageLimit);

  }

  if(m_createDateTimeHasBeenSet)
  {
   payload.WithString("createDateTime", m_createDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deleteDateTimeHasBeenSet)
  {
   payload.WithString("deleteDateTime", m_deleteDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_userKMSKeyHasBeenSet)
  {
   payload.WithString("userKMSKey", m_userKMSKey);

  }

  if(m_userCountHasBeenSet)
  {
   payload.WithInteger("userCount", m_userCount);

  }

  if(m_contentSizeHasBeenSet)
  {
   payload.WithInt64("contentSize", m_contentSize);

  }

  if(m_supportedEmailDomainsHasBeenSet)
  {
   payload.WithObject("supportedEmailDomains", m_supportedEmailDomains.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace repostspace
} // namespace Aws
