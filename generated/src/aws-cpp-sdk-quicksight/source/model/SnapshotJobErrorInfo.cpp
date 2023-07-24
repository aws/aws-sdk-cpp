/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotJobErrorInfo.h>
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

SnapshotJobErrorInfo::SnapshotJobErrorInfo() : 
    m_errorMessageHasBeenSet(false),
    m_errorTypeHasBeenSet(false)
{
}

SnapshotJobErrorInfo::SnapshotJobErrorInfo(JsonView jsonValue) : 
    m_errorMessageHasBeenSet(false),
    m_errorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotJobErrorInfo& SnapshotJobErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorType"))
  {
    m_errorType = jsonValue.GetString("ErrorType");

    m_errorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotJobErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("ErrorType", m_errorType);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
