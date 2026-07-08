/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CloudConnectorConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {
class GetCloudConnectorResult {
 public:
  AWS_SSM_API GetCloudConnectorResult() = default;
  AWS_SSM_API GetCloudConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SSM_API GetCloudConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the cloud connector.</p>
   */
  inline const Aws::String& GetCloudConnectorArn() const { return m_cloudConnectorArn; }
  template <typename CloudConnectorArnT = Aws::String>
  void SetCloudConnectorArn(CloudConnectorArnT&& value) {
    m_cloudConnectorArnHasBeenSet = true;
    m_cloudConnectorArn = std::forward<CloudConnectorArnT>(value);
  }
  template <typename CloudConnectorArnT = Aws::String>
  GetCloudConnectorResult& WithCloudConnectorArn(CloudConnectorArnT&& value) {
    SetCloudConnectorArn(std::forward<CloudConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The friendly name of the cloud connector.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GetCloudConnectorResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the cloud connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetCloudConnectorResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role used by the cloud connector.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetCloudConnectorResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details for the third-party cloud environment
   * connection.</p>
   */
  inline const CloudConnectorConfiguration& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = CloudConnectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CloudConnectorConfiguration>
  GetCloudConnectorResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Config connector associated with this
   * cloud connector.</p>
   */
  inline const Aws::String& GetConfigConnectorArn() const { return m_configConnectorArn; }
  template <typename ConfigConnectorArnT = Aws::String>
  void SetConfigConnectorArn(ConfigConnectorArnT&& value) {
    m_configConnectorArnHasBeenSet = true;
    m_configConnectorArn = std::forward<ConfigConnectorArnT>(value);
  }
  template <typename ConfigConnectorArnT = Aws::String>
  GetCloudConnectorResult& WithConfigConnectorArn(ConfigConnectorArnT&& value) {
    SetConfigConnectorArn(std::forward<ConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the cloud connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetCloudConnectorResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the cloud connector was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetCloudConnectorResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  GetCloudConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_cloudConnectorArn;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::String m_roleArn;

  CloudConnectorConfiguration m_configuration;

  Aws::String m_configConnectorArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_cloudConnectorArnHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_configConnectorArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
