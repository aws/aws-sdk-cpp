/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AnalyzerNameUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

AnalyzerNameUnion::AnalyzerNameUnion() : 
    m_binaryAnalyzerName(BinaryAnalyzerName::NOT_SET),
    m_binaryAnalyzerNameHasBeenSet(false),
    m_runTimeAnalyzerName(RunTimeAnalyzerName::NOT_SET),
    m_runTimeAnalyzerNameHasBeenSet(false),
    m_sourceCodeAnalyzerName(SourceCodeAnalyzerName::NOT_SET),
    m_sourceCodeAnalyzerNameHasBeenSet(false)
{
}

AnalyzerNameUnion::AnalyzerNameUnion(JsonView jsonValue) : 
    m_binaryAnalyzerName(BinaryAnalyzerName::NOT_SET),
    m_binaryAnalyzerNameHasBeenSet(false),
    m_runTimeAnalyzerName(RunTimeAnalyzerName::NOT_SET),
    m_runTimeAnalyzerNameHasBeenSet(false),
    m_sourceCodeAnalyzerName(SourceCodeAnalyzerName::NOT_SET),
    m_sourceCodeAnalyzerNameHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyzerNameUnion& AnalyzerNameUnion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("binaryAnalyzerName"))
  {
    m_binaryAnalyzerName = BinaryAnalyzerNameMapper::GetBinaryAnalyzerNameForName(jsonValue.GetString("binaryAnalyzerName"));

    m_binaryAnalyzerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runTimeAnalyzerName"))
  {
    m_runTimeAnalyzerName = RunTimeAnalyzerNameMapper::GetRunTimeAnalyzerNameForName(jsonValue.GetString("runTimeAnalyzerName"));

    m_runTimeAnalyzerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCodeAnalyzerName"))
  {
    m_sourceCodeAnalyzerName = SourceCodeAnalyzerNameMapper::GetSourceCodeAnalyzerNameForName(jsonValue.GetString("sourceCodeAnalyzerName"));

    m_sourceCodeAnalyzerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyzerNameUnion::Jsonize() const
{
  JsonValue payload;

  if(m_binaryAnalyzerNameHasBeenSet)
  {
   payload.WithString("binaryAnalyzerName", BinaryAnalyzerNameMapper::GetNameForBinaryAnalyzerName(m_binaryAnalyzerName));
  }

  if(m_runTimeAnalyzerNameHasBeenSet)
  {
   payload.WithString("runTimeAnalyzerName", RunTimeAnalyzerNameMapper::GetNameForRunTimeAnalyzerName(m_runTimeAnalyzerName));
  }

  if(m_sourceCodeAnalyzerNameHasBeenSet)
  {
   payload.WithString("sourceCodeAnalyzerName", SourceCodeAnalyzerNameMapper::GetNameForSourceCodeAnalyzerName(m_sourceCodeAnalyzerName));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
