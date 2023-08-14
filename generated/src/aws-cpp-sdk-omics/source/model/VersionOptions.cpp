/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/VersionOptions.h>
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

VersionOptions::VersionOptions() : 
    m_tsvVersionOptionsHasBeenSet(false)
{
}

VersionOptions::VersionOptions(JsonView jsonValue) : 
    m_tsvVersionOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

VersionOptions& VersionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tsvVersionOptions"))
  {
    m_tsvVersionOptions = jsonValue.GetObject("tsvVersionOptions");

    m_tsvVersionOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tsvVersionOptionsHasBeenSet)
  {
   payload.WithObject("tsvVersionOptions", m_tsvVersionOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
