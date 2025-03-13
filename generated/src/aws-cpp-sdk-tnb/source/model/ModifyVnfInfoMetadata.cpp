/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ModifyVnfInfoMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

ModifyVnfInfoMetadata::ModifyVnfInfoMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ModifyVnfInfoMetadata& ModifyVnfInfoMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vnfConfigurableProperties"))
  {
    m_vnfConfigurableProperties = jsonValue.GetObject("vnfConfigurableProperties");
    m_vnfConfigurablePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vnfInstanceId"))
  {
    m_vnfInstanceId = jsonValue.GetString("vnfInstanceId");
    m_vnfInstanceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ModifyVnfInfoMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_vnfConfigurablePropertiesHasBeenSet)
  {
    if(!m_vnfConfigurableProperties.View().IsNull())
    {
       payload.WithObject("vnfConfigurableProperties", JsonValue(m_vnfConfigurableProperties.View()));
    }
  }

  if(m_vnfInstanceIdHasBeenSet)
  {
   payload.WithString("vnfInstanceId", m_vnfInstanceId);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
