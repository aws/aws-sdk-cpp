/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UnprocessedStandardsControlAssociationUpdate.h>
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

UnprocessedStandardsControlAssociationUpdate::UnprocessedStandardsControlAssociationUpdate() : 
    m_standardsControlAssociationUpdateHasBeenSet(false),
    m_errorCode(UnprocessedErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
}

UnprocessedStandardsControlAssociationUpdate::UnprocessedStandardsControlAssociationUpdate(JsonView jsonValue) : 
    m_standardsControlAssociationUpdateHasBeenSet(false),
    m_errorCode(UnprocessedErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedStandardsControlAssociationUpdate& UnprocessedStandardsControlAssociationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsControlAssociationUpdate"))
  {
    m_standardsControlAssociationUpdate = jsonValue.GetObject("StandardsControlAssociationUpdate");

    m_standardsControlAssociationUpdateHasBeenSet = true;
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

JsonValue UnprocessedStandardsControlAssociationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_standardsControlAssociationUpdateHasBeenSet)
  {
   payload.WithObject("StandardsControlAssociationUpdate", m_standardsControlAssociationUpdate.Jsonize());

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
