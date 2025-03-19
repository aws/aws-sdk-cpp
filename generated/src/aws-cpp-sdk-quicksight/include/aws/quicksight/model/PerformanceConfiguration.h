/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/UniqueKey.h>
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
   * <p>The configuration for the performance optimization of the dataset that
   * contains a <code>UniqueKey</code> configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PerformanceConfiguration">AWS
   * API Reference</a></p>
   */
  class PerformanceConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PerformanceConfiguration() = default;
    AWS_QUICKSIGHT_API PerformanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PerformanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>UniqueKey</code> configuration.</p>
     */
    inline const Aws::Vector<UniqueKey>& GetUniqueKeys() const { return m_uniqueKeys; }
    inline bool UniqueKeysHasBeenSet() const { return m_uniqueKeysHasBeenSet; }
    template<typename UniqueKeysT = Aws::Vector<UniqueKey>>
    void SetUniqueKeys(UniqueKeysT&& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys = std::forward<UniqueKeysT>(value); }
    template<typename UniqueKeysT = Aws::Vector<UniqueKey>>
    PerformanceConfiguration& WithUniqueKeys(UniqueKeysT&& value) { SetUniqueKeys(std::forward<UniqueKeysT>(value)); return *this;}
    template<typename UniqueKeysT = UniqueKey>
    PerformanceConfiguration& AddUniqueKeys(UniqueKeysT&& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys.emplace_back(std::forward<UniqueKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<UniqueKey> m_uniqueKeys;
    bool m_uniqueKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
