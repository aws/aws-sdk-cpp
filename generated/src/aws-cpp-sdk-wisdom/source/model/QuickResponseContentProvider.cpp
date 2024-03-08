/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/QuickResponseContentProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

QuickResponseContentProvider::QuickResponseContentProvider() : 
    m_contentHasBeenSet(false)
{
}

QuickResponseContentProvider::QuickResponseContentProvider(JsonView jsonValue) : 
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

QuickResponseContentProvider& QuickResponseContentProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickResponseContentProvider::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
