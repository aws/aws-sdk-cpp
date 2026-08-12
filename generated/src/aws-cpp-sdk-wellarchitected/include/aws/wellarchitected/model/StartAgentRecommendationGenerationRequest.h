/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/RecommendationType.h>
#include <aws/wellarchitected/model/Scope.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class StartAgentRecommendationGenerationRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API StartAgentRecommendationGenerationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartAgentRecommendationGeneration"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the optimization profile to use for
   * generating recommendations.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  StartAgentRecommendationGenerationRequest& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of recommendations to generate.</p>
   */
  inline const Aws::Vector<RecommendationType>& GetTypes() const { return m_types; }
  inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
  template <typename TypesT = Aws::Vector<RecommendationType>>
  void SetTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types = std::forward<TypesT>(value);
  }
  template <typename TypesT = Aws::Vector<RecommendationType>>
  StartAgentRecommendationGenerationRequest& WithTypes(TypesT&& value) {
    SetTypes(std::forward<TypesT>(value));
    return *this;
  }
  inline StartAgentRecommendationGenerationRequest& AddTypes(RecommendationType value) {
    m_typesHasBeenSet = true;
    m_types.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional name for this generation process to help identify it in lists and
   * logs.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartAgentRecommendationGenerationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional additional context to guide the recommendation generation, such as
   * specific business requirements or constraints.</p>
   */
  inline Aws::Utils::DocumentView GetAdditionalContext() const { return m_additionalContext; }
  inline bool AdditionalContextHasBeenSet() const { return m_additionalContextHasBeenSet; }
  template <typename AdditionalContextT = Aws::Utils::Document>
  void SetAdditionalContext(AdditionalContextT&& value) {
    m_additionalContextHasBeenSet = true;
    m_additionalContext = std::forward<AdditionalContextT>(value);
  }
  template <typename AdditionalContextT = Aws::Utils::Document>
  StartAgentRecommendationGenerationRequest& WithAdditionalContext(AdditionalContextT&& value) {
    SetAdditionalContext(std::forward<AdditionalContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scope configuration to focus the generation on specific pillars or goals.</p>
   */
  inline const Scope& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = Scope>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = Scope>
  StartAgentRecommendationGenerationRequest& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileArn;

  Aws::Vector<RecommendationType> m_types;

  Aws::String m_name;

  Aws::Utils::Document m_additionalContext;

  Scope m_scope;
  bool m_profileArnHasBeenSet = false;
  bool m_typesHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_additionalContextHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
