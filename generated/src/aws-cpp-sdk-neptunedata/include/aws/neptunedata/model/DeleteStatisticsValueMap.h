/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>The payload for DeleteStatistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/DeleteStatisticsValueMap">AWS
   * API Reference</a></p>
   */
  class DeleteStatisticsValueMap
  {
  public:
    AWS_NEPTUNEDATA_API DeleteStatisticsValueMap() = default;
    AWS_NEPTUNEDATA_API DeleteStatisticsValueMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API DeleteStatisticsValueMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the statistics.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline DeleteStatisticsValueMap& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline const Aws::String& GetStatisticsId() const { return m_statisticsId; }
    inline bool StatisticsIdHasBeenSet() const { return m_statisticsIdHasBeenSet; }
    template<typename StatisticsIdT = Aws::String>
    void SetStatisticsId(StatisticsIdT&& value) { m_statisticsIdHasBeenSet = true; m_statisticsId = std::forward<StatisticsIdT>(value); }
    template<typename StatisticsIdT = Aws::String>
    DeleteStatisticsValueMap& WithStatisticsId(StatisticsIdT&& value) { SetStatisticsId(std::forward<StatisticsIdT>(value)); return *this;}
    ///@}
  private:

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    Aws::String m_statisticsId;
    bool m_statisticsIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
