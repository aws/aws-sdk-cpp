/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ApsRegion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>Configuration for Yield Optimization, which fills unsold ad inventory in ad
 * breaks with programmatic ads from Amazon Publisher Services (APS).</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/YieldOptimizationConfiguration">AWS
 * API Reference</a></p>
 */
class YieldOptimizationConfiguration {
 public:
  AWS_MEDIATAILOR_API YieldOptimizationConfiguration() = default;
  AWS_MEDIATAILOR_API YieldOptimizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API YieldOptimizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum unfilled duration, in seconds, that must remain in an ad break
   * before MediaTailor requests additional ads from Amazon Publisher Services (APS).
   * For example, if set to 6 seconds, yield optimization triggers only when at least
   * 6 seconds of unfilled time remains after the primary ad server response.</p>
   */
  inline int GetMinimumUnfilledDuration() const { return m_minimumUnfilledDuration; }
  inline bool MinimumUnfilledDurationHasBeenSet() const { return m_minimumUnfilledDurationHasBeenSet; }
  inline void SetMinimumUnfilledDuration(int value) {
    m_minimumUnfilledDurationHasBeenSet = true;
    m_minimumUnfilledDuration = value;
  }
  inline YieldOptimizationConfiguration& WithMinimumUnfilledDuration(int value) {
    SetMinimumUnfilledDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Publisher ID for an existing Amazon Publisher Services configuration. This ID
   * must be obtained by registering with APS prior to using the Yield Optimization
   * feature. The Publisher ID identifies your account in the APS system and is
   * required for all bid requests.</p>
   */
  inline const Aws::String& GetPublisherId() const { return m_publisherId; }
  inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
  template <typename PublisherIdT = Aws::String>
  void SetPublisherId(PublisherIdT&& value) {
    m_publisherIdHasBeenSet = true;
    m_publisherId = std::forward<PublisherIdT>(value);
  }
  template <typename PublisherIdT = Aws::String>
  YieldOptimizationConfiguration& WithPublisherId(PublisherIdT&& value) {
    SetPublisherId(std::forward<PublisherIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Publisher Services (APS) region that MediaTailor sends bid
   * requests to. Choose the region closest to your primary audience, because the
   * selection affects both latency and the ad inventory available to you. This
   * setting applies to the entire playback configuration, not to individual viewers.
   * If you serve traffic across multiple regions, create a separate playback
   * configuration for each APS region.</p>
   */
  inline ApsRegion GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  inline void SetRegion(ApsRegion value) {
    m_regionHasBeenSet = true;
    m_region = value;
  }
  inline YieldOptimizationConfiguration& WithRegion(ApsRegion value) {
    SetRegion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OpenRTB bid request template, in JSON, that MediaTailor sends to Amazon
   * Publisher Services (APS). The template must include an <code>imp</code> array
   * with one impression specifying <code>bidfloor</code>, an <code>app</code> object
   * specifying <code>bundle</code> and <code>storeurl</code>, and a
   * <code>device</code> object specifying <code>ua</code> and <code>ip</code>. Use
   * double curly braces (for example, <code>{{player_params.user_agent}}</code>) to
   * insert session variables and player parameters.</p>
   */
  inline const Aws::String& GetOpenRtbTemplate() const { return m_openRtbTemplate; }
  inline bool OpenRtbTemplateHasBeenSet() const { return m_openRtbTemplateHasBeenSet; }
  template <typename OpenRtbTemplateT = Aws::String>
  void SetOpenRtbTemplate(OpenRtbTemplateT&& value) {
    m_openRtbTemplateHasBeenSet = true;
    m_openRtbTemplate = std::forward<OpenRtbTemplateT>(value);
  }
  template <typename OpenRtbTemplateT = Aws::String>
  YieldOptimizationConfiguration& WithOpenRtbTemplate(OpenRtbTemplateT&& value) {
    SetOpenRtbTemplate(std::forward<OpenRtbTemplateT>(value));
    return *this;
  }
  ///@}
 private:
  int m_minimumUnfilledDuration{0};

  Aws::String m_publisherId;

  ApsRegion m_region{ApsRegion::NOT_SET};

  Aws::String m_openRtbTemplate;
  bool m_minimumUnfilledDurationHasBeenSet = false;
  bool m_publisherIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_openRtbTemplateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
