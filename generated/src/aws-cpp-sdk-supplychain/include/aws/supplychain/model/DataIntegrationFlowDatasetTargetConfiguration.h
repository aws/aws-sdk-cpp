/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetOptions.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The dataset DataIntegrationFlow target configuration
   * parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowDatasetTargetConfiguration">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowDatasetTargetConfiguration
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetTargetConfiguration() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dataset ARN.</p>
     */
    inline const Aws::String& GetDatasetIdentifier() const { return m_datasetIdentifier; }
    inline bool DatasetIdentifierHasBeenSet() const { return m_datasetIdentifierHasBeenSet; }
    template<typename DatasetIdentifierT = Aws::String>
    void SetDatasetIdentifier(DatasetIdentifierT&& value) { m_datasetIdentifierHasBeenSet = true; m_datasetIdentifier = std::forward<DatasetIdentifierT>(value); }
    template<typename DatasetIdentifierT = Aws::String>
    DataIntegrationFlowDatasetTargetConfiguration& WithDatasetIdentifier(DatasetIdentifierT&& value) { SetDatasetIdentifier(std::forward<DatasetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset DataIntegrationFlow target options.</p>
     */
    inline const DataIntegrationFlowDatasetOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = DataIntegrationFlowDatasetOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = DataIntegrationFlowDatasetOptions>
    DataIntegrationFlowDatasetTargetConfiguration& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetIdentifier;
    bool m_datasetIdentifierHasBeenSet = false;

    DataIntegrationFlowDatasetOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
