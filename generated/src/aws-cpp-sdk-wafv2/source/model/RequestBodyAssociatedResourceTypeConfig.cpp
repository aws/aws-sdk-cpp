/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RequestBodyAssociatedResourceTypeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RequestBodyAssociatedResourceTypeConfig::RequestBodyAssociatedResourceTypeConfig() : 
    m_defaultSizeInspectionLimit(SizeInspectionLimit::NOT_SET),
    m_defaultSizeInspectionLimitHasBeenSet(false)
{
}

RequestBodyAssociatedResourceTypeConfig::RequestBodyAssociatedResourceTypeConfig(JsonView jsonValue) : 
    m_defaultSizeInspectionLimit(SizeInspectionLimit::NOT_SET),
    m_defaultSizeInspectionLimitHasBeenSet(false)
{
  *this = jsonValue;
}

RequestBodyAssociatedResourceTypeConfig& RequestBodyAssociatedResourceTypeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultSizeInspectionLimit"))
  {
    m_defaultSizeInspectionLimit = SizeInspectionLimitMapper::GetSizeInspectionLimitForName(jsonValue.GetString("DefaultSizeInspectionLimit"));

    m_defaultSizeInspectionLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestBodyAssociatedResourceTypeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_defaultSizeInspectionLimitHasBeenSet)
  {
   payload.WithString("DefaultSizeInspectionLimit", SizeInspectionLimitMapper::GetNameForSizeInspectionLimit(m_defaultSizeInspectionLimit));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
