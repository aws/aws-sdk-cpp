/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Xavc4kIntraCbgProfileSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Xavc4kIntraCbgProfileSettings::Xavc4kIntraCbgProfileSettings() : 
    m_xavcClass(Xavc4kIntraCbgProfileClass::NOT_SET),
    m_xavcClassHasBeenSet(false)
{
}

Xavc4kIntraCbgProfileSettings::Xavc4kIntraCbgProfileSettings(JsonView jsonValue) : 
    m_xavcClass(Xavc4kIntraCbgProfileClass::NOT_SET),
    m_xavcClassHasBeenSet(false)
{
  *this = jsonValue;
}

Xavc4kIntraCbgProfileSettings& Xavc4kIntraCbgProfileSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("xavcClass"))
  {
    m_xavcClass = Xavc4kIntraCbgProfileClassMapper::GetXavc4kIntraCbgProfileClassForName(jsonValue.GetString("xavcClass"));

    m_xavcClassHasBeenSet = true;
  }

  return *this;
}

JsonValue Xavc4kIntraCbgProfileSettings::Jsonize() const
{
  JsonValue payload;

  if(m_xavcClassHasBeenSet)
  {
   payload.WithString("xavcClass", Xavc4kIntraCbgProfileClassMapper::GetNameForXavc4kIntraCbgProfileClass(m_xavcClass));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
