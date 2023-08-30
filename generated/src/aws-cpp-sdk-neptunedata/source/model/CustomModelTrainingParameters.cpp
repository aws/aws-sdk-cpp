/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/CustomModelTrainingParameters.h>
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

CustomModelTrainingParameters::CustomModelTrainingParameters() : 
    m_sourceS3DirectoryPathHasBeenSet(false),
    m_trainingEntryPointScriptHasBeenSet(false),
    m_transformEntryPointScriptHasBeenSet(false)
{
}

CustomModelTrainingParameters::CustomModelTrainingParameters(JsonView jsonValue) : 
    m_sourceS3DirectoryPathHasBeenSet(false),
    m_trainingEntryPointScriptHasBeenSet(false),
    m_transformEntryPointScriptHasBeenSet(false)
{
  *this = jsonValue;
}

CustomModelTrainingParameters& CustomModelTrainingParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceS3DirectoryPath"))
  {
    m_sourceS3DirectoryPath = jsonValue.GetString("sourceS3DirectoryPath");

    m_sourceS3DirectoryPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingEntryPointScript"))
  {
    m_trainingEntryPointScript = jsonValue.GetString("trainingEntryPointScript");

    m_trainingEntryPointScriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transformEntryPointScript"))
  {
    m_transformEntryPointScript = jsonValue.GetString("transformEntryPointScript");

    m_transformEntryPointScriptHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomModelTrainingParameters::Jsonize() const
{
  JsonValue payload;

  if(m_sourceS3DirectoryPathHasBeenSet)
  {
   payload.WithString("sourceS3DirectoryPath", m_sourceS3DirectoryPath);

  }

  if(m_trainingEntryPointScriptHasBeenSet)
  {
   payload.WithString("trainingEntryPointScript", m_trainingEntryPointScript);

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
