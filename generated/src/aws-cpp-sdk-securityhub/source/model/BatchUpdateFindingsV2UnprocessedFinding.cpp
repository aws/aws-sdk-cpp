/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateFindingsV2UnprocessedFinding.h>
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

BatchUpdateFindingsV2UnprocessedFinding::BatchUpdateFindingsV2UnprocessedFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchUpdateFindingsV2UnprocessedFinding& BatchUpdateFindingsV2UnprocessedFinding::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = BatchUpdateFindingsV2UnprocessedFindingErrorCodeMapper::GetBatchUpdateFindingsV2UnprocessedFindingErrorCodeForName(jsonValue.GetString("ErrorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateFindingsV2UnprocessedFinding::Jsonize() const
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

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", BatchUpdateFindingsV2UnprocessedFindingErrorCodeMapper::GetNameForBatchUpdateFindingsV2UnprocessedFindingErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
