/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/VersionDeleteError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

VersionDeleteError::VersionDeleteError() : 
    m_versionNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

VersionDeleteError::VersionDeleteError(JsonView jsonValue) : 
    m_versionNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

VersionDeleteError& VersionDeleteError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("versionName"))
  {
    m_versionName = jsonValue.GetString("versionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionDeleteError::Jsonize() const
{
  JsonValue payload;

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("versionName", m_versionName);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
