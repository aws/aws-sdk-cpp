/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>The result of a single metric data query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MetricDataResult">AWS
   * API Reference</a></p>
   */
  class MetricDataResult
  {
  public:
    AWS_SESV2_API MetricDataResult() = default;
    AWS_SESV2_API MetricDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MetricDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MetricDataResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const { return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::forward<TimestampsT>(value); }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    MetricDataResult& WithTimestamps(TimestampsT&& value) { SetTimestamps(std::forward<TimestampsT>(value)); return *this;}
    template<typename TimestampsT = Aws::Utils::DateTime>
    MetricDataResult& AddTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps.emplace_back(std::forward<TimestampsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline const Aws::Vector<long long>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<long long>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<long long>>
    MetricDataResult& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline MetricDataResult& AddValues(long long value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<long long> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
