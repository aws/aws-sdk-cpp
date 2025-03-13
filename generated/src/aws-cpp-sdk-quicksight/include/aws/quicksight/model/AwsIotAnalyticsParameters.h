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
   * <p>The parameters for IoT Analytics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AwsIotAnalyticsParameters">AWS
   * API Reference</a></p>
   */
  class AwsIotAnalyticsParameters
  {
  public:
    AWS_QUICKSIGHT_API AwsIotAnalyticsParameters() = default;
    AWS_QUICKSIGHT_API AwsIotAnalyticsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AwsIotAnalyticsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dataset name.</p>
     */
    inline const Aws::String& GetDataSetName() const { return m_dataSetName; }
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }
    template<typename DataSetNameT = Aws::String>
    void SetDataSetName(DataSetNameT&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::forward<DataSetNameT>(value); }
    template<typename DataSetNameT = Aws::String>
    AwsIotAnalyticsParameters& WithDataSetName(DataSetNameT&& value) { SetDataSetName(std::forward<DataSetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetName;
    bool m_dataSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
