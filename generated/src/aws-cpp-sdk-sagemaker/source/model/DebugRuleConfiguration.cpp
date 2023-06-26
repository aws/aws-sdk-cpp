/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DebugRuleConfiguration.h>
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

DebugRuleConfiguration::DebugRuleConfiguration() : 
    m_ruleConfigurationNameHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_ruleEvaluatorImageHasBeenSet(false),
    m_instanceType(ProcessingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_ruleParametersHasBeenSet(false)
{
}

DebugRuleConfiguration::DebugRuleConfiguration(JsonView jsonValue) : 
    m_ruleConfigurationNameHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_ruleEvaluatorImageHasBeenSet(false),
    m_instanceType(ProcessingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_ruleParametersHasBeenSet(false)
{
  *this = jsonValue;
}

DebugRuleConfiguration& DebugRuleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleConfigurationName"))
  {
    m_ruleConfigurationName = jsonValue.GetString("RuleConfigurationName");

    m_ruleConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleEvaluatorImage"))
  {
    m_ruleEvaluatorImage = jsonValue.GetString("RuleEvaluatorImage");

    m_ruleEvaluatorImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ProcessingInstanceTypeMapper::GetProcessingInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");

    m_volumeSizeInGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleParameters"))
  {
    Aws::Map<Aws::String, JsonView> ruleParametersJsonMap = jsonValue.GetObject("RuleParameters").GetAllObjects();
    for(auto& ruleParametersItem : ruleParametersJsonMap)
    {
      m_ruleParameters[ruleParametersItem.first] = ruleParametersItem.second.AsString();
    }
    m_ruleParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue DebugRuleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ruleConfigurationNameHasBeenSet)
  {
   payload.WithString("RuleConfigurationName", m_ruleConfigurationName);

  }

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_ruleEvaluatorImageHasBeenSet)
  {
   payload.WithString("RuleEvaluatorImage", m_ruleEvaluatorImage);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ProcessingInstanceTypeMapper::GetNameForProcessingInstanceType(m_instanceType));
  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_ruleParametersHasBeenSet)
  {
   JsonValue ruleParametersJsonMap;
   for(auto& ruleParametersItem : m_ruleParameters)
   {
     ruleParametersJsonMap.WithString(ruleParametersItem.first, ruleParametersItem.second);
   }
   payload.WithObject("RuleParameters", std::move(ruleParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
