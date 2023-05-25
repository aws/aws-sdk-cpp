/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AnalysisStatusUnion.h>
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

AnalysisStatusUnion::AnalysisStatusUnion() : 
    m_runtimeAnalysisStatus(RuntimeAnalysisStatus::NOT_SET),
    m_runtimeAnalysisStatusHasBeenSet(false),
    m_srcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus::NOT_SET),
    m_srcCodeOrDbAnalysisStatusHasBeenSet(false)
{
}

AnalysisStatusUnion::AnalysisStatusUnion(JsonView jsonValue) : 
    m_runtimeAnalysisStatus(RuntimeAnalysisStatus::NOT_SET),
    m_runtimeAnalysisStatusHasBeenSet(false),
    m_srcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus::NOT_SET),
    m_srcCodeOrDbAnalysisStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisStatusUnion& AnalysisStatusUnion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runtimeAnalysisStatus"))
  {
    m_runtimeAnalysisStatus = RuntimeAnalysisStatusMapper::GetRuntimeAnalysisStatusForName(jsonValue.GetString("runtimeAnalysisStatus"));

    m_runtimeAnalysisStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("srcCodeOrDbAnalysisStatus"))
  {
    m_srcCodeOrDbAnalysisStatus = SrcCodeOrDbAnalysisStatusMapper::GetSrcCodeOrDbAnalysisStatusForName(jsonValue.GetString("srcCodeOrDbAnalysisStatus"));

    m_srcCodeOrDbAnalysisStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisStatusUnion::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeAnalysisStatusHasBeenSet)
  {
   payload.WithString("runtimeAnalysisStatus", RuntimeAnalysisStatusMapper::GetNameForRuntimeAnalysisStatus(m_runtimeAnalysisStatus));
  }

  if(m_srcCodeOrDbAnalysisStatusHasBeenSet)
  {
   payload.WithString("srcCodeOrDbAnalysisStatus", SrcCodeOrDbAnalysisStatusMapper::GetNameForSrcCodeOrDbAnalysisStatus(m_srcCodeOrDbAnalysisStatus));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
