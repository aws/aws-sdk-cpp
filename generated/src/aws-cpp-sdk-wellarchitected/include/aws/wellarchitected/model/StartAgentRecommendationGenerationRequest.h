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

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

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
   * <p>The types of recommendations to generate. You can specify up to two types in
   * a single request. Currently, only <code>ARCHITECTURE</code> is supported for
   * this operation.</p>
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
   * <p>An optional name for this generation that identifies the architecture review
   * in the console and in <code>ListAgentRecommendationGenerations</code> results.
   * Applies to <code>ARCHITECTURE</code> type only. Must be absent for other
   * types.</p>
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
   * <p>The location of the infrastructure as code (IaC) template to review, and the
   * lenses to review it against. Required for the <code>ARCHITECTURE</code> type.
   * Must be absent for other types. Specify a JSON object with the following
   * members:</p> <ul> <li> <p> <code>s3Uri</code>: The Amazon S3 URI of the IaC
   * template, .zip archive, or folder to review.</p> </li> <li> <p>
   * <code>s3VersionId</code>: The version ID of the Amazon S3 object. If you omit
   * this member, the current version is used.</p> </li> <li> <p>
   * <code>lensArns</code>: The ARNs of the lenses to review against. Only
   * <code>arn:aws:wellarchitected::aws:lens/wellarchitected</code> is supported.</p>
   * </li> </ul>
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
   * <p>Defines which pillars, goals, and items the review covers. Required for the
   * <code>ARCHITECTURE</code> type. Must be absent for other types.</p>
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
