/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BestOutreachWindow.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Aggregated outreach guidance for leads that share the same country,
 * geography, region, and company segment. It names the outreach channel most
 * commonly recommended for that group and, optionally, the days and times that
 * channel is best used. This is group-level guidance. It doesn't describe an
 * individual lead's contact history or rank recommendations for a specific
 * lead.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ChannelRecommendation">AWS
 * API Reference</a></p>
 */
class ChannelRecommendation {
 public:
  AWS_PARTNERCENTRALSELLING_API ChannelRecommendation() = default;
  AWS_PARTNERCENTRALSELLING_API ChannelRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ChannelRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommended outreach channel for the group of similar leads. Valid values
   * are <code>EMAIL</code> and <code>CALL</code>.</p>
   */
  inline const Aws::String& GetRecommendedChannel() const { return m_recommendedChannel; }
  inline bool RecommendedChannelHasBeenSet() const { return m_recommendedChannelHasBeenSet; }
  template <typename RecommendedChannelT = Aws::String>
  void SetRecommendedChannel(RecommendedChannelT&& value) {
    m_recommendedChannelHasBeenSet = true;
    m_recommendedChannel = std::forward<RecommendedChannelT>(value);
  }
  template <typename RecommendedChannelT = Aws::String>
  ChannelRecommendation& WithRecommendedChannel(RecommendedChannelT&& value) {
    SetRecommendedChannel(std::forward<RecommendedChannelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended day-specific outreach windows for the recommended channel,
   * expressed in Coordinated Universal Time (UTC). Each window applies to one day,
   * and more than one window can fall on the same day. This field is optional and
   * appears only when window guidance is available.</p>
   */
  inline const Aws::Vector<BestOutreachWindow>& GetBestOutreachWindows() const { return m_bestOutreachWindows; }
  inline bool BestOutreachWindowsHasBeenSet() const { return m_bestOutreachWindowsHasBeenSet; }
  template <typename BestOutreachWindowsT = Aws::Vector<BestOutreachWindow>>
  void SetBestOutreachWindows(BestOutreachWindowsT&& value) {
    m_bestOutreachWindowsHasBeenSet = true;
    m_bestOutreachWindows = std::forward<BestOutreachWindowsT>(value);
  }
  template <typename BestOutreachWindowsT = Aws::Vector<BestOutreachWindow>>
  ChannelRecommendation& WithBestOutreachWindows(BestOutreachWindowsT&& value) {
    SetBestOutreachWindows(std::forward<BestOutreachWindowsT>(value));
    return *this;
  }
  template <typename BestOutreachWindowsT = BestOutreachWindow>
  ChannelRecommendation& AddBestOutreachWindows(BestOutreachWindowsT&& value) {
    m_bestOutreachWindowsHasBeenSet = true;
    m_bestOutreachWindows.emplace_back(std::forward<BestOutreachWindowsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendedChannel;

  Aws::Vector<BestOutreachWindow> m_bestOutreachWindows;
  bool m_recommendedChannelHasBeenSet = false;
  bool m_bestOutreachWindowsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
