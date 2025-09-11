/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QDataKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

QDataKey::QDataKey(JsonView jsonValue)
{
  *this = jsonValue;
}

QDataKey& QDataKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QDataKeyArn"))
  {
    m_qDataKeyArn = jsonValue.GetString("QDataKeyArn");
    m_qDataKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QDataKeyType"))
  {
    m_qDataKeyType = QDataKeyTypeMapper::GetQDataKeyTypeForName(jsonValue.GetString("QDataKeyType"));
    m_qDataKeyTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue QDataKey::Jsonize() const
{
  JsonValue payload;

  if(m_qDataKeyArnHasBeenSet)
  {
   payload.WithString("QDataKeyArn", m_qDataKeyArn);

  }

  if(m_qDataKeyTypeHasBeenSet)
  {
   payload.WithString("QDataKeyType", QDataKeyTypeMapper::GetNameForQDataKeyType(m_qDataKeyType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
