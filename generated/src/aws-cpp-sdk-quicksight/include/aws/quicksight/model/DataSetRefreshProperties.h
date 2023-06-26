/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RefreshConfiguration.h>
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
    AWS_QUICKSIGHT_API DataSetRefreshProperties();
    AWS_QUICKSIGHT_API DataSetRefreshProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetRefreshProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The refresh configuration for a dataset.</p>
     */
    inline const RefreshConfiguration& GetRefreshConfiguration() const{ return m_refreshConfiguration; }

    /**
     * <p>The refresh configuration for a dataset.</p>
     */
    inline bool RefreshConfigurationHasBeenSet() const { return m_refreshConfigurationHasBeenSet; }

    /**
     * <p>The refresh configuration for a dataset.</p>
     */
    inline void SetRefreshConfiguration(const RefreshConfiguration& value) { m_refreshConfigurationHasBeenSet = true; m_refreshConfiguration = value; }

    /**
     * <p>The refresh configuration for a dataset.</p>
     */
    inline void SetRefreshConfiguration(RefreshConfiguration&& value) { m_refreshConfigurationHasBeenSet = true; m_refreshConfiguration = std::move(value); }

    /**
     * <p>The refresh configuration for a dataset.</p>
     */
    inline DataSetRefreshProperties& WithRefreshConfiguration(const RefreshConfiguration& value) { SetRefreshConfiguration(value); return *this;}

    /**
     * <p>The refresh configuration for a dataset.</p>
     */
    inline DataSetRefreshProperties& WithRefreshConfiguration(RefreshConfiguration&& value) { SetRefreshConfiguration(std::move(value)); return *this;}

  private:

    RefreshConfiguration m_refreshConfiguration;
    bool m_refreshConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
