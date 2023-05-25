/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsLambdaFunctionDetails.h>
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

AwsLambdaFunctionDetails::AwsLambdaFunctionDetails() : 
    m_codeHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_masterArnHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_tracingConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_architecturesHasBeenSet(false),
    m_packageTypeHasBeenSet(false)
{
}

AwsLambdaFunctionDetails::AwsLambdaFunctionDetails(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_masterArnHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_tracingConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_architecturesHasBeenSet(false),
    m_packageTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLambdaFunctionDetails& AwsLambdaFunctionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetObject("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSha256"))
  {
    m_codeSha256 = jsonValue.GetString("CodeSha256");

    m_codeSha256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

    m_deadLetterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    m_environment = jsonValue.GetObject("Environment");

    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionName"))
  {
    m_functionName = jsonValue.GetString("FunctionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");

    m_handlerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Layers"))
  {
    Aws::Utils::Array<JsonView> layersJsonList = jsonValue.GetArray("Layers");
    for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
    {
      m_layers.push_back(layersJsonList[layersIndex].AsObject());
    }
    m_layersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterArn"))
  {
    m_masterArn = jsonValue.GetString("MasterArn");

    m_masterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemorySize"))
  {
    m_memorySize = jsonValue.GetInteger("MemorySize");

    m_memorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Runtime"))
  {
    m_runtime = jsonValue.GetString("Runtime");

    m_runtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TracingConfig"))
  {
    m_tracingConfig = jsonValue.GetObject("TracingConfig");

    m_tracingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Architectures"))
  {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("Architectures");
    for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
    {
      m_architectures.push_back(architecturesJsonList[architecturesIndex].AsString());
    }
    m_architecturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageType"))
  {
    m_packageType = jsonValue.GetString("PackageType");

    m_packageTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLambdaFunctionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithObject("Code", m_code.Jsonize());

  }

  if(m_codeSha256HasBeenSet)
  {
   payload.WithString("CodeSha256", m_codeSha256);

  }

  if(m_deadLetterConfigHasBeenSet)
  {
   payload.WithObject("DeadLetterConfig", m_deadLetterConfig.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("Environment", m_environment.Jsonize());

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("FunctionName", m_functionName);

  }

  if(m_handlerHasBeenSet)
  {
   payload.WithString("Handler", m_handler);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified);

  }

  if(m_layersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layersJsonList(m_layers.size());
   for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
   {
     layersJsonList[layersIndex].AsObject(m_layers[layersIndex].Jsonize());
   }
   payload.WithArray("Layers", std::move(layersJsonList));

  }

  if(m_masterArnHasBeenSet)
  {
   payload.WithString("MasterArn", m_masterArn);

  }

  if(m_memorySizeHasBeenSet)
  {
   payload.WithInteger("MemorySize", m_memorySize);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("Runtime", m_runtime);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_tracingConfigHasBeenSet)
  {
   payload.WithObject("TracingConfig", m_tracingConfig.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_architecturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
   for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
   {
     architecturesJsonList[architecturesIndex].AsString(m_architectures[architecturesIndex]);
   }
   payload.WithArray("Architectures", std::move(architecturesJsonList));

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("PackageType", m_packageType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
