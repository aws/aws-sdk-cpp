/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxyInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateApplicationResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateApplicationResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline const ApiGatewayProxyInput& GetApiGatewayProxy() const{ return m_apiGatewayProxy; }

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline void SetApiGatewayProxy(const ApiGatewayProxyInput& value) { m_apiGatewayProxy = value; }

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline void SetApiGatewayProxy(ApiGatewayProxyInput&& value) { m_apiGatewayProxy = std::move(value); }

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline CreateApplicationResult& WithApiGatewayProxy(const ApiGatewayProxyInput& value) { SetApiGatewayProxy(value); return *this;}

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline CreateApplicationResult& WithApiGatewayProxy(ApiGatewayProxyInput&& value) { SetApiGatewayProxy(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }

    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline CreateApplicationResult& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline CreateApplicationResult& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline CreateApplicationResult& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the application is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that indicates when the application is created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>A timestamp that indicates when the application is created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the application is created.</p>
     */
    inline CreateApplicationResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the application is created.</p>
     */
    inline CreateApplicationResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline CreateApplicationResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline CreateApplicationResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline CreateApplicationResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline CreateApplicationResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline CreateApplicationResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline CreateApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline CreateApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline CreateApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline CreateApplicationResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline CreateApplicationResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline CreateApplicationResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline const ProxyType& GetProxyType() const{ return m_proxyType; }

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline void SetProxyType(const ProxyType& value) { m_proxyType = value; }

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline void SetProxyType(ProxyType&& value) { m_proxyType = std::move(value); }

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline CreateApplicationResult& WithProxyType(const ProxyType& value) { SetProxyType(value); return *this;}

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline CreateApplicationResult& WithProxyType(ProxyType&& value) { SetProxyType(std::move(value)); return *this;}


    /**
     * <p>The current state of the application. </p>
     */
    inline const ApplicationState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the application. </p>
     */
    inline void SetState(const ApplicationState& value) { m_state = value; }

    /**
     * <p>The current state of the application. </p>
     */
    inline void SetState(ApplicationState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the application. </p>
     */
    inline CreateApplicationResult& WithState(const ApplicationState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the application. </p>
     */
    inline CreateApplicationResult& WithState(ApplicationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline CreateApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline CreateApplicationResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline CreateApplicationResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline CreateApplicationResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    ApiGatewayProxyInput m_apiGatewayProxy;

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::String m_createdByAccountId;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_environmentId;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    Aws::String m_ownerAccountId;

    ProxyType m_proxyType;

    ApplicationState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_vpcId;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
