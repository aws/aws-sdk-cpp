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
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointConfig.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointConfig.h>
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
  class GetServiceResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API GetServiceResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetServiceResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetServiceResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetServiceResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetServiceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetServiceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetServiceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountId = value; }
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountId = std::move(value); }
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountId.assign(value); }
    inline GetServiceResult& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}
    inline GetServiceResult& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}
    inline GetServiceResult& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the service is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline GetServiceResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline GetServiceResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the service. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetServiceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetServiceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetServiceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint type of the service.</p>
     */
    inline const ServiceEndpointType& GetEndpointType() const{ return m_endpointType; }
    inline void SetEndpointType(const ServiceEndpointType& value) { m_endpointType = value; }
    inline void SetEndpointType(ServiceEndpointType&& value) { m_endpointType = std::move(value); }
    inline GetServiceResult& WithEndpointType(const ServiceEndpointType& value) { SetEndpointType(value); return *this;}
    inline GetServiceResult& WithEndpointType(ServiceEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetServiceResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetServiceResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetServiceResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }
    inline void SetError(const ErrorResponse& value) { m_error = value; }
    inline void SetError(ErrorResponse&& value) { m_error = std::move(value); }
    inline GetServiceResult& WithError(const ErrorResponse& value) { SetError(value); return *this;}
    inline GetServiceResult& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the Lambda endpoint type.</p> <p>The <b>Arn</b> is the
     * Amazon Resource Name (ARN) of the Lambda function associated with this service.
     * </p>
     */
    inline const LambdaEndpointConfig& GetLambdaEndpoint() const{ return m_lambdaEndpoint; }
    inline void SetLambdaEndpoint(const LambdaEndpointConfig& value) { m_lambdaEndpoint = value; }
    inline void SetLambdaEndpoint(LambdaEndpointConfig&& value) { m_lambdaEndpoint = std::move(value); }
    inline GetServiceResult& WithLambdaEndpoint(const LambdaEndpointConfig& value) { SetLambdaEndpoint(value); return *this;}
    inline GetServiceResult& WithLambdaEndpoint(LambdaEndpointConfig&& value) { SetLambdaEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline GetServiceResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline GetServiceResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetServiceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetServiceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetServiceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }
    inline GetServiceResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline GetServiceResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline GetServiceResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }
    inline GetServiceResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline GetServiceResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline GetServiceResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the service. </p>
     */
    inline const ServiceState& GetState() const{ return m_state; }
    inline void SetState(const ServiceState& value) { m_state = value; }
    inline void SetState(ServiceState&& value) { m_state = std::move(value); }
    inline GetServiceResult& WithState(const ServiceState& value) { SetState(value); return *this;}
    inline GetServiceResult& WithState(ServiceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetServiceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetServiceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetServiceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetServiceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetServiceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetServiceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetServiceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetServiceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetServiceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for the URL endpoint type.</p> <p>The <b>Url</b> isthe URL
     * of the endpoint type.</p> <p>The <b>HealthUrl</b> is the health check URL of the
     * endpoint type. </p>
     */
    inline const UrlEndpointConfig& GetUrlEndpoint() const{ return m_urlEndpoint; }
    inline void SetUrlEndpoint(const UrlEndpointConfig& value) { m_urlEndpoint = value; }
    inline void SetUrlEndpoint(UrlEndpointConfig&& value) { m_urlEndpoint = std::move(value); }
    inline GetServiceResult& WithUrlEndpoint(const UrlEndpointConfig& value) { SetUrlEndpoint(value); return *this;}
    inline GetServiceResult& WithUrlEndpoint(UrlEndpointConfig&& value) { SetUrlEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline GetServiceResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline GetServiceResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline GetServiceResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::String m_createdByAccountId;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_description;

    ServiceEndpointType m_endpointType;

    Aws::String m_environmentId;

    ErrorResponse m_error;

    LambdaEndpointConfig m_lambdaEndpoint;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    Aws::String m_ownerAccountId;

    Aws::String m_serviceId;

    ServiceState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    UrlEndpointConfig m_urlEndpoint;

    Aws::String m_vpcId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
