/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AssociationInfo.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p> The metadata that tracks relationships between ML artifacts, actions, and
 * contexts. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LineageMetadata">AWS
 * API Reference</a></p>
 */
class LineageMetadata {
 public:
  AWS_SAGEMAKER_API LineageMetadata() = default;
  AWS_SAGEMAKER_API LineageMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API LineageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the lineage metadata action. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetActionArns() const { return m_actionArns; }
  inline bool ActionArnsHasBeenSet() const { return m_actionArnsHasBeenSet; }
  template <typename ActionArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetActionArns(ActionArnsT&& value) {
    m_actionArnsHasBeenSet = true;
    m_actionArns = std::forward<ActionArnsT>(value);
  }
  template <typename ActionArnsT = Aws::Map<Aws::String, Aws::String>>
  LineageMetadata& WithActionArns(ActionArnsT&& value) {
    SetActionArns(std::forward<ActionArnsT>(value));
    return *this;
  }
  template <typename ActionArnsKeyT = Aws::String, typename ActionArnsValueT = Aws::String>
  LineageMetadata& AddActionArns(ActionArnsKeyT&& key, ActionArnsValueT&& value) {
    m_actionArnsHasBeenSet = true;
    m_actionArns.emplace(std::forward<ActionArnsKeyT>(key), std::forward<ActionArnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the lineage metadata artifact. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetArtifactArns() const { return m_artifactArns; }
  inline bool ArtifactArnsHasBeenSet() const { return m_artifactArnsHasBeenSet; }
  template <typename ArtifactArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetArtifactArns(ArtifactArnsT&& value) {
    m_artifactArnsHasBeenSet = true;
    m_artifactArns = std::forward<ArtifactArnsT>(value);
  }
  template <typename ArtifactArnsT = Aws::Map<Aws::String, Aws::String>>
  LineageMetadata& WithArtifactArns(ArtifactArnsT&& value) {
    SetArtifactArns(std::forward<ArtifactArnsT>(value));
    return *this;
  }
  template <typename ArtifactArnsKeyT = Aws::String, typename ArtifactArnsValueT = Aws::String>
  LineageMetadata& AddArtifactArns(ArtifactArnsKeyT&& key, ArtifactArnsValueT&& value) {
    m_artifactArnsHasBeenSet = true;
    m_artifactArns.emplace(std::forward<ArtifactArnsKeyT>(key), std::forward<ArtifactArnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the lineage metadata context. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetContextArns() const { return m_contextArns; }
  inline bool ContextArnsHasBeenSet() const { return m_contextArnsHasBeenSet; }
  template <typename ContextArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetContextArns(ContextArnsT&& value) {
    m_contextArnsHasBeenSet = true;
    m_contextArns = std::forward<ContextArnsT>(value);
  }
  template <typename ContextArnsT = Aws::Map<Aws::String, Aws::String>>
  LineageMetadata& WithContextArns(ContextArnsT&& value) {
    SetContextArns(std::forward<ContextArnsT>(value));
    return *this;
  }
  template <typename ContextArnsKeyT = Aws::String, typename ContextArnsValueT = Aws::String>
  LineageMetadata& AddContextArns(ContextArnsKeyT&& key, ContextArnsValueT&& value) {
    m_contextArnsHasBeenSet = true;
    m_contextArns.emplace(std::forward<ContextArnsKeyT>(key), std::forward<ContextArnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The lineage metadata associations. </p>
   */
  inline const Aws::Vector<AssociationInfo>& GetAssociations() const { return m_associations; }
  inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
  template <typename AssociationsT = Aws::Vector<AssociationInfo>>
  void SetAssociations(AssociationsT&& value) {
    m_associationsHasBeenSet = true;
    m_associations = std::forward<AssociationsT>(value);
  }
  template <typename AssociationsT = Aws::Vector<AssociationInfo>>
  LineageMetadata& WithAssociations(AssociationsT&& value) {
    SetAssociations(std::forward<AssociationsT>(value));
    return *this;
  }
  template <typename AssociationsT = AssociationInfo>
  LineageMetadata& AddAssociations(AssociationsT&& value) {
    m_associationsHasBeenSet = true;
    m_associations.emplace_back(std::forward<AssociationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_actionArns;

  Aws::Map<Aws::String, Aws::String> m_artifactArns;

  Aws::Map<Aws::String, Aws::String> m_contextArns;

  Aws::Vector<AssociationInfo> m_associations;
  bool m_actionArnsHasBeenSet = false;
  bool m_artifactArnsHasBeenSet = false;
  bool m_contextArnsHasBeenSet = false;
  bool m_associationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
