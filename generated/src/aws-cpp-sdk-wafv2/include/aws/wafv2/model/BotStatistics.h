/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
 * <p>Statistics about a specific bot's traffic to a path, including the bot name,
 * request count, and percentage of traffic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/BotStatistics">AWS
 * API Reference</a></p>
 */
class BotStatistics {
 public:
  AWS_WAFV2_API BotStatistics() = default;
  AWS_WAFV2_API BotStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API BotStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the bot. For example, <code>gptbot</code> or
   * <code>googlebot</code>.</p>
   */
  inline const Aws::String& GetBotName() const { return m_botName; }
  inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
  template <typename BotNameT = Aws::String>
  void SetBotName(BotNameT&& value) {
    m_botNameHasBeenSet = true;
    m_botName = std::forward<BotNameT>(value);
  }
  template <typename BotNameT = Aws::String>
  BotStatistics& WithBotName(BotNameT&& value) {
    SetBotName(std::forward<BotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of requests from this bot to the associated path within the
   * specified time window.</p>
   */
  inline long long GetRequestCount() const { return m_requestCount; }
  inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }
  inline void SetRequestCount(long long value) {
    m_requestCountHasBeenSet = true;
    m_requestCount = value;
  }
  inline BotStatistics& WithRequestCount(long long value) {
    SetRequestCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of total requests to the associated path that came from this
   * bot.</p>
   */
  inline double GetPercentage() const { return m_percentage; }
  inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
  inline void SetPercentage(double value) {
    m_percentageHasBeenSet = true;
    m_percentage = value;
  }
  inline BotStatistics& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_botName;

  long long m_requestCount{0};

  double m_percentage{0.0};
  bool m_botNameHasBeenSet = false;
  bool m_requestCountHasBeenSet = false;
  bool m_percentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
