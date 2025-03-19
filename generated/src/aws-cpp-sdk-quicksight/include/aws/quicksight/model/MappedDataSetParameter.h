/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A dataset parameter that is mapped to an analysis parameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MappedDataSetParameter">AWS
   * API Reference</a></p>
   */
  class MappedDataSetParameter
  {
  public:
    AWS_QUICKSIGHT_API MappedDataSetParameter() = default;
    AWS_QUICKSIGHT_API MappedDataSetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MappedDataSetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const { return m_dataSetIdentifier; }
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }
    template<typename DataSetIdentifierT = Aws::String>
    void SetDataSetIdentifier(DataSetIdentifierT&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::forward<DataSetIdentifierT>(value); }
    template<typename DataSetIdentifierT = Aws::String>
    MappedDataSetParameter& WithDataSetIdentifier(DataSetIdentifierT&& value) { SetDataSetIdentifier(std::forward<DataSetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline const Aws::String& GetDataSetParameterName() const { return m_dataSetParameterName; }
    inline bool DataSetParameterNameHasBeenSet() const { return m_dataSetParameterNameHasBeenSet; }
    template<typename DataSetParameterNameT = Aws::String>
    void SetDataSetParameterName(DataSetParameterNameT&& value) { m_dataSetParameterNameHasBeenSet = true; m_dataSetParameterName = std::forward<DataSetParameterNameT>(value); }
    template<typename DataSetParameterNameT = Aws::String>
    MappedDataSetParameter& WithDataSetParameterName(DataSetParameterNameT&& value) { SetDataSetParameterName(std::forward<DataSetParameterNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;

    Aws::String m_dataSetParameterName;
    bool m_dataSetParameterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
