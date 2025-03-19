/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkOperationMetadata.h>
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

GetSolNetworkOperationMetadata::GetSolNetworkOperationMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

GetSolNetworkOperationMetadata& GetSolNetworkOperationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instantiateMetadata"))
  {
    m_instantiateMetadata = jsonValue.GetObject("instantiateMetadata");
    m_instantiateMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifyVnfInfoMetadata"))
  {
    m_modifyVnfInfoMetadata = jsonValue.GetObject("modifyVnfInfoMetadata");
    m_modifyVnfInfoMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateNsMetadata"))
  {
    m_updateNsMetadata = jsonValue.GetObject("updateNsMetadata");
    m_updateNsMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue GetSolNetworkOperationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_instantiateMetadataHasBeenSet)
  {
   payload.WithObject("instantiateMetadata", m_instantiateMetadata.Jsonize());

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("lastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifyVnfInfoMetadataHasBeenSet)
  {
   payload.WithObject("modifyVnfInfoMetadata", m_modifyVnfInfoMetadata.Jsonize());

  }

  if(m_updateNsMetadataHasBeenSet)
  {
   payload.WithObject("updateNsMetadata", m_updateNsMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
