/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConfigurationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ConfigurationOptions::ConfigurationOptions() : 
    m_integerHasBeenSet(false),
    m_integerListHasBeenSet(false),
    m_doubleHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_stringListHasBeenSet(false),
    m_booleanHasBeenSet(false),
    m_enumHasBeenSet(false),
    m_enumListHasBeenSet(false)
{
}

ConfigurationOptions::ConfigurationOptions(JsonView jsonValue) : 
    m_integerHasBeenSet(false),
    m_integerListHasBeenSet(false),
    m_doubleHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_stringListHasBeenSet(false),
    m_booleanHasBeenSet(false),
    m_enumHasBeenSet(false),
    m_enumListHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationOptions& ConfigurationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Integer"))
  {
    m_integer = jsonValue.GetObject("Integer");

    m_integerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerList"))
  {
    m_integerList = jsonValue.GetObject("IntegerList");

    m_integerListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Double"))
  {
    m_double = jsonValue.GetObject("Double");

    m_doubleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("String"))
  {
    m_string = jsonValue.GetObject("String");

    m_stringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringList"))
  {
    m_stringList = jsonValue.GetObject("StringList");

    m_stringListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Boolean"))
  {
    m_boolean = jsonValue.GetObject("Boolean");

    m_booleanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enum"))
  {
    m_enum = jsonValue.GetObject("Enum");

    m_enumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnumList"))
  {
    m_enumList = jsonValue.GetObject("EnumList");

    m_enumListHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_integerHasBeenSet)
  {
   payload.WithObject("Integer", m_integer.Jsonize());

  }

  if(m_integerListHasBeenSet)
  {
   payload.WithObject("IntegerList", m_integerList.Jsonize());

  }

  if(m_doubleHasBeenSet)
  {
   payload.WithObject("Double", m_double.Jsonize());

  }

  if(m_stringHasBeenSet)
  {
   payload.WithObject("String", m_string.Jsonize());

  }

  if(m_stringListHasBeenSet)
  {
   payload.WithObject("StringList", m_stringList.Jsonize());

  }

  if(m_booleanHasBeenSet)
  {
   payload.WithObject("Boolean", m_boolean.Jsonize());

  }

  if(m_enumHasBeenSet)
  {
   payload.WithObject("Enum", m_enum.Jsonize());

  }

  if(m_enumListHasBeenSet)
  {
   payload.WithObject("EnumList", m_enumList.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
