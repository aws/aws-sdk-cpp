/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UnprocessedStandardsControlAssociation.h>
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

UnprocessedStandardsControlAssociation::UnprocessedStandardsControlAssociation() : 
    m_standardsControlAssociationIdHasBeenSet(false),
    m_errorCode(UnprocessedErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
}

UnprocessedStandardsControlAssociation::UnprocessedStandardsControlAssociation(JsonView jsonValue) : 
    m_standardsControlAssociationIdHasBeenSet(false),
    m_errorCode(UnprocessedErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedStandardsControlAssociation& UnprocessedStandardsControlAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsControlAssociationId"))
  {
    m_standardsControlAssociationId = jsonValue.GetObject("StandardsControlAssociationId");

    m_standardsControlAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = UnprocessedErrorCodeMapper::GetUnprocessedErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorReason"))
  {
    m_errorReason = jsonValue.GetString("ErrorReason");

    m_errorReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedStandardsControlAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_standardsControlAssociationIdHasBeenSet)
  {
   payload.WithObject("StandardsControlAssociationId", m_standardsControlAssociationId.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", UnprocessedErrorCodeMapper::GetNameForUnprocessedErrorCode(m_errorCode));
  }

  if(m_errorReasonHasBeenSet)
  {
   payload.WithString("ErrorReason", m_errorReason);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
