/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/BatchGetTokenBalanceErrorItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

BatchGetTokenBalanceErrorItem::BatchGetTokenBalanceErrorItem() : 
    m_tokenIdentifierHasBeenSet(false),
    m_ownerIdentifierHasBeenSet(false),
    m_atBlockchainInstantHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorType(ErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
}

BatchGetTokenBalanceErrorItem::BatchGetTokenBalanceErrorItem(JsonView jsonValue) : 
    m_tokenIdentifierHasBeenSet(false),
    m_ownerIdentifierHasBeenSet(false),
    m_atBlockchainInstantHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorType(ErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetTokenBalanceErrorItem& BatchGetTokenBalanceErrorItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tokenIdentifier"))
  {
    m_tokenIdentifier = jsonValue.GetObject("tokenIdentifier");

    m_tokenIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerIdentifier"))
  {
    m_ownerIdentifier = jsonValue.GetObject("ownerIdentifier");

    m_ownerIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("atBlockchainInstant"))
  {
    m_atBlockchainInstant = jsonValue.GetObject("atBlockchainInstant");

    m_atBlockchainInstantHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = ErrorTypeMapper::GetErrorTypeForName(jsonValue.GetString("errorType"));

    m_errorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetTokenBalanceErrorItem::Jsonize() const
{
  JsonValue payload;

  if(m_tokenIdentifierHasBeenSet)
  {
   payload.WithObject("tokenIdentifier", m_tokenIdentifier.Jsonize());

  }

  if(m_ownerIdentifierHasBeenSet)
  {
   payload.WithObject("ownerIdentifier", m_ownerIdentifier.Jsonize());

  }

  if(m_atBlockchainInstantHasBeenSet)
  {
   payload.WithObject("atBlockchainInstant", m_atBlockchainInstant.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("errorType", ErrorTypeMapper::GetNameForErrorType(m_errorType));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
