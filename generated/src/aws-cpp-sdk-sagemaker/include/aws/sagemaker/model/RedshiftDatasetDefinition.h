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
    AWS_SAGEMAKER_API RedshiftDatasetDefinition() = default;
    AWS_SAGEMAKER_API RedshiftDatasetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RedshiftDatasetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    RedshiftDatasetDefinition& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    RedshiftDatasetDefinition& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    RedshiftDatasetDefinition& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    RedshiftDatasetDefinition& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role attached to your Redshift cluster that Amazon SageMaker uses to
     * generate datasets.</p>
     */
    inline const Aws::String& GetClusterRoleArn() const { return m_clusterRoleArn; }
    inline bool ClusterRoleArnHasBeenSet() const { return m_clusterRoleArnHasBeenSet; }
    template<typename ClusterRoleArnT = Aws::String>
    void SetClusterRoleArn(ClusterRoleArnT&& value) { m_clusterRoleArnHasBeenSet = true; m_clusterRoleArn = std::forward<ClusterRoleArnT>(value); }
    template<typename ClusterRoleArnT = Aws::String>
    RedshiftDatasetDefinition& WithClusterRoleArn(ClusterRoleArnT&& value) { SetClusterRoleArn(std::forward<ClusterRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where the Redshift query results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const { return m_outputS3Uri; }
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }
    template<typename OutputS3UriT = Aws::String>
    void SetOutputS3Uri(OutputS3UriT&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::forward<OutputS3UriT>(value); }
    template<typename OutputS3UriT = Aws::String>
    RedshiftDatasetDefinition& WithOutputS3Uri(OutputS3UriT&& value) { SetOutputS3Uri(std::forward<OutputS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data from a Redshift execution.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RedshiftDatasetDefinition& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline RedshiftResultFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(RedshiftResultFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline RedshiftDatasetDefinition& WithOutputFormat(RedshiftResultFormat value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    
    inline RedshiftResultCompressionType GetOutputCompression() const { return m_outputCompression; }
    inline bool OutputCompressionHasBeenSet() const { return m_outputCompressionHasBeenSet; }
    inline void SetOutputCompression(RedshiftResultCompressionType value) { m_outputCompressionHasBeenSet = true; m_outputCompression = value; }
    inline RedshiftDatasetDefinition& WithOutputCompression(RedshiftResultCompressionType value) { SetOutputCompression(value); return *this;}
    ///@}
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

    RedshiftResultFormat m_outputFormat{RedshiftResultFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    RedshiftResultCompressionType m_outputCompression{RedshiftResultCompressionType::NOT_SET};
    bool m_outputCompressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
