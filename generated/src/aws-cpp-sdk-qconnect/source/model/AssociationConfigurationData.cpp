/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AssociationConfigurationData.h>
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

AssociationConfigurationData::AssociationConfigurationData(JsonView jsonValue)
{
  *this = jsonValue;
}

AssociationConfigurationData& AssociationConfigurationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseAssociationConfigurationData"))
  {
    m_knowledgeBaseAssociationConfigurationData = jsonValue.GetObject("knowledgeBaseAssociationConfigurationData");
    m_knowledgeBaseAssociationConfigurationDataHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociationConfigurationData::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseAssociationConfigurationDataHasBeenSet)
  {
   payload.WithObject("knowledgeBaseAssociationConfigurationData", m_knowledgeBaseAssociationConfigurationData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
