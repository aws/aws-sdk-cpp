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
   * <p>A wrapper object holding the Amazon API Gateway proxy configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ApiGatewayProxyConfig">AWS
   * API Reference</a></p>
   */
  class ApiGatewayProxyConfig
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyConfig();
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline const Aws::String& GetApiGatewayId() const{ return m_apiGatewayId; }
    inline bool ApiGatewayIdHasBeenSet() const { return m_apiGatewayIdHasBeenSet; }
    inline void SetApiGatewayId(const Aws::String& value) { m_apiGatewayIdHasBeenSet = true; m_apiGatewayId = value; }
    inline void SetApiGatewayId(Aws::String&& value) { m_apiGatewayIdHasBeenSet = true; m_apiGatewayId = std::move(value); }
    inline void SetApiGatewayId(const char* value) { m_apiGatewayIdHasBeenSet = true; m_apiGatewayId.assign(value); }
    inline ApiGatewayProxyConfig& WithApiGatewayId(const Aws::String& value) { SetApiGatewayId(value); return *this;}
    inline ApiGatewayProxyConfig& WithApiGatewayId(Aws::String&& value) { SetApiGatewayId(std::move(value)); return *this;}
    inline ApiGatewayProxyConfig& WithApiGatewayId(const char* value) { SetApiGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline const ApiGatewayEndpointType& GetEndpointType() const{ return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(const ApiGatewayEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline void SetEndpointType(ApiGatewayEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }
    inline ApiGatewayProxyConfig& WithEndpointType(const ApiGatewayEndpointType& value) { SetEndpointType(value); return *this;}
    inline ApiGatewayProxyConfig& WithEndpointType(ApiGatewayEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline const Aws::String& GetNlbArn() const{ return m_nlbArn; }
    inline bool NlbArnHasBeenSet() const { return m_nlbArnHasBeenSet; }
    inline void SetNlbArn(const Aws::String& value) { m_nlbArnHasBeenSet = true; m_nlbArn = value; }
    inline void SetNlbArn(Aws::String&& value) { m_nlbArnHasBeenSet = true; m_nlbArn = std::move(value); }
    inline void SetNlbArn(const char* value) { m_nlbArnHasBeenSet = true; m_nlbArn.assign(value); }
    inline ApiGatewayProxyConfig& WithNlbArn(const Aws::String& value) { SetNlbArn(value); return *this;}
    inline ApiGatewayProxyConfig& WithNlbArn(Aws::String&& value) { SetNlbArn(std::move(value)); return *this;}
    inline ApiGatewayProxyConfig& WithNlbArn(const char* value) { SetNlbArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline const Aws::String& GetNlbName() const{ return m_nlbName; }
    inline bool NlbNameHasBeenSet() const { return m_nlbNameHasBeenSet; }
    inline void SetNlbName(const Aws::String& value) { m_nlbNameHasBeenSet = true; m_nlbName = value; }
    inline void SetNlbName(Aws::String&& value) { m_nlbNameHasBeenSet = true; m_nlbName = std::move(value); }
    inline void SetNlbName(const char* value) { m_nlbNameHasBeenSet = true; m_nlbName.assign(value); }
    inline ApiGatewayProxyConfig& WithNlbName(const Aws::String& value) { SetNlbName(value); return *this;}
    inline ApiGatewayProxyConfig& WithNlbName(Aws::String&& value) { SetNlbName(std::move(value)); return *this;}
    inline ApiGatewayProxyConfig& WithNlbName(const char* value) { SetNlbName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline const Aws::String& GetProxyUrl() const{ return m_proxyUrl; }
    inline bool ProxyUrlHasBeenSet() const { return m_proxyUrlHasBeenSet; }
    inline void SetProxyUrl(const Aws::String& value) { m_proxyUrlHasBeenSet = true; m_proxyUrl = value; }
    inline void SetProxyUrl(Aws::String&& value) { m_proxyUrlHasBeenSet = true; m_proxyUrl = std::move(value); }
    inline void SetProxyUrl(const char* value) { m_proxyUrlHasBeenSet = true; m_proxyUrl.assign(value); }
    inline ApiGatewayProxyConfig& WithProxyUrl(const Aws::String& value) { SetProxyUrl(value); return *this;}
    inline ApiGatewayProxyConfig& WithProxyUrl(Aws::String&& value) { SetProxyUrl(std::move(value)); return *this;}
    inline ApiGatewayProxyConfig& WithProxyUrl(const char* value) { SetProxyUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline ApiGatewayProxyConfig& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline ApiGatewayProxyConfig& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline ApiGatewayProxyConfig& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = value; }
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::move(value); }
    inline void SetVpcLinkId(const char* value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId.assign(value); }
    inline ApiGatewayProxyConfig& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}
    inline ApiGatewayProxyConfig& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}
    inline ApiGatewayProxyConfig& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}
    ///@}
  private:

    Aws::String m_apiGatewayId;
    bool m_apiGatewayIdHasBeenSet = false;

    ApiGatewayEndpointType m_endpointType;
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
