/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/LcmOperationInfo.h>
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

LcmOperationInfo::LcmOperationInfo() : 
    m_nsLcmOpOccIdHasBeenSet(false)
{
}

LcmOperationInfo::LcmOperationInfo(JsonView jsonValue) : 
    m_nsLcmOpOccIdHasBeenSet(false)
{
  *this = jsonValue;
}

LcmOperationInfo& LcmOperationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nsLcmOpOccId"))
  {
    m_nsLcmOpOccId = jsonValue.GetString("nsLcmOpOccId");

    m_nsLcmOpOccIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LcmOperationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nsLcmOpOccIdHasBeenSet)
  {
   payload.WithString("nsLcmOpOccId", m_nsLcmOpOccId);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
