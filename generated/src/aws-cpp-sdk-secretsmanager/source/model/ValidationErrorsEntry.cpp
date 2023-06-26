/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/ValidationErrorsEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

ValidationErrorsEntry::ValidationErrorsEntry() : 
    m_checkNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

ValidationErrorsEntry::ValidationErrorsEntry(JsonView jsonValue) : 
    m_checkNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationErrorsEntry& ValidationErrorsEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CheckName"))
  {
    m_checkName = jsonValue.GetString("CheckName");

    m_checkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationErrorsEntry::Jsonize() const
{
  JsonValue payload;

  if(m_checkNameHasBeenSet)
  {
   payload.WithString("CheckName", m_checkName);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
