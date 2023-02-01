/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails::AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails() : 
    m_operandsHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails::AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails(JsonView jsonValue) : 
    m_operandsHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails& AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operands"))
  {
    Aws::Utils::Array<JsonView> operandsJsonList = jsonValue.GetArray("Operands");
    for(unsigned operandsIndex = 0; operandsIndex < operandsJsonList.GetLength(); ++operandsIndex)
    {
      m_operands.push_back(operandsJsonList[operandsIndex].AsObject());
    }
    m_operandsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tag"))
  {
    m_tag = jsonValue.GetObject("Tag");

    m_tagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_operandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operandsJsonList(m_operands.size());
   for(unsigned operandsIndex = 0; operandsIndex < operandsJsonList.GetLength(); ++operandsIndex)
   {
     operandsJsonList[operandsIndex].AsObject(m_operands[operandsIndex].Jsonize());
   }
   payload.WithArray("Operands", std::move(operandsJsonList));

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_tagHasBeenSet)
  {
   payload.WithObject("Tag", m_tag.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
