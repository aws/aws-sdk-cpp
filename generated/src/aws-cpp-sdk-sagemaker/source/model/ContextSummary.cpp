/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ContextSummary.h>
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

ContextSummary::ContextSummary() : 
    m_contextArnHasBeenSet(false),
    m_contextNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ContextSummary::ContextSummary(JsonView jsonValue) : 
    m_contextArnHasBeenSet(false),
    m_contextNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ContextSummary& ContextSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContextArn"))
  {
    m_contextArn = jsonValue.GetString("ContextArn");

    m_contextArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContextName"))
  {
    m_contextName = jsonValue.GetString("ContextName");

    m_contextNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContextType"))
  {
    m_contextType = jsonValue.GetString("ContextType");

    m_contextTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ContextSummary::Jsonize() const
{
  JsonValue payload;

  if(m_contextArnHasBeenSet)
  {
   payload.WithString("ContextArn", m_contextArn);

  }

  if(m_contextNameHasBeenSet)
  {
   payload.WithString("ContextName", m_contextName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_contextTypeHasBeenSet)
  {
   payload.WithString("ContextType", m_contextType);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
