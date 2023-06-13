/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/EvaluationErrorItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

EvaluationErrorItem::EvaluationErrorItem() : 
    m_errorDescriptionHasBeenSet(false)
{
}

EvaluationErrorItem::EvaluationErrorItem(JsonView jsonValue) : 
    m_errorDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationErrorItem& EvaluationErrorItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorDescription"))
  {
    m_errorDescription = jsonValue.GetString("errorDescription");

    m_errorDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationErrorItem::Jsonize() const
{
  JsonValue payload;

  if(m_errorDescriptionHasBeenSet)
  {
   payload.WithString("errorDescription", m_errorDescription);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
