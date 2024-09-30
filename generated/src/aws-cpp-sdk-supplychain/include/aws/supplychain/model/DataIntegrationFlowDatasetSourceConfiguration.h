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
   * <p>The dataset DataIntegrationFlow source configuration
   * parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowDatasetSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowDatasetSourceConfiguration
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetSourceConfiguration();
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetDatasetIdentifier() const{ return m_datasetIdentifier; }
    inline bool DatasetIdentifierHasBeenSet() const { return m_datasetIdentifierHasBeenSet; }
    inline void SetDatasetIdentifier(const Aws::String& value) { m_datasetIdentifierHasBeenSet = true; m_datasetIdentifier = value; }
    inline void SetDatasetIdentifier(Aws::String&& value) { m_datasetIdentifierHasBeenSet = true; m_datasetIdentifier = std::move(value); }
    inline void SetDatasetIdentifier(const char* value) { m_datasetIdentifierHasBeenSet = true; m_datasetIdentifier.assign(value); }
    inline DataIntegrationFlowDatasetSourceConfiguration& WithDatasetIdentifier(const Aws::String& value) { SetDatasetIdentifier(value); return *this;}
    inline DataIntegrationFlowDatasetSourceConfiguration& WithDatasetIdentifier(Aws::String&& value) { SetDatasetIdentifier(std::move(value)); return *this;}
    inline DataIntegrationFlowDatasetSourceConfiguration& WithDatasetIdentifier(const char* value) { SetDatasetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset DataIntegrationFlow source options.</p>
     */
    inline const DataIntegrationFlowDatasetOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const DataIntegrationFlowDatasetOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(DataIntegrationFlowDatasetOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline DataIntegrationFlowDatasetSourceConfiguration& WithOptions(const DataIntegrationFlowDatasetOptions& value) { SetOptions(value); return *this;}
    inline DataIntegrationFlowDatasetSourceConfiguration& WithOptions(DataIntegrationFlowDatasetOptions&& value) { SetOptions(std::move(value)); return *this;}
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
