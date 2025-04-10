﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SamlConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

SamlConfiguration::SamlConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SamlConfiguration& SamlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadataXML"))
  {
    m_metadataXML = jsonValue.GetString("metadataXML");
    m_metadataXMLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userIdAttribute"))
  {
    m_userIdAttribute = jsonValue.GetString("userIdAttribute");
    m_userIdAttributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userGroupAttribute"))
  {
    m_userGroupAttribute = jsonValue.GetString("userGroupAttribute");
    m_userGroupAttributeHasBeenSet = true;
  }
  return *this;
}

JsonValue SamlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_metadataXMLHasBeenSet)
  {
   payload.WithString("metadataXML", m_metadataXML);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_userIdAttributeHasBeenSet)
  {
   payload.WithString("userIdAttribute", m_userIdAttribute);

  }

  if(m_userGroupAttributeHasBeenSet)
  {
   payload.WithString("userGroupAttribute", m_userGroupAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
