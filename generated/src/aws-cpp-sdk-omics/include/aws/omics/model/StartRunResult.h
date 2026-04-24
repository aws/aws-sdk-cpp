/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ConfigurationDetails.h>
#include <aws/omics/model/RunStatus.h>

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
class StartRunResult {
 public:
  AWS_OMICS_API StartRunResult() = default;
  AWS_OMICS_API StartRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OMICS_API StartRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique resource identifier for the run.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StartRunResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  StartRunResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's status.</p>
   */
  inline RunStatus GetStatus() const { return m_status; }
  inline void SetStatus(RunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartRunResult& WithStatus(RunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run's tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartRunResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartRunResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The universally unique identifier for a run.</p>
   */
  inline const Aws::String& GetUuid() const { return m_uuid; }
  template <typename UuidT = Aws::String>
  void SetUuid(UuidT&& value) {
    m_uuidHasBeenSet = true;
    m_uuid = std::forward<UuidT>(value);
  }
  template <typename UuidT = Aws::String>
  StartRunResult& WithUuid(UuidT&& value) {
    SetUuid(std::forward<UuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for workflow outputs.</p>
   */
  inline const Aws::String& GetRunOutputUri() const { return m_runOutputUri; }
  template <typename RunOutputUriT = Aws::String>
  void SetRunOutputUri(RunOutputUriT&& value) {
    m_runOutputUriHasBeenSet = true;
    m_runOutputUri = std::forward<RunOutputUriT>(value);
  }
  template <typename RunOutputUriT = Aws::String>
  StartRunResult& WithRunOutputUri(RunOutputUriT&& value) {
    SetRunOutputUri(std::forward<RunOutputUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration details for the workflow run.</p>
   */
  inline const ConfigurationDetails& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = ConfigurationDetails>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = ConfigurationDetails>
  StartRunResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Networking mode for the workflow run.</p>
   */
  inline const Aws::String& GetNetworkingMode() const { return m_networkingMode; }
  template <typename NetworkingModeT = Aws::String>
  void SetNetworkingMode(NetworkingModeT&& value) {
    m_networkingModeHasBeenSet = true;
    m_networkingMode = std::forward<NetworkingModeT>(value);
  }
  template <typename NetworkingModeT = Aws::String>
  StartRunResult& WithNetworkingMode(NetworkingModeT&& value) {
    SetNetworkingMode(std::forward<NetworkingModeT>(value));
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
  StartRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_id;

  RunStatus m_status{RunStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_uuid;

  Aws::String m_runOutputUri;

  ConfigurationDetails m_configuration;

  Aws::String m_networkingMode;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_uuidHasBeenSet = false;
  bool m_runOutputUriHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_networkingModeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
