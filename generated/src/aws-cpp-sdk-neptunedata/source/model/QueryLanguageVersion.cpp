/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/QueryLanguageVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

QueryLanguageVersion::QueryLanguageVersion() : 
    m_versionHasBeenSet(false)
{
}

QueryLanguageVersion::QueryLanguageVersion(JsonView jsonValue) : 
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

QueryLanguageVersion& QueryLanguageVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryLanguageVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
