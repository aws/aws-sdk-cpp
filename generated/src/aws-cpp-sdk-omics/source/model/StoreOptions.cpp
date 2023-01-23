/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StoreOptions.h>
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

StoreOptions::StoreOptions() : 
    m_tsvStoreOptionsHasBeenSet(false)
{
}

StoreOptions::StoreOptions(JsonView jsonValue) : 
    m_tsvStoreOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

StoreOptions& StoreOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tsvStoreOptions"))
  {
    m_tsvStoreOptions = jsonValue.GetObject("tsvStoreOptions");

    m_tsvStoreOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue StoreOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tsvStoreOptionsHasBeenSet)
  {
   payload.WithObject("tsvStoreOptions", m_tsvStoreOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
