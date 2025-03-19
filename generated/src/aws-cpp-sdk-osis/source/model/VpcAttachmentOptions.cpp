/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/VpcAttachmentOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

VpcAttachmentOptions::VpcAttachmentOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcAttachmentOptions& VpcAttachmentOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachToVpc"))
  {
    m_attachToVpc = jsonValue.GetBool("AttachToVpc");
    m_attachToVpcHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");
    m_cidrBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcAttachmentOptions::Jsonize() const
{
  JsonValue payload;

  if(m_attachToVpcHasBeenSet)
  {
   payload.WithBool("AttachToVpc", m_attachToVpc);

  }

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
