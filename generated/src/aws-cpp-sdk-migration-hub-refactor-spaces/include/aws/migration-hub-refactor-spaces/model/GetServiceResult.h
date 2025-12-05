/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointConfig.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceEndpointType.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceState.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MigrationHubRefactorSpaces {
namespace Model {
class GetServiceResult {
 public:
  AWS_MIGRATIONHUBREFACTORSPACES_API GetServiceResult() = default;
  AWS_MIGRATIONHUBREFACTORSPACES_API GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MIGRATIONHUBREFACTORSPACES_API GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  GetServiceResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetServiceResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the service creator.</p>
   */
  inline const Aws::String& GetCreatedByAccountId() const { return m_createdByAccountId; }
  template <typename CreatedByAccountIdT = Aws::String>
  void SetCreatedByAccountId(CreatedByAccountIdT&& value) {
    m_createdByAccountIdHasBeenSet = true;
    m_createdByAccountId = std::forward<CreatedByAccountIdT>(value);
  }
  template <typename CreatedByAccountIdT = Aws::String>
  GetServiceResult& WithCreatedByAccountId(CreatedByAccountIdT&& value) {
    SetCreatedByAccountId(std::forward<CreatedByAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the service is created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  GetServiceResult& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the service. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetServiceResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint type of the service.</p>
   */
  inline ServiceEndpointType GetEndpointType() const { return m_endpointType; }
  inline void SetEndpointType(ServiceEndpointType value) {
    m_endpointTypeHasBeenSet = true;
    m_endpointType = value;
  }
  inline GetServiceResult& WithEndpointType(ServiceEndpointType value) {
    SetEndpointType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the environment.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetServiceResult& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any error associated with the service resource. </p>
   */
  inline const ErrorResponse& GetError() const { return m_error; }
  template <typename ErrorT = ErrorResponse>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorResponse>
  GetServiceResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the Lambda endpoint type.</p> <p>The <b>Arn</b> is the
   * Amazon Resource Name (ARN) of the Lambda function associated with this service.
   * </p>
   */
  inline const LambdaEndpointConfig& GetLambdaEndpoint() const { return m_lambdaEndpoint; }
  template <typename LambdaEndpointT = LambdaEndpointConfig>
  void SetLambdaEndpoint(LambdaEndpointT&& value) {
    m_lambdaEndpointHasBeenSet = true;
    m_lambdaEndpoint = std::forward<LambdaEndpointT>(value);
  }
  template <typename LambdaEndpointT = LambdaEndpointConfig>
  GetServiceResult& WithLambdaEndpoint(LambdaEndpointT&& value) {
    SetLambdaEndpoint(std::forward<LambdaEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the service was last updated. </p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  GetServiceResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetServiceResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the service owner.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  GetServiceResult& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the service.</p>
   */
  inline const Aws::String& GetServiceId() const { return m_serviceId; }
  template <typename ServiceIdT = Aws::String>
  void SetServiceId(ServiceIdT&& value) {
    m_serviceIdHasBeenSet = true;
    m_serviceId = std::forward<ServiceIdT>(value);
  }
  template <typename ServiceIdT = Aws::String>
  GetServiceResult& WithServiceId(ServiceIdT&& value) {
    SetServiceId(std::forward<ServiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the service. </p>
   */
  inline ServiceState GetState() const { return m_state; }
  inline void SetState(ServiceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetServiceResult& WithState(ServiceState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the service. A tag is a label that you assign to an
   * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetServiceResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetServiceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the URL endpoint type.</p> <p>The <b>Url</b> isthe URL
   * of the endpoint type.</p> <p>The <b>HealthUrl</b> is the health check URL of the
   * endpoint type. </p>
   */
  inline const UrlEndpointConfig& GetUrlEndpoint() const { return m_urlEndpoint; }
  template <typename UrlEndpointT = UrlEndpointConfig>
  void SetUrlEndpoint(UrlEndpointT&& value) {
    m_urlEndpointHasBeenSet = true;
    m_urlEndpoint = std::forward<UrlEndpointT>(value);
  }
  template <typename UrlEndpointT = UrlEndpointConfig>
  GetServiceResult& WithUrlEndpoint(UrlEndpointT&& value) {
    SetUrlEndpoint(std::forward<UrlEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the virtual private cloud (VPC). </p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  GetServiceResult& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
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
  GetServiceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_arn;

  Aws::String m_createdByAccountId;

  Aws::Utils::DateTime m_createdTime{};

  Aws::String m_description;

  ServiceEndpointType m_endpointType{ServiceEndpointType::NOT_SET};

  Aws::String m_environmentId;

  ErrorResponse m_error;

  LambdaEndpointConfig m_lambdaEndpoint;

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_name;

  Aws::String m_ownerAccountId;

  Aws::String m_serviceId;

  ServiceState m_state{ServiceState::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  UrlEndpointConfig m_urlEndpoint;

  Aws::String m_vpcId;

  Aws::String m_requestId;
  bool m_applicationIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_createdByAccountIdHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_endpointTypeHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_lambdaEndpointHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_serviceIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_urlEndpointHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
