/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HumanLoopRequestSource.h>
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

HumanLoopRequestSource::HumanLoopRequestSource() : 
    m_awsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource::NOT_SET),
    m_awsManagedHumanLoopRequestSourceHasBeenSet(false)
{
}

HumanLoopRequestSource::HumanLoopRequestSource(JsonView jsonValue) : 
    m_awsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource::NOT_SET),
    m_awsManagedHumanLoopRequestSourceHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopRequestSource& HumanLoopRequestSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsManagedHumanLoopRequestSource"))
  {
    m_awsManagedHumanLoopRequestSource = AwsManagedHumanLoopRequestSourceMapper::GetAwsManagedHumanLoopRequestSourceForName(jsonValue.GetString("AwsManagedHumanLoopRequestSource"));

    m_awsManagedHumanLoopRequestSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopRequestSource::Jsonize() const
{
  JsonValue payload;

  if(m_awsManagedHumanLoopRequestSourceHasBeenSet)
  {
   payload.WithString("AwsManagedHumanLoopRequestSource", AwsManagedHumanLoopRequestSourceMapper::GetNameForAwsManagedHumanLoopRequestSource(m_awsManagedHumanLoopRequestSource));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
