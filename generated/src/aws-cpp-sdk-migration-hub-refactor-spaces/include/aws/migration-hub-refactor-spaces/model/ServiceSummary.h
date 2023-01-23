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


    /**
     * <p>The unique identifier of the application. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline ServiceSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline ServiceSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline ServiceSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline ServiceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline ServiceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service. </p>
     */
    inline ServiceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline bool CreatedByAccountIdHasBeenSet() const { return m_createdByAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline ServiceSummary& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline ServiceSummary& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service creator. </p>
     */
    inline ServiceSummary& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the service is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that indicates when the service is created. </p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the service is created. </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>A timestamp that indicates when the service is created. </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the service is created. </p>
     */
    inline ServiceSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the service is created. </p>
     */
    inline ServiceSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>A description of the service. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the service. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the service. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the service. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the service. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the service. </p>
     */
    inline ServiceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the service. </p>
     */
    inline ServiceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the service. </p>
     */
    inline ServiceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The endpoint type of the service. </p>
     */
    inline const ServiceEndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The endpoint type of the service. </p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The endpoint type of the service. </p>
     */
    inline void SetEndpointType(const ServiceEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The endpoint type of the service. </p>
     */
    inline void SetEndpointType(ServiceEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The endpoint type of the service. </p>
     */
    inline ServiceSummary& WithEndpointType(const ServiceEndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The endpoint type of the service. </p>
     */
    inline ServiceSummary& WithEndpointType(ServiceEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline ServiceSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline ServiceSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline ServiceSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline void SetError(const ErrorResponse& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline void SetError(ErrorResponse&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline ServiceSummary& WithError(const ErrorResponse& value) { SetError(value); return *this;}

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline ServiceSummary& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>A summary of the configuration for the Lambda endpoint type. </p>
     */
    inline const LambdaEndpointSummary& GetLambdaEndpoint() const{ return m_lambdaEndpoint; }

    /**
     * <p>A summary of the configuration for the Lambda endpoint type. </p>
     */
    inline bool LambdaEndpointHasBeenSet() const { return m_lambdaEndpointHasBeenSet; }

    /**
     * <p>A summary of the configuration for the Lambda endpoint type. </p>
     */
    inline void SetLambdaEndpoint(const LambdaEndpointSummary& value) { m_lambdaEndpointHasBeenSet = true; m_lambdaEndpoint = value; }

    /**
     * <p>A summary of the configuration for the Lambda endpoint type. </p>
     */
    inline void SetLambdaEndpoint(LambdaEndpointSummary&& value) { m_lambdaEndpointHasBeenSet = true; m_lambdaEndpoint = std::move(value); }

    /**
     * <p>A summary of the configuration for the Lambda endpoint type. </p>
     */
    inline ServiceSummary& WithLambdaEndpoint(const LambdaEndpointSummary& value) { SetLambdaEndpoint(value); return *this;}

    /**
     * <p>A summary of the configuration for the Lambda endpoint type. </p>
     */
    inline ServiceSummary& WithLambdaEndpoint(LambdaEndpointSummary&& value) { SetLambdaEndpoint(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline ServiceSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline ServiceSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the service. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service. </p>
     */
    inline ServiceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service. </p>
     */
    inline ServiceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service. </p>
     */
    inline ServiceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline ServiceSummary& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline ServiceSummary& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline ServiceSummary& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The unique identifier of the service. </p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline ServiceSummary& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline ServiceSummary& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline ServiceSummary& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The current state of the service. </p>
     */
    inline const ServiceState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the service. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the service. </p>
     */
    inline void SetState(const ServiceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the service. </p>
     */
    inline void SetState(ServiceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the service. </p>
     */
    inline ServiceSummary& WithState(const ServiceState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the service. </p>
     */
    inline ServiceSummary& WithState(ServiceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the service. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the service. </p>
     */
    inline ServiceSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The summary of the configuration for the URL endpoint type. </p>
     */
    inline const UrlEndpointSummary& GetUrlEndpoint() const{ return m_urlEndpoint; }

    /**
     * <p>The summary of the configuration for the URL endpoint type. </p>
     */
    inline bool UrlEndpointHasBeenSet() const { return m_urlEndpointHasBeenSet; }

    /**
     * <p>The summary of the configuration for the URL endpoint type. </p>
     */
    inline void SetUrlEndpoint(const UrlEndpointSummary& value) { m_urlEndpointHasBeenSet = true; m_urlEndpoint = value; }

    /**
     * <p>The summary of the configuration for the URL endpoint type. </p>
     */
    inline void SetUrlEndpoint(UrlEndpointSummary&& value) { m_urlEndpointHasBeenSet = true; m_urlEndpoint = std::move(value); }

    /**
     * <p>The summary of the configuration for the URL endpoint type. </p>
     */
    inline ServiceSummary& WithUrlEndpoint(const UrlEndpointSummary& value) { SetUrlEndpoint(value); return *this;}

    /**
     * <p>The summary of the configuration for the URL endpoint type. </p>
     */
    inline ServiceSummary& WithUrlEndpoint(UrlEndpointSummary&& value) { SetUrlEndpoint(std::move(value)); return *this;}


    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline ServiceSummary& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline ServiceSummary& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline ServiceSummary& WithVpcId(const char* value) { SetVpcId(value); return *this;}

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
