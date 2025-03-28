/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RefreshConfiguration.h>
#include <aws/quicksight/model/RefreshFailureConfiguration.h>
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
   * <p>The refresh properties of a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetRefreshProperties">AWS
   * API Reference</a></p>
   */
  class DataSetRefreshProperties
  {
  public:
    AWS_QUICKSIGHT_API DataSetRefreshProperties() = default;
    AWS_QUICKSIGHT_API DataSetRefreshProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetRefreshProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The refresh configuration for a dataset.</p>
     */
    inline const RefreshConfiguration& GetRefreshConfiguration() const { return m_refreshConfiguration; }
    inline bool RefreshConfigurationHasBeenSet() const { return m_refreshConfigurationHasBeenSet; }
    template<typename RefreshConfigurationT = RefreshConfiguration>
    void SetRefreshConfiguration(RefreshConfigurationT&& value) { m_refreshConfigurationHasBeenSet = true; m_refreshConfiguration = std::forward<RefreshConfigurationT>(value); }
    template<typename RefreshConfigurationT = RefreshConfiguration>
    DataSetRefreshProperties& WithRefreshConfiguration(RefreshConfigurationT&& value) { SetRefreshConfiguration(std::forward<RefreshConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure configuration for a dataset.</p>
     */
    inline const RefreshFailureConfiguration& GetFailureConfiguration() const { return m_failureConfiguration; }
    inline bool FailureConfigurationHasBeenSet() const { return m_failureConfigurationHasBeenSet; }
    template<typename FailureConfigurationT = RefreshFailureConfiguration>
    void SetFailureConfiguration(FailureConfigurationT&& value) { m_failureConfigurationHasBeenSet = true; m_failureConfiguration = std::forward<FailureConfigurationT>(value); }
    template<typename FailureConfigurationT = RefreshFailureConfiguration>
    DataSetRefreshProperties& WithFailureConfiguration(FailureConfigurationT&& value) { SetFailureConfiguration(std::forward<FailureConfigurationT>(value)); return *this;}
    ///@}
  private:

    RefreshConfiguration m_refreshConfiguration;
    bool m_refreshConfigurationHasBeenSet = false;

    RefreshFailureConfiguration m_failureConfiguration;
    bool m_failureConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
