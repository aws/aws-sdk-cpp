/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxyInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/ProxyType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline const ApiGatewayProxyInput& GetApiGatewayProxy() const{ return m_apiGatewayProxy; }

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline bool ApiGatewayProxyHasBeenSet() const { return m_apiGatewayProxyHasBeenSet; }

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline void SetApiGatewayProxy(const ApiGatewayProxyInput& value) { m_apiGatewayProxyHasBeenSet = true; m_apiGatewayProxy = value; }

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline void SetApiGatewayProxy(ApiGatewayProxyInput&& value) { m_apiGatewayProxyHasBeenSet = true; m_apiGatewayProxy = std::move(value); }

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline CreateApplicationRequest& WithApiGatewayProxy(const ApiGatewayProxyInput& value) { SetApiGatewayProxy(value); return *this;}

    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline CreateApplicationRequest& WithApiGatewayProxy(ApiGatewayProxyInput&& value) { SetApiGatewayProxy(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline CreateApplicationRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline CreateApplicationRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline CreateApplicationRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The name to use for the application. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to use for the application. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to use for the application. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to use for the application. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to use for the application. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to use for the application. </p>
     */
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to use for the application. </p>
     */
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the application. </p>
     */
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateApplicationRequest& WithProxyType(const ProxyType& value) { SetProxyType(value); return *this;}

    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline CreateApplicationRequest& WithProxyType(ProxyType&& value) { SetProxyType(std::move(value)); return *this;}


    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline CreateApplicationRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline CreateApplicationRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC).</p>
     */
    inline CreateApplicationRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    ApiGatewayProxyInput m_apiGatewayProxy;
    bool m_apiGatewayProxyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProxyType m_proxyType;
    bool m_proxyTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
