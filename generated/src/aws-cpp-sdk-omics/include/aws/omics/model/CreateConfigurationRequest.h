/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/RunConfigurations.h>

#include <utility>

namespace Aws {
namespace Omics {
namespace Model {

/**
 */
class CreateConfigurationRequest : public OmicsRequest {
 public:
  AWS_OMICS_API CreateConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguration"; }

  AWS_OMICS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>User-friendly name for the configuration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateConfigurationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional description for the configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateConfigurationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Required run-specific configurations.</p>
   */
  inline const RunConfigurations& GetRunConfigurations() const { return m_runConfigurations; }
  inline bool RunConfigurationsHasBeenSet() const { return m_runConfigurationsHasBeenSet; }
  template <typename RunConfigurationsT = RunConfigurations>
  void SetRunConfigurations(RunConfigurationsT&& value) {
    m_runConfigurationsHasBeenSet = true;
    m_runConfigurations = std::forward<RunConfigurationsT>(value);
  }
  template <typename RunConfigurationsT = RunConfigurations>
  CreateConfigurationRequest& WithRunConfigurations(RunConfigurationsT&& value) {
    SetRunConfigurations(std::forward<RunConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional tags for the configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional request idempotency token. If not specified, a universally unique
   * identifier (UUID) will be automatically generated for the request.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateConfigurationRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  RunConfigurations m_runConfigurations;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_runConfigurationsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = true;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
