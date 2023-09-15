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
   * <p>Statistics for <code>REFRESH</code> mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/RefreshStatisticsIdMap">AWS
   * API Reference</a></p>
   */
  class RefreshStatisticsIdMap
  {
  public:
    AWS_NEPTUNEDATA_API RefreshStatisticsIdMap();
    AWS_NEPTUNEDATA_API RefreshStatisticsIdMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API RefreshStatisticsIdMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline const Aws::String& GetStatisticsId() const{ return m_statisticsId; }

    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline bool StatisticsIdHasBeenSet() const { return m_statisticsIdHasBeenSet; }

    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline void SetStatisticsId(const Aws::String& value) { m_statisticsIdHasBeenSet = true; m_statisticsId = value; }

    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline void SetStatisticsId(Aws::String&& value) { m_statisticsIdHasBeenSet = true; m_statisticsId = std::move(value); }

    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline void SetStatisticsId(const char* value) { m_statisticsIdHasBeenSet = true; m_statisticsId.assign(value); }

    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline RefreshStatisticsIdMap& WithStatisticsId(const Aws::String& value) { SetStatisticsId(value); return *this;}

    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline RefreshStatisticsIdMap& WithStatisticsId(Aws::String&& value) { SetStatisticsId(std::move(value)); return *this;}

    /**
     * <p>The ID of the statistics generation run that is currently occurring.</p>
     */
    inline RefreshStatisticsIdMap& WithStatisticsId(const char* value) { SetStatisticsId(value); return *this;}

  private:

    Aws::String m_statisticsId;
    bool m_statisticsIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
