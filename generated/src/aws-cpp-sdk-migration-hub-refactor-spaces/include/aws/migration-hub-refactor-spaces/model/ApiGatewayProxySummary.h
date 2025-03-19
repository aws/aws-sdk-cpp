/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayEndpointType.h>
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
   * <p>A wrapper object holding the Amazon API Gateway proxy summary. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ApiGatewayProxySummary">AWS
   * API Reference</a></p>
   */
  class ApiGatewayProxySummary
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxySummary() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline const Aws::String& GetApiGatewayId() const { return m_apiGatewayId; }
    inline bool ApiGatewayIdHasBeenSet() const { return m_apiGatewayIdHasBeenSet; }
    template<typename ApiGatewayIdT = Aws::String>
    void SetApiGatewayId(ApiGatewayIdT&& value) { m_apiGatewayIdHasBeenSet = true; m_apiGatewayId = std::forward<ApiGatewayIdT>(value); }
    template<typename ApiGatewayIdT = Aws::String>
    ApiGatewayProxySummary& WithApiGatewayId(ApiGatewayIdT&& value) { SetApiGatewayId(std::forward<ApiGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline ApiGatewayEndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(ApiGatewayEndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline ApiGatewayProxySummary& WithEndpointType(ApiGatewayEndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline const Aws::String& GetNlbArn() const { return m_nlbArn; }
    inline bool NlbArnHasBeenSet() const { return m_nlbArnHasBeenSet; }
    template<typename NlbArnT = Aws::String>
    void SetNlbArn(NlbArnT&& value) { m_nlbArnHasBeenSet = true; m_nlbArn = std::forward<NlbArnT>(value); }
    template<typename NlbArnT = Aws::String>
    ApiGatewayProxySummary& WithNlbArn(NlbArnT&& value) { SetNlbArn(std::forward<NlbArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline const Aws::String& GetNlbName() const { return m_nlbName; }
    inline bool NlbNameHasBeenSet() const { return m_nlbNameHasBeenSet; }
    template<typename NlbNameT = Aws::String>
    void SetNlbName(NlbNameT&& value) { m_nlbNameHasBeenSet = true; m_nlbName = std::forward<NlbNameT>(value); }
    template<typename NlbNameT = Aws::String>
    ApiGatewayProxySummary& WithNlbName(NlbNameT&& value) { SetNlbName(std::forward<NlbNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline const Aws::String& GetProxyUrl() const { return m_proxyUrl; }
    inline bool ProxyUrlHasBeenSet() const { return m_proxyUrlHasBeenSet; }
    template<typename ProxyUrlT = Aws::String>
    void SetProxyUrl(ProxyUrlT&& value) { m_proxyUrlHasBeenSet = true; m_proxyUrl = std::forward<ProxyUrlT>(value); }
    template<typename ProxyUrlT = Aws::String>
    ApiGatewayProxySummary& WithProxyUrl(ProxyUrlT&& value) { SetProxyUrl(std::forward<ProxyUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    ApiGatewayProxySummary& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline const Aws::String& GetVpcLinkId() const { return m_vpcLinkId; }
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }
    template<typename VpcLinkIdT = Aws::String>
    void SetVpcLinkId(VpcLinkIdT&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::forward<VpcLinkIdT>(value); }
    template<typename VpcLinkIdT = Aws::String>
    ApiGatewayProxySummary& WithVpcLinkId(VpcLinkIdT&& value) { SetVpcLinkId(std::forward<VpcLinkIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiGatewayId;
    bool m_apiGatewayIdHasBeenSet = false;

    ApiGatewayEndpointType m_endpointType{ApiGatewayEndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_nlbArn;
    bool m_nlbArnHasBeenSet = false;

    Aws::String m_nlbName;
    bool m_nlbNameHasBeenSet = false;

    Aws::String m_proxyUrl;
    bool m_proxyUrlHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
