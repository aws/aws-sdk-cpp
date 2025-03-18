/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/KmsInvalidStateException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

KmsInvalidStateException::KmsInvalidStateException(JsonView jsonValue)
{
  *this = jsonValue;
}

KmsInvalidStateException& KmsInvalidStateException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyState"))
  {
    m_kmsKeyState = KmsKeyStateMapper::GetKmsKeyStateForName(jsonValue.GetString("kmsKeyState"));
    m_kmsKeyStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue KmsInvalidStateException::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyStateHasBeenSet)
  {
   payload.WithString("kmsKeyState", KmsKeyStateMapper::GetNameForKmsKeyState(m_kmsKeyState));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
