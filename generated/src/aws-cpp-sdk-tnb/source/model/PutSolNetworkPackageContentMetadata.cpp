/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/PutSolNetworkPackageContentMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

PutSolNetworkPackageContentMetadata::PutSolNetworkPackageContentMetadata() : 
    m_nsdHasBeenSet(false)
{
}

PutSolNetworkPackageContentMetadata::PutSolNetworkPackageContentMetadata(JsonView jsonValue) : 
    m_nsdHasBeenSet(false)
{
  *this = jsonValue;
}

PutSolNetworkPackageContentMetadata& PutSolNetworkPackageContentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nsd"))
  {
    m_nsd = jsonValue.GetObject("nsd");

    m_nsdHasBeenSet = true;
  }

  return *this;
}

JsonValue PutSolNetworkPackageContentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nsdHasBeenSet)
  {
   payload.WithObject("nsd", m_nsd.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
