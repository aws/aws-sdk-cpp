/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfFindingIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

OcsfFindingIdentifier::OcsfFindingIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

OcsfFindingIdentifier& OcsfFindingIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudAccountUid"))
  {
    m_cloudAccountUid = jsonValue.GetString("CloudAccountUid");
    m_cloudAccountUidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FindingInfoUid"))
  {
    m_findingInfoUid = jsonValue.GetString("FindingInfoUid");
    m_findingInfoUidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetadataProductUid"))
  {
    m_metadataProductUid = jsonValue.GetString("MetadataProductUid");
    m_metadataProductUidHasBeenSet = true;
  }
  return *this;
}

JsonValue OcsfFindingIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_cloudAccountUidHasBeenSet)
  {
   payload.WithString("CloudAccountUid", m_cloudAccountUid);

  }

  if(m_findingInfoUidHasBeenSet)
  {
   payload.WithString("FindingInfoUid", m_findingInfoUid);

  }

  if(m_metadataProductUidHasBeenSet)
  {
   payload.WithString("MetadataProductUid", m_metadataProductUid);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
