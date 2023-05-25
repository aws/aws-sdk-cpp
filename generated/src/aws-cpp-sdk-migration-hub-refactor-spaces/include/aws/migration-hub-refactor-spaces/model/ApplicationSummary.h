/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxySummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/ProxyType.h>
#include <aws/migration-hub-refactor-spaces/model/ApplicationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The list of <code>ApplicationSummary</code> objects. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ApplicationSummary();
    AWS_MIGRATIONHUBREFACTORSPACES_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint URL of the Amazon API Gateway proxy. </p>
     */
    inline const ApiGatewayProxySummary& GetApiGatewayProxy() const{ return m_apiGatewayProxy; }

    /**
     * <p>The endpoint URL of the Amazon API Gateway proxy. </p>
     */
    inline bool ApiGatewayProxyHasBeenSet() const { return m_apiGatewayProxyHasBeenSet; }

    /**
     * <p>The endpoint URL of the Amazon API Gateway proxy. </p>
     */
    inline void SetApiGatewayProxy(const ApiGatewayProxySummary& value) { m_apiGatewayProxyHasBeenSet = true; m_apiGatewayProxy = value; }

    /**
     * <p>The endpoint URL of the Amazon API Gateway proxy. </p>
     */
    inline void SetApiGatewayProxy(ApiGatewayProxySummary&& value) { m_apiGatewayProxyHasBeenSet = true; m_apiGatewayProxy = std::move(value); }

    /**
     * <p>The endpoint URL of the Amazon API Gateway proxy. </p>
     */
    inline ApplicationSummary& WithApiGatewayProxy(const ApiGatewayProxySummary& value) { SetApiGatewayProxy(value); return *this;}

    /**
     * <p>The endpoint URL of the Amazon API Gateway proxy. </p>
     */
    inline ApplicationSummary& WithApiGatewayProxy(ApiGatewayProxySummary&& value) { SetApiGatewayProxy(std::move(value)); return *this;}


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
    inline ApplicationSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline ApplicationSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline ApplicationSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline ApplicationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline ApplicationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. </p>
     */
    inline ApplicationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline bool CreatedByAccountIdHasBeenSet() const { return m_createdByAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline ApplicationSummary& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline ApplicationSummary& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline ApplicationSummary& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the application is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that indicates when the application is created. </p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the application is created. </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>A timestamp that indicates when the application is created. </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the application is created. </p>
     */
    inline ApplicationSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the application is created. </p>
     */
    inline ApplicationSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


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
    inline ApplicationSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline ApplicationSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline ApplicationSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Any error associated with the application resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }

    /**
     * <p>Any error associated with the application resource. </p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Any error associated with the application resource. </p>
     */
    inline void SetError(const ErrorResponse& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Any error associated with the application resource. </p>
     */
    inline void SetError(ErrorResponse&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Any error associated with the application resource. </p>
     */
    inline ApplicationSummary& WithError(const ErrorResponse& value) { SetError(value); return *this;}

    /**
     * <p>Any error associated with the application resource. </p>
     */
    inline ApplicationSummary& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline ApplicationSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline ApplicationSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the application. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application. </p>
     */
    inline ApplicationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application. </p>
     */
    inline ApplicationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application. </p>
     */
    inline ApplicationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline ApplicationSummary& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline ApplicationSummary& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline ApplicationSummary& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline const ProxyType& GetProxyType() const{ return m_proxyType; }

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline bool ProxyTypeHasBeenSet() const { return m_proxyTypeHasBeenSet; }

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline void SetProxyType(const ProxyType& value) { m_proxyTypeHasBeenSet = true; m_proxyType = value; }

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline void SetProxyType(ProxyType&& value) { m_proxyTypeHasBeenSet = true; m_proxyType = std::move(value); }

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline ApplicationSummary& WithProxyType(const ProxyType& value) { SetProxyType(value); return *this;}

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline ApplicationSummary& WithProxyType(ProxyType&& value) { SetProxyType(std::move(value)); return *this;}


    /**
     * <p>The current state of the application. </p>
     */
    inline const ApplicationState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the application. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the application. </p>
     */
    inline void SetState(const ApplicationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the application. </p>
     */
    inline void SetState(ApplicationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the application. </p>
     */
    inline ApplicationSummary& WithState(const ApplicationState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the application. </p>
     */
    inline ApplicationSummary& WithState(ApplicationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the application. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the application. </p>
     */
    inline ApplicationSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline ApplicationSummary& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline ApplicationSummary& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline ApplicationSummary& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    ApiGatewayProxySummary m_apiGatewayProxy;
    bool m_apiGatewayProxyHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdByAccountId;
    bool m_createdByAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    ErrorResponse m_error;
    bool m_errorHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    ProxyType m_proxyType;
    bool m_proxyTypeHasBeenSet = false;

    ApplicationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
