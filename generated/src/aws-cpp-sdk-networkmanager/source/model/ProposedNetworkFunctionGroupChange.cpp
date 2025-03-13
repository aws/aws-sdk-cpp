/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ProposedNetworkFunctionGroupChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ProposedNetworkFunctionGroupChange::ProposedNetworkFunctionGroupChange(JsonView jsonValue)
{
  *this = jsonValue;
}

ProposedNetworkFunctionGroupChange& ProposedNetworkFunctionGroupChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachmentPolicyRuleNumber"))
  {
    m_attachmentPolicyRuleNumber = jsonValue.GetInteger("AttachmentPolicyRuleNumber");
    m_attachmentPolicyRuleNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkFunctionGroupName"))
  {
    m_networkFunctionGroupName = jsonValue.GetString("NetworkFunctionGroupName");
    m_networkFunctionGroupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ProposedNetworkFunctionGroupChange::Jsonize() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_attachmentPolicyRuleNumberHasBeenSet)
  {
   payload.WithInteger("AttachmentPolicyRuleNumber", m_attachmentPolicyRuleNumber);

  }

  if(m_networkFunctionGroupNameHasBeenSet)
  {
   payload.WithString("NetworkFunctionGroupName", m_networkFunctionGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
