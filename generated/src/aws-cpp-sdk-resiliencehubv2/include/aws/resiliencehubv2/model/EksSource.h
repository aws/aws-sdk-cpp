/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EksLabelSelector.h>

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
 * <p>Defines an Amazon EKS cluster and its namespaces as an input source for
 * resource discovery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/EksSource">AWS
 * API Reference</a></p>
 */
class EksSource {
 public:
  AWS_RESILIENCEHUBV2_API EksSource() = default;
  AWS_RESILIENCEHUBV2_API EksSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API EksSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  EksSource& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Kubernetes namespaces within the EKS cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
  inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  void SetNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces = std::forward<NamespacesT>(value);
  }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  EksSource& WithNamespaces(NamespacesT&& value) {
    SetNamespaces(std::forward<NamespacesT>(value));
    return *this;
  }
  template <typename NamespacesT = Aws::String>
  EksSource& AddNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces.emplace_back(std::forward<NamespacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters discovery to the Kubernetes objects whose labels match the selector.
   * When omitted, all supported objects in the specified namespaces are
   * discovered.</p>
   */
  inline const EksLabelSelector& GetLabelSelector() const { return m_labelSelector; }
  inline bool LabelSelectorHasBeenSet() const { return m_labelSelectorHasBeenSet; }
  template <typename LabelSelectorT = EksLabelSelector>
  void SetLabelSelector(LabelSelectorT&& value) {
    m_labelSelectorHasBeenSet = true;
    m_labelSelector = std::forward<LabelSelectorT>(value);
  }
  template <typename LabelSelectorT = EksLabelSelector>
  EksSource& WithLabelSelector(LabelSelectorT&& value) {
    SetLabelSelector(std::forward<LabelSelectorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::Vector<Aws::String> m_namespaces;

  EksLabelSelector m_labelSelector;
  bool m_clusterArnHasBeenSet = false;
  bool m_namespacesHasBeenSet = false;
  bool m_labelSelectorHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
