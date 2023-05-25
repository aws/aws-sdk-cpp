/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AthenaDatasetDefinition.h>
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

AthenaDatasetDefinition::AthenaDatasetDefinition() : 
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_outputS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_outputFormat(AthenaResultFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_outputCompression(AthenaResultCompressionType::NOT_SET),
    m_outputCompressionHasBeenSet(false)
{
}

AthenaDatasetDefinition::AthenaDatasetDefinition(JsonView jsonValue) : 
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_outputS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_outputFormat(AthenaResultFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_outputCompression(AthenaResultCompressionType::NOT_SET),
    m_outputCompressionHasBeenSet(false)
{
  *this = jsonValue;
}

AthenaDatasetDefinition& AthenaDatasetDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

    m_catalogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkGroup"))
  {
    m_workGroup = jsonValue.GetString("WorkGroup");

    m_workGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3Uri"))
  {
    m_outputS3Uri = jsonValue.GetString("OutputS3Uri");

    m_outputS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputFormat"))
  {
    m_outputFormat = AthenaResultFormatMapper::GetAthenaResultFormatForName(jsonValue.GetString("OutputFormat"));

    m_outputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputCompression"))
  {
    m_outputCompression = AthenaResultCompressionTypeMapper::GetAthenaResultCompressionTypeForName(jsonValue.GetString("OutputCompression"));

    m_outputCompressionHasBeenSet = true;
  }

  return *this;
}

JsonValue AthenaDatasetDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_outputS3UriHasBeenSet)
  {
   payload.WithString("OutputS3Uri", m_outputS3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("OutputFormat", AthenaResultFormatMapper::GetNameForAthenaResultFormat(m_outputFormat));
  }

  if(m_outputCompressionHasBeenSet)
  {
   payload.WithString("OutputCompression", AthenaResultCompressionTypeMapper::GetNameForAthenaResultCompressionType(m_outputCompression));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
