/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceEndpointType.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointSummary.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>A summary for the service as a response to <code>ListServices</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ServiceSummary">AWS
   * API Reference</a></p>
   */
  class ServiceSummary
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ServiceSummary();
    AWS_MIGRATIONHUBREFACTORSPACES_API ServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the application. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ServiceSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ServiceSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ServiceSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }
    inline bool CreatedByAccountIdHasBeenSet() const { return m_createdByAccountIdHasBeenSet; }
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = value; }
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = std::move(value); }
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId.assign(value); }
    inline ServiceSummary& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}
    inline ServiceSummary& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}
    inline ServiceSummary& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the service is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ServiceSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ServiceSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the service. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint type of the service. </p>
     */
    inline const ServiceEndpointType& GetEndpointType() const{ return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(const ServiceEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline void SetEndpointType(ServiceEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }
    inline ServiceSummary& WithEndpointType(const ServiceEndpointType& value) { SetEndpointType(value); return *this;}
    inline ServiceSummary& WithEndpointType(ServiceEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline ServiceSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline ServiceSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline ServiceSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorResponse& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorResponse&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ServiceSummary& WithError(const ErrorResponse& value) { SetError(value); return *this;}
    inline ServiceSummary& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the configuration for the Lambda endpoint type. </p>
     */
    inline const LambdaEndpointSummary& GetLambdaEndpoint() const{ return m_lambdaEndpoint; }
    inline bool LambdaEndpointHasBeenSet() const { return m_lambdaEndpointHasBeenSet; }
    inline void SetLambdaEndpoint(const LambdaEndpointSummary& value) { m_lambdaEndpointHasBeenSet = true; m_lambdaEndpoint = value; }
    inline void SetLambdaEndpoint(LambdaEndpointSummary&& value) { m_lambdaEndpointHasBeenSet = true; m_lambdaEndpoint = std::move(value); }
    inline ServiceSummary& WithLambdaEndpoint(const LambdaEndpointSummary& value) { SetLambdaEndpoint(value); return *this;}
    inline ServiceSummary& WithLambdaEndpoint(LambdaEndpointSummary&& value) { SetLambdaEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ServiceSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ServiceSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline ServiceSummary& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline ServiceSummary& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline ServiceSummary& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the service. </p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline ServiceSummary& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline ServiceSummary& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline ServiceSummary& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the service. </p>
     */
    inline const ServiceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ServiceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ServiceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ServiceSummary& WithState(const ServiceState& value) { SetState(value); return *this;}
    inline ServiceSummary& WithState(ServiceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the service. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ServiceSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ServiceSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ServiceSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ServiceSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ServiceSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ServiceSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ServiceSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ServiceSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ServiceSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The summary of the configuration for the URL endpoint type. </p>
     */
    inline const UrlEndpointSummary& GetUrlEndpoint() const{ return m_urlEndpoint; }
    inline bool UrlEndpointHasBeenSet() const { return m_urlEndpointHasBeenSet; }
    inline void SetUrlEndpoint(const UrlEndpointSummary& value) { m_urlEndpointHasBeenSet = true; m_urlEndpoint = value; }
    inline void SetUrlEndpoint(UrlEndpointSummary&& value) { m_urlEndpointHasBeenSet = true; m_urlEndpoint = std::move(value); }
    inline ServiceSummary& WithUrlEndpoint(const UrlEndpointSummary& value) { SetUrlEndpoint(value); return *this;}
    inline ServiceSummary& WithUrlEndpoint(UrlEndpointSummary&& value) { SetUrlEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ServiceSummary& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ServiceSummary& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ServiceSummary& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdByAccountId;
    bool m_createdByAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceEndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    ErrorResponse m_error;
    bool m_errorHasBeenSet = false;

    LambdaEndpointSummary m_lambdaEndpoint;
    bool m_lambdaEndpointHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    ServiceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    UrlEndpointSummary m_urlEndpoint;
    bool m_urlEndpointHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
