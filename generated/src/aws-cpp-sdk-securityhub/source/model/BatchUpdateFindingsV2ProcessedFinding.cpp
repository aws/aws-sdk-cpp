/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateFindingsV2ProcessedFinding.h>
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

BatchUpdateFindingsV2ProcessedFinding::BatchUpdateFindingsV2ProcessedFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchUpdateFindingsV2ProcessedFinding& BatchUpdateFindingsV2ProcessedFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FindingIdentifier"))
  {
    m_findingIdentifier = jsonValue.GetObject("FindingIdentifier");
    m_findingIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetadataUid"))
  {
    m_metadataUid = jsonValue.GetString("MetadataUid");
    m_metadataUidHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateFindingsV2ProcessedFinding::Jsonize() const
{
  JsonValue payload;

  if(m_findingIdentifierHasBeenSet)
  {
   payload.WithObject("FindingIdentifier", m_findingIdentifier.Jsonize());

  }

  if(m_metadataUidHasBeenSet)
  {
   payload.WithString("MetadataUid", m_metadataUid);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
