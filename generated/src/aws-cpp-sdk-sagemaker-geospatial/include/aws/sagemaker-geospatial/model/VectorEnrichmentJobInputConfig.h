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
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobInputConfig() = default;
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input structure for the data source that represents the storage type of
     * the input data objects.</p>
     */
    inline const VectorEnrichmentJobDataSourceConfigInput& GetDataSourceConfig() const { return m_dataSourceConfig; }
    inline bool DataSourceConfigHasBeenSet() const { return m_dataSourceConfigHasBeenSet; }
    template<typename DataSourceConfigT = VectorEnrichmentJobDataSourceConfigInput>
    void SetDataSourceConfig(DataSourceConfigT&& value) { m_dataSourceConfigHasBeenSet = true; m_dataSourceConfig = std::forward<DataSourceConfigT>(value); }
    template<typename DataSourceConfigT = VectorEnrichmentJobDataSourceConfigInput>
    VectorEnrichmentJobInputConfig& WithDataSourceConfig(DataSourceConfigT&& value) { SetDataSourceConfig(std::forward<DataSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input structure that defines the data source file type.</p>
     */
    inline VectorEnrichmentJobDocumentType GetDocumentType() const { return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    inline void SetDocumentType(VectorEnrichmentJobDocumentType value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline VectorEnrichmentJobInputConfig& WithDocumentType(VectorEnrichmentJobDocumentType value) { SetDocumentType(value); return *this;}
    ///@}
  private:

    VectorEnrichmentJobDataSourceConfigInput m_dataSourceConfig;
    bool m_dataSourceConfigHasBeenSet = false;

    VectorEnrichmentJobDocumentType m_documentType{VectorEnrichmentJobDocumentType::NOT_SET};
    bool m_documentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
