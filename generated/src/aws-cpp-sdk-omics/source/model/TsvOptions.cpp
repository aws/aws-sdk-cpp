/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/TsvOptions.h>
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

TsvOptions::TsvOptions() : 
    m_readOptionsHasBeenSet(false)
{
}

TsvOptions::TsvOptions(JsonView jsonValue) : 
    m_readOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

TsvOptions& TsvOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("readOptions"))
  {
    m_readOptions = jsonValue.GetObject("readOptions");

    m_readOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TsvOptions::Jsonize() const
{
  JsonValue payload;

  if(m_readOptionsHasBeenSet)
  {
   payload.WithObject("readOptions", m_readOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
