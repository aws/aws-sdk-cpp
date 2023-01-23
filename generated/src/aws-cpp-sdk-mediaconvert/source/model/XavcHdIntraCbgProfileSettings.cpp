/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcHdIntraCbgProfileSettings.h>
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

XavcHdIntraCbgProfileSettings::XavcHdIntraCbgProfileSettings() : 
    m_xavcClass(XavcHdIntraCbgProfileClass::NOT_SET),
    m_xavcClassHasBeenSet(false)
{
}

XavcHdIntraCbgProfileSettings::XavcHdIntraCbgProfileSettings(JsonView jsonValue) : 
    m_xavcClass(XavcHdIntraCbgProfileClass::NOT_SET),
    m_xavcClassHasBeenSet(false)
{
  *this = jsonValue;
}

XavcHdIntraCbgProfileSettings& XavcHdIntraCbgProfileSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("xavcClass"))
  {
    m_xavcClass = XavcHdIntraCbgProfileClassMapper::GetXavcHdIntraCbgProfileClassForName(jsonValue.GetString("xavcClass"));

    m_xavcClassHasBeenSet = true;
  }

  return *this;
}

JsonValue XavcHdIntraCbgProfileSettings::Jsonize() const
{
  JsonValue payload;

  if(m_xavcClassHasBeenSet)
  {
   payload.WithString("xavcClass", XavcHdIntraCbgProfileClassMapper::GetNameForXavcHdIntraCbgProfileClass(m_xavcClass));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
