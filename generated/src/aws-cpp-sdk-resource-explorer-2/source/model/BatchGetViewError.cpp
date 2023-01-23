/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/BatchGetViewError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

BatchGetViewError::BatchGetViewError() : 
    m_errorMessageHasBeenSet(false),
    m_viewArnHasBeenSet(false)
{
}

BatchGetViewError::BatchGetViewError(JsonView jsonValue) : 
    m_errorMessageHasBeenSet(false),
    m_viewArnHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetViewError& BatchGetViewError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewArn"))
  {
    m_viewArn = jsonValue.GetString("ViewArn");

    m_viewArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetViewError::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_viewArnHasBeenSet)
  {
   payload.WithString("ViewArn", m_viewArn);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
