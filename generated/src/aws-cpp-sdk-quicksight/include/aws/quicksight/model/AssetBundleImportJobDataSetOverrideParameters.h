/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetRefreshProperties.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The override parameters for a single dataset that is being
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSetOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSetOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideParameters() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the dataset to apply overrides to.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    AssetBundleImportJobDataSetOverrideParameters& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the dataset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetBundleImportJobDataSetOverrideParameters& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSetRefreshProperties& GetDataSetRefreshProperties() const { return m_dataSetRefreshProperties; }
    inline bool DataSetRefreshPropertiesHasBeenSet() const { return m_dataSetRefreshPropertiesHasBeenSet; }
    template<typename DataSetRefreshPropertiesT = DataSetRefreshProperties>
    void SetDataSetRefreshProperties(DataSetRefreshPropertiesT&& value) { m_dataSetRefreshPropertiesHasBeenSet = true; m_dataSetRefreshProperties = std::forward<DataSetRefreshPropertiesT>(value); }
    template<typename DataSetRefreshPropertiesT = DataSetRefreshProperties>
    AssetBundleImportJobDataSetOverrideParameters& WithDataSetRefreshProperties(DataSetRefreshPropertiesT&& value) { SetDataSetRefreshProperties(std::forward<DataSetRefreshPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSetRefreshProperties m_dataSetRefreshProperties;
    bool m_dataSetRefreshPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
