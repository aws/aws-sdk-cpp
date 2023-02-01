/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/VcfOptions.h>
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

VcfOptions::VcfOptions() : 
    m_ignoreFilterField(false),
    m_ignoreFilterFieldHasBeenSet(false),
    m_ignoreQualField(false),
    m_ignoreQualFieldHasBeenSet(false)
{
}

VcfOptions::VcfOptions(JsonView jsonValue) : 
    m_ignoreFilterField(false),
    m_ignoreFilterFieldHasBeenSet(false),
    m_ignoreQualField(false),
    m_ignoreQualFieldHasBeenSet(false)
{
  *this = jsonValue;
}

VcfOptions& VcfOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ignoreFilterField"))
  {
    m_ignoreFilterField = jsonValue.GetBool("ignoreFilterField");

    m_ignoreFilterFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ignoreQualField"))
  {
    m_ignoreQualField = jsonValue.GetBool("ignoreQualField");

    m_ignoreQualFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue VcfOptions::Jsonize() const
{
  JsonValue payload;

  if(m_ignoreFilterFieldHasBeenSet)
  {
   payload.WithBool("ignoreFilterField", m_ignoreFilterField);

  }

  if(m_ignoreQualFieldHasBeenSet)
  {
   payload.WithBool("ignoreQualField", m_ignoreQualField);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
