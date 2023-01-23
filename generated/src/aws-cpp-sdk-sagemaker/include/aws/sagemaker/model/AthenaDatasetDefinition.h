/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AthenaResultFormat.h>
#include <aws/sagemaker/model/AthenaResultCompressionType.h>
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
   * <p>Configuration for Athena Dataset Definition input.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AthenaDatasetDefinition">AWS
   * API Reference</a></p>
   */
  class AthenaDatasetDefinition
  {
  public:
    AWS_SAGEMAKER_API AthenaDatasetDefinition();
    AWS_SAGEMAKER_API AthenaDatasetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AthenaDatasetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCatalog() const{ return m_catalog; }

    
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }

    
    inline AthenaDatasetDefinition& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}

    
    inline AthenaDatasetDefinition& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}

    
    inline AthenaDatasetDefinition& WithCatalog(const char* value) { SetCatalog(value); return *this;}


    
    inline const Aws::String& GetDatabase() const{ return m_database; }

    
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    
    inline AthenaDatasetDefinition& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    
    inline AthenaDatasetDefinition& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    
    inline AthenaDatasetDefinition& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    
    inline AthenaDatasetDefinition& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    
    inline AthenaDatasetDefinition& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    
    inline AthenaDatasetDefinition& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    
    inline AthenaDatasetDefinition& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    
    inline AthenaDatasetDefinition& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    
    inline AthenaDatasetDefinition& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const{ return m_outputS3Uri; }

    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline void SetOutputS3Uri(const Aws::String& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = value; }

    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline void SetOutputS3Uri(Aws::String&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::move(value); }

    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline void SetOutputS3Uri(const char* value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri.assign(value); }

    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline AthenaDatasetDefinition& WithOutputS3Uri(const Aws::String& value) { SetOutputS3Uri(value); return *this;}

    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline AthenaDatasetDefinition& WithOutputS3Uri(Aws::String&& value) { SetOutputS3Uri(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline AthenaDatasetDefinition& WithOutputS3Uri(const char* value) { SetOutputS3Uri(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline AthenaDatasetDefinition& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline AthenaDatasetDefinition& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline AthenaDatasetDefinition& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    
    inline const AthenaResultFormat& GetOutputFormat() const{ return m_outputFormat; }

    
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    
    inline void SetOutputFormat(const AthenaResultFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    
    inline void SetOutputFormat(AthenaResultFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    
    inline AthenaDatasetDefinition& WithOutputFormat(const AthenaResultFormat& value) { SetOutputFormat(value); return *this;}

    
    inline AthenaDatasetDefinition& WithOutputFormat(AthenaResultFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


    
    inline const AthenaResultCompressionType& GetOutputCompression() const{ return m_outputCompression; }

    
    inline bool OutputCompressionHasBeenSet() const { return m_outputCompressionHasBeenSet; }

    
    inline void SetOutputCompression(const AthenaResultCompressionType& value) { m_outputCompressionHasBeenSet = true; m_outputCompression = value; }

    
    inline void SetOutputCompression(AthenaResultCompressionType&& value) { m_outputCompressionHasBeenSet = true; m_outputCompression = std::move(value); }

    
    inline AthenaDatasetDefinition& WithOutputCompression(const AthenaResultCompressionType& value) { SetOutputCompression(value); return *this;}

    
    inline AthenaDatasetDefinition& WithOutputCompression(AthenaResultCompressionType&& value) { SetOutputCompression(std::move(value)); return *this;}

  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_outputS3Uri;
    bool m_outputS3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    AthenaResultFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    AthenaResultCompressionType m_outputCompression;
    bool m_outputCompressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
