/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

Member::Member() : 
    m_networkIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_frameworkAttributesHasBeenSet(false),
    m_logPublishingConfigurationHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_networkIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_frameworkAttributesHasBeenSet(false),
    m_logPublishingConfigurationHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkId"))
  {
    m_networkId = jsonValue.GetString("NetworkId");

    m_networkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkAttributes"))
  {
    m_frameworkAttributes = jsonValue.GetObject("FrameworkAttributes");

    m_frameworkAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPublishingConfiguration"))
  {
    m_logPublishingConfiguration = jsonValue.GetObject("LogPublishingConfiguration");

    m_logPublishingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MemberStatusMapper::GetMemberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_networkIdHasBeenSet)
  {
   payload.WithString("NetworkId", m_networkId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_frameworkAttributesHasBeenSet)
  {
   payload.WithObject("FrameworkAttributes", m_frameworkAttributes.Jsonize());

  }

  if(m_logPublishingConfigurationHasBeenSet)
  {
   payload.WithObject("LogPublishingConfiguration", m_logPublishingConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MemberStatusMapper::GetNameForMemberStatus(m_status));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
