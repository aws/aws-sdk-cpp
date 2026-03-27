/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ConfigurationStatus.h>
#include <aws/omics/model/RunConfigurationsResponse.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {
class CreateConfigurationResult {
 public:
  AWS_OMICS_API CreateConfigurationResult() = default;
  AWS_OMICS_API CreateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OMICS_API CreateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique resource identifier for the configuration.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateConfigurationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier for the configuration.</p>
   */
  inline const Aws::String& GetUuid() const { return m_uuid; }
  template <typename UuidT = Aws::String>
  void SetUuid(UuidT&& value) {
    m_uuidHasBeenSet = true;
    m_uuid = std::forward<UuidT>(value);
  }
  template <typename UuidT = Aws::String>
  CreateConfigurationResult& WithUuid(UuidT&& value) {
    SetUuid(std::forward<UuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User-friendly name for the configuration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateConfigurationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description for the configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateConfigurationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Run-specific configurations.</p>
   */
  inline const RunConfigurationsResponse& GetRunConfigurations() const { return m_runConfigurations; }
  template <typename RunConfigurationsT = RunConfigurationsResponse>
  void SetRunConfigurations(RunConfigurationsT&& value) {
    m_runConfigurationsHasBeenSet = true;
    m_runConfigurations = std::forward<RunConfigurationsT>(value);
  }
  template <typename RunConfigurationsT = RunConfigurationsResponse>
  CreateConfigurationResult& WithRunConfigurations(RunConfigurationsT&& value) {
    SetRunConfigurations(std::forward<RunConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current configuration status.</p>
   */
  inline ConfigurationStatus GetStatus() const { return m_status; }
  inline void SetStatus(ConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateConfigurationResult& WithStatus(ConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration creation timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  CreateConfigurationResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags for the configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateConfigurationResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateConfigurationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_uuid;

  Aws::String m_name;

  Aws::String m_description;

  RunConfigurationsResponse m_runConfigurations;

  ConfigurationStatus m_status{ConfigurationStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_uuidHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_runConfigurationsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
