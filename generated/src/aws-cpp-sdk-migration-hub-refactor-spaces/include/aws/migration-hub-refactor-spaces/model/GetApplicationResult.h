/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxyConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/ProxyType.h>
#include <aws/migration-hub-refactor-spaces/model/ApplicationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class GetApplicationResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API GetApplicationResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline const ApiGatewayProxyConfig& GetApiGatewayProxy() const{ return m_apiGatewayProxy; }
    inline void SetApiGatewayProxy(const ApiGatewayProxyConfig& value) { m_apiGatewayProxy = value; }
    inline void SetApiGatewayProxy(ApiGatewayProxyConfig&& value) { m_apiGatewayProxy = std::move(value); }
    inline GetApplicationResult& WithApiGatewayProxy(const ApiGatewayProxyConfig& value) { SetApiGatewayProxy(value); return *this;}
    inline GetApplicationResult& WithApiGatewayProxy(ApiGatewayProxyConfig&& value) { SetApiGatewayProxy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the application creator. </p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountId = value; }
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountId = std::move(value); }
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountId.assign(value); }
    inline GetApplicationResult& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}
    inline GetApplicationResult& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}
    inline GetApplicationResult& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the application is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline GetApplicationResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline GetApplicationResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetApplicationResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetApplicationResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetApplicationResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any error associated with the application resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }
    inline void SetError(const ErrorResponse& value) { m_error = value; }
    inline void SetError(ErrorResponse&& value) { m_error = std::move(value); }
    inline GetApplicationResult& WithError(const ErrorResponse& value) { SetError(value); return *this;}
    inline GetApplicationResult& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline GetApplicationResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline GetApplicationResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }
    inline GetApplicationResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline GetApplicationResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline GetApplicationResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline const ProxyType& GetProxyType() const{ return m_proxyType; }
    inline void SetProxyType(const ProxyType& value) { m_proxyType = value; }
    inline void SetProxyType(ProxyType&& value) { m_proxyType = std::move(value); }
    inline GetApplicationResult& WithProxyType(const ProxyType& value) { SetProxyType(value); return *this;}
    inline GetApplicationResult& WithProxyType(ProxyType&& value) { SetProxyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the application. </p>
     */
    inline const ApplicationState& GetState() const{ return m_state; }
    inline void SetState(const ApplicationState& value) { m_state = value; }
    inline void SetState(ApplicationState&& value) { m_state = std::move(value); }
    inline GetApplicationResult& WithState(const ApplicationState& value) { SetState(value); return *this;}
    inline GetApplicationResult& WithState(ApplicationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline GetApplicationResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline GetApplicationResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline GetApplicationResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApiGatewayProxyConfig m_apiGatewayProxy;

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::String m_createdByAccountId;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_environmentId;

    ErrorResponse m_error;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    Aws::String m_ownerAccountId;

    ProxyType m_proxyType;

    ApplicationState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_vpcId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
