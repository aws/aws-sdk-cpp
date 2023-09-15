/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/CustomModelTransformParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

CustomModelTransformParameters::CustomModelTransformParameters() : 
    m_sourceS3DirectoryPathHasBeenSet(false),
    m_transformEntryPointScriptHasBeenSet(false)
{
}

CustomModelTransformParameters::CustomModelTransformParameters(JsonView jsonValue) : 
    m_sourceS3DirectoryPathHasBeenSet(false),
    m_transformEntryPointScriptHasBeenSet(false)
{
  *this = jsonValue;
}

CustomModelTransformParameters& CustomModelTransformParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceS3DirectoryPath"))
  {
    m_sourceS3DirectoryPath = jsonValue.GetString("sourceS3DirectoryPath");

    m_sourceS3DirectoryPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transformEntryPointScript"))
  {
    m_transformEntryPointScript = jsonValue.GetString("transformEntryPointScript");

    m_transformEntryPointScriptHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomModelTransformParameters::Jsonize() const
{
  JsonValue payload;

  if(m_sourceS3DirectoryPathHasBeenSet)
  {
   payload.WithString("sourceS3DirectoryPath", m_sourceS3DirectoryPath);

  }

  if(m_transformEntryPointScriptHasBeenSet)
  {
   payload.WithString("transformEntryPointScript", m_transformEntryPointScript);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
