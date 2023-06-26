/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/VpcAttachment.h>
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

VpcAttachment::VpcAttachment() : 
    m_attachmentHasBeenSet(false),
    m_subnetArnsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

VpcAttachment::VpcAttachment(JsonView jsonValue) : 
    m_attachmentHasBeenSet(false),
    m_subnetArnsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

VpcAttachment& VpcAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetArns"))
  {
    Aws::Utils::Array<JsonView> subnetArnsJsonList = jsonValue.GetArray("SubnetArns");
    for(unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex)
    {
      m_subnetArns.push_back(subnetArnsJsonList[subnetArnsIndex].AsString());
    }
    m_subnetArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetObject("Options");

    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_subnetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetArnsJsonList(m_subnetArns.size());
   for(unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex)
   {
     subnetArnsJsonList[subnetArnsIndex].AsString(m_subnetArns[subnetArnsIndex]);
   }
   payload.WithArray("SubnetArns", std::move(subnetArnsJsonList));

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
