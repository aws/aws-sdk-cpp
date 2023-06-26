/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobDataSourceConfigInput.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobDocumentType.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The input structure for the InputConfig in a
   * VectorEnrichmentJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/VectorEnrichmentJobInputConfig">AWS
   * API Reference</a></p>
   */
  class VectorEnrichmentJobInputConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobInputConfig();
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input structure for the data source that represents the storage type of
     * the input data objects.</p>
     */
    inline const VectorEnrichmentJobDataSourceConfigInput& GetDataSourceConfig() const{ return m_dataSourceConfig; }

    /**
     * <p>The input structure for the data source that represents the storage type of
     * the input data objects.</p>
     */
    inline bool DataSourceConfigHasBeenSet() const { return m_dataSourceConfigHasBeenSet; }

    /**
     * <p>The input structure for the data source that represents the storage type of
     * the input data objects.</p>
     */
    inline void SetDataSourceConfig(const VectorEnrichmentJobDataSourceConfigInput& value) { m_dataSourceConfigHasBeenSet = true; m_dataSourceConfig = value; }

    /**
     * <p>The input structure for the data source that represents the storage type of
     * the input data objects.</p>
     */
    inline void SetDataSourceConfig(VectorEnrichmentJobDataSourceConfigInput&& value) { m_dataSourceConfigHasBeenSet = true; m_dataSourceConfig = std::move(value); }

    /**
     * <p>The input structure for the data source that represents the storage type of
     * the input data objects.</p>
     */
    inline VectorEnrichmentJobInputConfig& WithDataSourceConfig(const VectorEnrichmentJobDataSourceConfigInput& value) { SetDataSourceConfig(value); return *this;}

    /**
     * <p>The input structure for the data source that represents the storage type of
     * the input data objects.</p>
     */
    inline VectorEnrichmentJobInputConfig& WithDataSourceConfig(VectorEnrichmentJobDataSourceConfigInput&& value) { SetDataSourceConfig(std::move(value)); return *this;}


    /**
     * <p>The input structure that defines the data source file type.</p>
     */
    inline const VectorEnrichmentJobDocumentType& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The input structure that defines the data source file type.</p>
     */
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }

    /**
     * <p>The input structure that defines the data source file type.</p>
     */
    inline void SetDocumentType(const VectorEnrichmentJobDocumentType& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }

    /**
     * <p>The input structure that defines the data source file type.</p>
     */
    inline void SetDocumentType(VectorEnrichmentJobDocumentType&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }

    /**
     * <p>The input structure that defines the data source file type.</p>
     */
    inline VectorEnrichmentJobInputConfig& WithDocumentType(const VectorEnrichmentJobDocumentType& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The input structure that defines the data source file type.</p>
     */
    inline VectorEnrichmentJobInputConfig& WithDocumentType(VectorEnrichmentJobDocumentType&& value) { SetDocumentType(std::move(value)); return *this;}

  private:

    VectorEnrichmentJobDataSourceConfigInput m_dataSourceConfig;
    bool m_dataSourceConfigHasBeenSet = false;

    VectorEnrichmentJobDocumentType m_documentType;
    bool m_documentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
