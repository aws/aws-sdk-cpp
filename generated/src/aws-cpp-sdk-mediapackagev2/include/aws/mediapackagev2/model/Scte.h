/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/CustomAdType.h>
#include <aws/mediapackagev2/model/ScteFilter.h>
#include <aws/mediapackagev2/model/ScteInSegments.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mediapackagev2 {
namespace Model {

/**
 * <p>The SCTE configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/Scte">AWS
 * API Reference</a></p>
 */
class Scte {
 public:
  AWS_MEDIAPACKAGEV2_API Scte() = default;
  AWS_MEDIAPACKAGEV2_API Scte(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API Scte& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SCTE-35 message types that you want to be treated as ad markers in the
   * output.</p>
   */
  inline const Aws::Vector<ScteFilter>& GetScteFilter() const { return m_scteFilter; }
  inline bool ScteFilterHasBeenSet() const { return m_scteFilterHasBeenSet; }
  template <typename ScteFilterT = Aws::Vector<ScteFilter>>
  void SetScteFilter(ScteFilterT&& value) {
    m_scteFilterHasBeenSet = true;
    m_scteFilter = std::forward<ScteFilterT>(value);
  }
  template <typename ScteFilterT = Aws::Vector<ScteFilter>>
  Scte& WithScteFilter(ScteFilterT&& value) {
    SetScteFilter(std::forward<ScteFilterT>(value));
    return *this;
  }
  inline Scte& AddScteFilter(ScteFilter value) {
    m_scteFilterHasBeenSet = true;
    m_scteFilter.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls whether SCTE-35 messages are included in segment files.</p> <ul>
   * <li> <p>None – SCTE-35 messages are not included in segments (default)</p> </li>
   * <li> <p>All – SCTE-35 messages are embedded in segment data</p> </li> <li>
   * <p>MatchesFilter – SCTE-35 messages which match the ScteFilter are embedded in
   * segment data</p> </li> </ul> <p> For DASH manifests, when set to
   * <code>All</code> or <code>MatchesFilter</code>, an
   * <code>InbandEventStream</code> tag signals that SCTE messages are present in
   * segments. This setting works independently of manifest ad markers.</p>
   */
  inline ScteInSegments GetScteInSegments() const { return m_scteInSegments; }
  inline bool ScteInSegmentsHasBeenSet() const { return m_scteInSegmentsHasBeenSet; }
  inline void SetScteInSegments(ScteInSegments value) {
    m_scteInSegmentsHasBeenSet = true;
    m_scteInSegments = value;
  }
  inline Scte& WithScteInSegments(ScteInSegments value) {
    SetScteInSegments(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of additional non-Ad SCTE-35 event types to treat as advertisements.
   * When configured, events matching these types produce ad markers (such as
   * <code>SCTE35-OUT</code> and <code>SCTE35-IN</code> in HLS DATERANGE tags) in
   * manifests.</p> <p>Valid values: <code>PROGRAM</code> | <code>CHAPTER</code> |
   * <code>UNSCHEDULED_EVENT</code> | <code>ALTERNATE_CONTENT_OPPORTUNITY</code> |
   * <code>NETWORK</code> </p> <p>If you don't specify any values, the default is
   * empty (only default ad types are used).</p>
   */
  inline const Aws::Vector<CustomAdType>& GetCustomAdTypes() const { return m_customAdTypes; }
  inline bool CustomAdTypesHasBeenSet() const { return m_customAdTypesHasBeenSet; }
  template <typename CustomAdTypesT = Aws::Vector<CustomAdType>>
  void SetCustomAdTypes(CustomAdTypesT&& value) {
    m_customAdTypesHasBeenSet = true;
    m_customAdTypes = std::forward<CustomAdTypesT>(value);
  }
  template <typename CustomAdTypesT = Aws::Vector<CustomAdType>>
  Scte& WithCustomAdTypes(CustomAdTypesT&& value) {
    SetCustomAdTypes(std::forward<CustomAdTypesT>(value));
    return *this;
  }
  inline Scte& AddCustomAdTypes(CustomAdType value) {
    m_customAdTypesHasBeenSet = true;
    m_customAdTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ScteFilter> m_scteFilter;

  ScteInSegments m_scteInSegments{ScteInSegments::NOT_SET};

  Aws::Vector<CustomAdType> m_customAdTypes;
  bool m_scteFilterHasBeenSet = false;
  bool m_scteInSegmentsHasBeenSet = false;
  bool m_customAdTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
