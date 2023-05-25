/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolVnfcResourceInfo.h>
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

GetSolVnfcResourceInfo::GetSolVnfcResourceInfo() : 
    m_metadataHasBeenSet(false)
{
}

GetSolVnfcResourceInfo::GetSolVnfcResourceInfo(JsonView jsonValue) : 
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolVnfcResourceInfo& GetSolVnfcResourceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue GetSolVnfcResourceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
