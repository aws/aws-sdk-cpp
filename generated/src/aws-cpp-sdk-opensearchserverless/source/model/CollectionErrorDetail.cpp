/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CollectionErrorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

CollectionErrorDetail::CollectionErrorDetail() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CollectionErrorDetail::CollectionErrorDetail(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

CollectionErrorDetail& CollectionErrorDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectionErrorDetail::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
