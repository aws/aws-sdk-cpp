/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainInformationContainer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DomainInformationContainer::DomainInformationContainer() : 
    m_aWSDomainInformationHasBeenSet(false)
{
}

DomainInformationContainer::DomainInformationContainer(JsonView jsonValue) : 
    m_aWSDomainInformationHasBeenSet(false)
{
  *this = jsonValue;
}

DomainInformationContainer& DomainInformationContainer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AWSDomainInformation"))
  {
    m_aWSDomainInformation = jsonValue.GetObject("AWSDomainInformation");

    m_aWSDomainInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainInformationContainer::Jsonize() const
{
  JsonValue payload;

  if(m_aWSDomainInformationHasBeenSet)
  {
   payload.WithObject("AWSDomainInformation", m_aWSDomainInformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
