/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/BatchInferenceJobInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

BatchInferenceJobInput::BatchInferenceJobInput() : 
    m_s3DataSourceHasBeenSet(false)
{
}

BatchInferenceJobInput::BatchInferenceJobInput(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchInferenceJobInput& BatchInferenceJobInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("s3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchInferenceJobInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("s3DataSource", m_s3DataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
