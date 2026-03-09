/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BotStatistics.h>
#include <aws/wafv2/model/FilterSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>Statistics about bot traffic to a specific URI path, including the path,
 * request count, percentage of total traffic, and the top bots accessing that
 * path.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PathStatistics">AWS
 * API Reference</a></p>
 */
class PathStatistics {
 public:
  AWS_WAFV2_API PathStatistics() = default;
  AWS_WAFV2_API PathStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API PathStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the bot filter that was applied to generate these
   * statistics. This field is only populated when you filter by bot category,
   * organization, or name.</p>
   */
  inline const FilterSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = FilterSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = FilterSource>
  PathStatistics& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI path. For example, <code>/api/</code> or
   * <code>/api/v1/users</code>.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  PathStatistics& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of requests to this path within the specified time window.</p>
   */
  inline long long GetRequestCount() const { return m_requestCount; }
  inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }
  inline void SetRequestCount(long long value) {
    m_requestCountHasBeenSet = true;
    m_requestCount = value;
  }
  inline PathStatistics& WithRequestCount(long long value) {
    SetRequestCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of total requests that were made to this path.</p>
   */
  inline double GetPercentage() const { return m_percentage; }
  inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
  inline void SetPercentage(double value) {
    m_percentageHasBeenSet = true;
    m_percentage = value;
  }
  inline PathStatistics& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of top bots accessing this path, ordered by request count. The
   * number of bots included is determined by the
   * <code>NumberOfTopTrafficBotsPerPath</code> parameter in the request.</p>
   */
  inline const Aws::Vector<BotStatistics>& GetTopBots() const { return m_topBots; }
  inline bool TopBotsHasBeenSet() const { return m_topBotsHasBeenSet; }
  template <typename TopBotsT = Aws::Vector<BotStatistics>>
  void SetTopBots(TopBotsT&& value) {
    m_topBotsHasBeenSet = true;
    m_topBots = std::forward<TopBotsT>(value);
  }
  template <typename TopBotsT = Aws::Vector<BotStatistics>>
  PathStatistics& WithTopBots(TopBotsT&& value) {
    SetTopBots(std::forward<TopBotsT>(value));
    return *this;
  }
  template <typename TopBotsT = BotStatistics>
  PathStatistics& AddTopBots(TopBotsT&& value) {
    m_topBotsHasBeenSet = true;
    m_topBots.emplace_back(std::forward<TopBotsT>(value));
    return *this;
  }
  ///@}
 private:
  FilterSource m_source;

  Aws::String m_path;

  long long m_requestCount{0};

  double m_percentage{0.0};

  Aws::Vector<BotStatistics> m_topBots;
  bool m_sourceHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_requestCountHasBeenSet = false;
  bool m_percentageHasBeenSet = false;
  bool m_topBotsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
