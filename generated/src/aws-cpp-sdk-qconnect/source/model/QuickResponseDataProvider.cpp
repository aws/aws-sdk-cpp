/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QuickResponseDataProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

QuickResponseDataProvider::QuickResponseDataProvider() : 
    m_contentHasBeenSet(false)
{
}

QuickResponseDataProvider::QuickResponseDataProvider(JsonView jsonValue) : 
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

QuickResponseDataProvider& QuickResponseDataProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickResponseDataProvider::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
