/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DerivedInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DerivedInformation::DerivedInformation() : 
    m_derivedDataInputConfigHasBeenSet(false)
{
}

DerivedInformation::DerivedInformation(JsonView jsonValue) : 
    m_derivedDataInputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DerivedInformation& DerivedInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DerivedDataInputConfig"))
  {
    m_derivedDataInputConfig = jsonValue.GetString("DerivedDataInputConfig");

    m_derivedDataInputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DerivedInformation::Jsonize() const
{
  JsonValue payload;

  if(m_derivedDataInputConfigHasBeenSet)
  {
   payload.WithString("DerivedDataInputConfig", m_derivedDataInputConfig);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
