/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RedshiftResultFormat.h>
#include <aws/sagemaker/model/RedshiftResultCompressionType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration for Redshift Dataset Definition input.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RedshiftDatasetDefinition">AWS
   * API Reference</a></p>
   */
  class RedshiftDatasetDefinition
  {
  public:
    AWS_SAGEMAKER_API RedshiftDatasetDefinition();
    AWS_SAGEMAKER_API RedshiftDatasetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RedshiftDatasetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    
    inline RedshiftDatasetDefinition& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    
    inline RedshiftDatasetDefinition& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    
    inline RedshiftDatasetDefinition& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    
    inline const Aws::String& GetDatabase() const{ return m_database; }

    
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    
    inline RedshiftDatasetDefinition& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    
    inline RedshiftDatasetDefinition& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    
    inline RedshiftDatasetDefinition& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    
    inline RedshiftDatasetDefinition& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    
    inline RedshiftDatasetDefinition& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    
    inline RedshiftDatasetDefinition& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    
    inline RedshiftDatasetDefinition& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    
    inline RedshiftDatasetDefinition& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    
    inline RedshiftDatasetDefinition& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline const Aws::String& GetClusterRoleArn() const{ return m_clusterRoleArn; }

    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline bool ClusterRoleArnHasBeenSet() const { return m_clusterRoleArnHasBeenSet; }

    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline void SetClusterRoleArn(const Aws::String& value) { m_clusterRoleArnHasBeenSet = true; m_clusterRoleArn = value; }

    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline void SetClusterRoleArn(Aws::String&& value) { m_clusterRoleArnHasBeenSet = true; m_clusterRoleArn = std::move(value); }

    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline void SetClusterRoleArn(const char* value) { m_clusterRoleArnHasBeenSet = true; m_clusterRoleArn.assign(value); }

    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline RedshiftDatasetDefinition& WithClusterRoleArn(const Aws::String& value) { SetClusterRoleArn(value); return *this;}

    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline RedshiftDatasetDefinition& WithClusterRoleArn(Aws::String&& value) { SetClusterRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline RedshiftDatasetDefinition& WithClusterRoleArn(const char* value) { SetClusterRoleArn(value); return *this;}


    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const{ return m_outputS3Uri; }

    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline void SetOutputS3Uri(const Aws::String& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = value; }

    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline void SetOutputS3Uri(Aws::String&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::move(value); }

    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline void SetOutputS3Uri(const char* value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri.assign(value); }

    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline RedshiftDatasetDefinition& WithOutputS3Uri(const Aws::String& value) { SetOutputS3Uri(value); return *this;}

    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline RedshiftDatasetDefinition& WithOutputS3Uri(Aws::String&& value) { SetOutputS3Uri(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline RedshiftDatasetDefinition& WithOutputS3Uri(const char* value) { SetOutputS3Uri(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline RedshiftDatasetDefinition& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline RedshiftDatasetDefinition& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline RedshiftDatasetDefinition& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    
    inline const RedshiftResultFormat& GetOutputFormat() const{ return m_outputFormat; }

    
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    
    inline void SetOutputFormat(const RedshiftResultFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    
    inline void SetOutputFormat(RedshiftResultFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    
    inline RedshiftDatasetDefinition& WithOutputFormat(const RedshiftResultFormat& value) { SetOutputFormat(value); return *this;}

    
    inline RedshiftDatasetDefinition& WithOutputFormat(RedshiftResultFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


    
    inline const RedshiftResultCompressionType& GetOutputCompression() const{ return m_outputCompression; }

    
    inline bool OutputCompressionHasBeenSet() const { return m_outputCompressionHasBeenSet; }

    
    inline void SetOutputCompression(const RedshiftResultCompressionType& value) { m_outputCompressionHasBeenSet = true; m_outputCompression = value; }

    
    inline void SetOutputCompression(RedshiftResultCompressionType&& value) { m_outputCompressionHasBeenSet = true; m_outputCompression = std::move(value); }

    
    inline RedshiftDatasetDefinition& WithOutputCompression(const RedshiftResultCompressionType& value) { SetOutputCompression(value); return *this;}

    
    inline RedshiftDatasetDefinition& WithOutputCompression(RedshiftResultCompressionType&& value) { SetOutputCompression(std::move(value)); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_clusterRoleArn;
    bool m_clusterRoleArnHasBeenSet = false;

    Aws::String m_outputS3Uri;
    bool m_outputS3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    RedshiftResultFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    RedshiftResultCompressionType m_outputCompression;
    bool m_outputCompressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
