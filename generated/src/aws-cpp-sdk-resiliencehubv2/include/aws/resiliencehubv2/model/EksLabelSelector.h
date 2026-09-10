/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EksLabelSelectorRequirement.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>A label selector that filters the Kubernetes objects discovered from an
 * Amazon EKS input source. An object must satisfy both matchLabels and
 * matchExpressions to match the selector. A selector with neither matches every
 * object. The selector must render to 2,048 characters or fewer in Kubernetes
 * label selector syntax.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/EksLabelSelector">AWS
 * API Reference</a></p>
 */
class EksLabelSelector {
 public:
  AWS_RESILIENCEHUBV2_API EksLabelSelector() = default;
  AWS_RESILIENCEHUBV2_API EksLabelSelector(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API EksLabelSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The label key-value pairs that an object must have. All pairs must match for
   * the object to be selected.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMatchLabels() const { return m_matchLabels; }
  inline bool MatchLabelsHasBeenSet() const { return m_matchLabelsHasBeenSet; }
  template <typename MatchLabelsT = Aws::Map<Aws::String, Aws::String>>
  void SetMatchLabels(MatchLabelsT&& value) {
    m_matchLabelsHasBeenSet = true;
    m_matchLabels = std::forward<MatchLabelsT>(value);
  }
  template <typename MatchLabelsT = Aws::Map<Aws::String, Aws::String>>
  EksLabelSelector& WithMatchLabels(MatchLabelsT&& value) {
    SetMatchLabels(std::forward<MatchLabelsT>(value));
    return *this;
  }
  template <typename MatchLabelsKeyT = Aws::String, typename MatchLabelsValueT = Aws::String>
  EksLabelSelector& AddMatchLabels(MatchLabelsKeyT&& key, MatchLabelsValueT&& value) {
    m_matchLabelsHasBeenSet = true;
    m_matchLabels.emplace(std::forward<MatchLabelsKeyT>(key), std::forward<MatchLabelsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The label requirements that an object must satisfy. All requirements in the
   * list must match for the object to be selected.</p>
   */
  inline const Aws::Vector<EksLabelSelectorRequirement>& GetMatchExpressions() const { return m_matchExpressions; }
  inline bool MatchExpressionsHasBeenSet() const { return m_matchExpressionsHasBeenSet; }
  template <typename MatchExpressionsT = Aws::Vector<EksLabelSelectorRequirement>>
  void SetMatchExpressions(MatchExpressionsT&& value) {
    m_matchExpressionsHasBeenSet = true;
    m_matchExpressions = std::forward<MatchExpressionsT>(value);
  }
  template <typename MatchExpressionsT = Aws::Vector<EksLabelSelectorRequirement>>
  EksLabelSelector& WithMatchExpressions(MatchExpressionsT&& value) {
    SetMatchExpressions(std::forward<MatchExpressionsT>(value));
    return *this;
  }
  template <typename MatchExpressionsT = EksLabelSelectorRequirement>
  EksLabelSelector& AddMatchExpressions(MatchExpressionsT&& value) {
    m_matchExpressionsHasBeenSet = true;
    m_matchExpressions.emplace_back(std::forward<MatchExpressionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_matchLabels;

  Aws::Vector<EksLabelSelectorRequirement> m_matchExpressions;
  bool m_matchLabelsHasBeenSet = false;
  bool m_matchExpressionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
