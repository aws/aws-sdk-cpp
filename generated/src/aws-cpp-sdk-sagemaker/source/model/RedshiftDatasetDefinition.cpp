/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RedshiftDatasetDefinition.h>
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

RedshiftDatasetDefinition::RedshiftDatasetDefinition() : 
    m_clusterIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_clusterRoleArnHasBeenSet(false),
    m_outputS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_outputFormat(RedshiftResultFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_outputCompression(RedshiftResultCompressionType::NOT_SET),
    m_outputCompressionHasBeenSet(false)
{
}

RedshiftDatasetDefinition::RedshiftDatasetDefinition(JsonView jsonValue) : 
    m_clusterIdHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_clusterRoleArnHasBeenSet(false),
    m_outputS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_outputFormat(RedshiftResultFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_outputCompression(RedshiftResultCompressionType::NOT_SET),
    m_outputCompressionHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDatasetDefinition& RedshiftDatasetDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");

    m_dbUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterRoleArn"))
  {
    m_clusterRoleArn = jsonValue.GetString("ClusterRoleArn");

    m_clusterRoleArnHasBeenSet = true;
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
    m_outputFormat = RedshiftResultFormatMapper::GetRedshiftResultFormatForName(jsonValue.GetString("OutputFormat"));

    m_outputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputCompression"))
  {
    m_outputCompression = RedshiftResultCompressionTypeMapper::GetRedshiftResultCompressionTypeForName(jsonValue.GetString("OutputCompression"));

    m_outputCompressionHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDatasetDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_clusterRoleArnHasBeenSet)
  {
   payload.WithString("ClusterRoleArn", m_clusterRoleArn);

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
   payload.WithString("OutputFormat", RedshiftResultFormatMapper::GetNameForRedshiftResultFormat(m_outputFormat));
  }

  if(m_outputCompressionHasBeenSet)
  {
   payload.WithString("OutputCompression", RedshiftResultCompressionTypeMapper::GetNameForRedshiftResultCompressionType(m_outputCompression));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
