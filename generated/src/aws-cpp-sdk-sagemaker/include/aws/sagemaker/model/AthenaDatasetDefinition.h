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
    AWS_SAGEMAKER_API AthenaDatasetDefinition() = default;
    AWS_SAGEMAKER_API AthenaDatasetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AthenaDatasetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    AthenaDatasetDefinition& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    AthenaDatasetDefinition& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    AthenaDatasetDefinition& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    AthenaDatasetDefinition& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where Athena query results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Uri() const { return m_outputS3Uri; }
    inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }
    template<typename OutputS3UriT = Aws::String>
    void SetOutputS3Uri(OutputS3UriT&& value) { m_outputS3UriHasBeenSet = true; m_outputS3Uri = std::forward<OutputS3UriT>(value); }
    template<typename OutputS3UriT = Aws::String>
    AthenaDatasetDefinition& WithOutputS3Uri(OutputS3UriT&& value) { SetOutputS3Uri(std::forward<OutputS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data generated from an Athena query
     * execution.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AthenaDatasetDefinition& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline AthenaResultFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(AthenaResultFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline AthenaDatasetDefinition& WithOutputFormat(AthenaResultFormat value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    
    inline AthenaResultCompressionType GetOutputCompression() const { return m_outputCompression; }
    inline bool OutputCompressionHasBeenSet() const { return m_outputCompressionHasBeenSet; }
    inline void SetOutputCompression(AthenaResultCompressionType value) { m_outputCompressionHasBeenSet = true; m_outputCompression = value; }
    inline AthenaDatasetDefinition& WithOutputCompression(AthenaResultCompressionType value) { SetOutputCompression(value); return *this;}
    ///@}
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

    AthenaResultFormat m_outputFormat{AthenaResultFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    AthenaResultCompressionType m_outputCompression{AthenaResultCompressionType::NOT_SET};
    bool m_outputCompressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
