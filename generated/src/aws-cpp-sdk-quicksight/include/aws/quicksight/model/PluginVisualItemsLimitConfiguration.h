/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>A query limits configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PluginVisualItemsLimitConfiguration">AWS
   * API Reference</a></p>
   */
  class PluginVisualItemsLimitConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PluginVisualItemsLimitConfiguration() = default;
    AWS_QUICKSIGHT_API PluginVisualItemsLimitConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualItemsLimitConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines how many values are be fetched at once.</p>
     */
    inline long long GetItemsLimit() const { return m_itemsLimit; }
    inline bool ItemsLimitHasBeenSet() const { return m_itemsLimitHasBeenSet; }
    inline void SetItemsLimit(long long value) { m_itemsLimitHasBeenSet = true; m_itemsLimit = value; }
    inline PluginVisualItemsLimitConfiguration& WithItemsLimit(long long value) { SetItemsLimit(value); return *this;}
    ///@}
  private:

    long long m_itemsLimit{0};
    bool m_itemsLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
