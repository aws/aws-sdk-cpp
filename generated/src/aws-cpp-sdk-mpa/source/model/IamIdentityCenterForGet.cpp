/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/IamIdentityCenterForGet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

IamIdentityCenterForGet::IamIdentityCenterForGet(JsonView jsonValue)
{
  *this = jsonValue;
}

IamIdentityCenterForGet& IamIdentityCenterForGet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalPortalUrl"))
  {
    m_approvalPortalUrl = jsonValue.GetString("ApprovalPortalUrl");
    m_approvalPortalUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue IamIdentityCenterForGet::Jsonize() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_approvalPortalUrlHasBeenSet)
  {
   payload.WithString("ApprovalPortalUrl", m_approvalPortalUrl);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
