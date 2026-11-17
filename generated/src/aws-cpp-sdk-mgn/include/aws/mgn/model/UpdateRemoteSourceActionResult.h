/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {
class UpdateRemoteSourceActionResult {
 public:
  AWS_MGN_API UpdateRemoteSourceActionResult() = default;
  AWS_MGN_API UpdateRemoteSourceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MGN_API UpdateRemoteSourceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the source action.</p>
   */
  inline const Aws::String& GetRemoteSourceActionID() const { return m_remoteSourceActionID; }
  template <typename RemoteSourceActionIDT = Aws::String>
  void SetRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    m_remoteSourceActionIDHasBeenSet = true;
    m_remoteSourceActionID = std::forward<RemoteSourceActionIDT>(value);
  }
  template <typename RemoteSourceActionIDT = Aws::String>
  UpdateRemoteSourceActionResult& WithRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    SetRemoteSourceActionID(std::forward<RemoteSourceActionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source action.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateRemoteSourceActionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the source action.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRemoteSourceActionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the source action.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateRemoteSourceActionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS Systems Manager Parameter Store parameter name.</p>
   */
  inline const Aws::String& GetSsmParameterName() const { return m_ssmParameterName; }
  template <typename SsmParameterNameT = Aws::String>
  void SetSsmParameterName(SsmParameterNameT&& value) {
    m_ssmParameterNameHasBeenSet = true;
    m_ssmParameterName = std::forward<SsmParameterNameT>(value);
  }
  template <typename SsmParameterNameT = Aws::String>
  UpdateRemoteSourceActionResult& WithSsmParameterName(SsmParameterNameT&& value) {
    SetSsmParameterName(std::forward<SsmParameterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in seconds, that the script can run on each source
   * server.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline UpdateRemoteSourceActionResult& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating system of the source servers that the script runs on. Absent
   * when the script runs on both Linux and Windows.</p>
   */
  inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
  template <typename OperatingSystemT = Aws::String>
  void SetOperatingSystem(OperatingSystemT&& value) {
    m_operatingSystemHasBeenSet = true;
    m_operatingSystem = std::forward<OperatingSystemT>(value);
  }
  template <typename OperatingSystemT = Aws::String>
  UpdateRemoteSourceActionResult& WithOperatingSystem(OperatingSystemT&& value) {
    SetOperatingSystem(std::forward<OperatingSystemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags assigned to the source action.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  UpdateRemoteSourceActionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  UpdateRemoteSourceActionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  UpdateRemoteSourceActionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_remoteSourceActionID;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_ssmParameterName;

  int m_timeoutSeconds{0};

  Aws::String m_operatingSystem;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_remoteSourceActionIDHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ssmParameterNameHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_operatingSystemHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
