/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FindingHistoryUpdateSource.h>
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

FindingHistoryUpdateSource::FindingHistoryUpdateSource() : 
    m_type(FindingHistoryUpdateSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_identityHasBeenSet(false)
{
}

FindingHistoryUpdateSource::FindingHistoryUpdateSource(JsonView jsonValue) : 
    m_type(FindingHistoryUpdateSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_identityHasBeenSet(false)
{
  *this = jsonValue;
}

FindingHistoryUpdateSource& FindingHistoryUpdateSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = FindingHistoryUpdateSourceTypeMapper::GetFindingHistoryUpdateSourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identity"))
  {
    m_identity = jsonValue.GetString("Identity");

    m_identityHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingHistoryUpdateSource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", FindingHistoryUpdateSourceTypeMapper::GetNameForFindingHistoryUpdateSourceType(m_type));
  }

  if(m_identityHasBeenSet)
  {
   payload.WithString("Identity", m_identity);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
