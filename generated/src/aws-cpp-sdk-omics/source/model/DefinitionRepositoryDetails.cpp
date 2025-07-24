/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/DefinitionRepositoryDetails.h>
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

DefinitionRepositoryDetails::DefinitionRepositoryDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DefinitionRepositoryDetails& DefinitionRepositoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectionArn"))
  {
    m_connectionArn = jsonValue.GetString("connectionArn");
    m_connectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fullRepositoryId"))
  {
    m_fullRepositoryId = jsonValue.GetString("fullRepositoryId");
    m_fullRepositoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceReference"))
  {
    m_sourceReference = jsonValue.GetObject("sourceReference");
    m_sourceReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerType"))
  {
    m_providerType = jsonValue.GetString("providerType");
    m_providerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerEndpoint"))
  {
    m_providerEndpoint = jsonValue.GetString("providerEndpoint");
    m_providerEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue DefinitionRepositoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("connectionArn", m_connectionArn);

  }

  if(m_fullRepositoryIdHasBeenSet)
  {
   payload.WithString("fullRepositoryId", m_fullRepositoryId);

  }

  if(m_sourceReferenceHasBeenSet)
  {
   payload.WithObject("sourceReference", m_sourceReference.Jsonize());

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("providerType", m_providerType);

  }

  if(m_providerEndpointHasBeenSet)
  {
   payload.WithString("providerEndpoint", m_providerEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
