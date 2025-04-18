/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

MessageTemplateVersionSummary::MessageTemplateVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageTemplateVersionSummary& MessageTemplateVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageTemplateArn"))
  {
    m_messageTemplateArn = jsonValue.GetString("messageTemplateArn");
    m_messageTemplateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("messageTemplateId"))
  {
    m_messageTemplateId = jsonValue.GetString("messageTemplateId");
    m_messageTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");
    m_knowledgeBaseArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelSubtype"))
  {
    m_channelSubtype = ChannelSubtypeMapper::GetChannelSubtypeForName(jsonValue.GetString("channelSubtype"));
    m_channelSubtypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");
    m_isActiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");
    m_versionNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageTemplateVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_messageTemplateArnHasBeenSet)
  {
   payload.WithString("messageTemplateArn", m_messageTemplateArn);

  }

  if(m_messageTemplateIdHasBeenSet)
  {
   payload.WithString("messageTemplateId", m_messageTemplateId);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_channelSubtypeHasBeenSet)
  {
   payload.WithString("channelSubtype", ChannelSubtypeMapper::GetNameForChannelSubtype(m_channelSubtype));
  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
