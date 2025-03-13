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
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateApplicationResult() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A wrapper object holding the API Gateway endpoint type and stage name for the
     * proxy. </p>
     */
    inline const ApiGatewayProxyInput& GetApiGatewayProxy() const { return m_apiGatewayProxy; }
    template<typename ApiGatewayProxyT = ApiGatewayProxyInput>
    void SetApiGatewayProxy(ApiGatewayProxyT&& value) { m_apiGatewayProxyHasBeenSet = true; m_apiGatewayProxy = std::forward<ApiGatewayProxyT>(value); }
    template<typename ApiGatewayProxyT = ApiGatewayProxyInput>
    CreateApplicationResult& WithApiGatewayProxy(ApiGatewayProxyT&& value) { SetApiGatewayProxy(std::forward<ApiGatewayProxyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateApplicationResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN is
     * <code>arn:aws:refactor-spaces:<i>region</i>:<i>account-id</i>:<i>resource-type/resource-id</i>
     * </code>. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateApplicationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of application creator.</p>
     */
    inline const Aws::String& GetCreatedByAccountId() const { return m_createdByAccountId; }
    template<typename CreatedByAccountIdT = Aws::String>
    void SetCreatedByAccountId(CreatedByAccountIdT&& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = std::forward<CreatedByAccountIdT>(value); }
    template<typename CreatedByAccountIdT = Aws::String>
    CreateApplicationResult& WithCreatedByAccountId(CreatedByAccountIdT&& value) { SetCreatedByAccountId(std::forward<CreatedByAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the application is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    CreateApplicationResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment in which the application is created.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    CreateApplicationResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the application was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    CreateApplicationResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApplicationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the application owner (which is always
     * the same as the environment owner account ID).</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    CreateApplicationResult& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy type of the proxy created within the application. </p>
     */
    inline ProxyType GetProxyType() const { return m_proxyType; }
    inline void SetProxyType(ProxyType value) { m_proxyTypeHasBeenSet = true; m_proxyType = value; }
    inline CreateApplicationResult& WithProxyType(ProxyType value) { SetProxyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the application. </p>
     */
    inline ApplicationState GetState() const { return m_state; }
    inline void SetState(ApplicationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateApplicationResult& WithState(ApplicationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the application. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateApplicationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateApplicationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon VPC. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateApplicationResult& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApiGatewayProxyInput m_apiGatewayProxy;
    bool m_apiGatewayProxyHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdByAccountId;
    bool m_createdByAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    ProxyType m_proxyType{ProxyType::NOT_SET};
    bool m_proxyTypeHasBeenSet = false;

    ApplicationState m_state{ApplicationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
