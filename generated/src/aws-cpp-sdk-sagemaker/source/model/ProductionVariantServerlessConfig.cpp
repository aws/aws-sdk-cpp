/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
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

ProductionVariantServerlessConfig::ProductionVariantServerlessConfig() : 
    m_memorySizeInMB(0),
    m_memorySizeInMBHasBeenSet(false),
    m_maxConcurrency(0),
    m_maxConcurrencyHasBeenSet(false),
    m_provisionedConcurrency(0),
    m_provisionedConcurrencyHasBeenSet(false)
{
}

ProductionVariantServerlessConfig::ProductionVariantServerlessConfig(JsonView jsonValue) : 
    m_memorySizeInMB(0),
    m_memorySizeInMBHasBeenSet(false),
    m_maxConcurrency(0),
    m_maxConcurrencyHasBeenSet(false),
    m_provisionedConcurrency(0),
    m_provisionedConcurrencyHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionVariantServerlessConfig& ProductionVariantServerlessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemorySizeInMB"))
  {
    m_memorySizeInMB = jsonValue.GetInteger("MemorySizeInMB");

    m_memorySizeInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetInteger("MaxConcurrency");

    m_maxConcurrencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedConcurrency"))
  {
    m_provisionedConcurrency = jsonValue.GetInteger("ProvisionedConcurrency");

    m_provisionedConcurrencyHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionVariantServerlessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_memorySizeInMBHasBeenSet)
  {
   payload.WithInteger("MemorySizeInMB", m_memorySizeInMB);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithInteger("MaxConcurrency", m_maxConcurrency);

  }

  if(m_provisionedConcurrencyHasBeenSet)
  {
   payload.WithInteger("ProvisionedConcurrency", m_provisionedConcurrency);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
