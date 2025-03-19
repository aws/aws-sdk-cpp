/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayEndpointType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A wrapper object holding the Amazon API Gateway endpoint input.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ApiGatewayProxyInput">AWS
   * API Reference</a></p>
   */
  class ApiGatewayProxyInput
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyInput() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of endpoint to use for the API Gateway proxy. If no value is
     * specified in the request, the value is set to <code>REGIONAL</code> by
     * default.</p> <p>If the value is set to <code>PRIVATE</code> in the request, this
     * creates a private API endpoint that is isolated from the public internet. The
     * private endpoint can only be accessed by using Amazon Virtual Private Cloud
     * (Amazon VPC) interface endpoints for the Amazon API Gateway that has been
     * granted access. For more information about creating a private connection with
     * Refactor Spaces and interface endpoint (Amazon Web Services PrivateLink)
     * availability, see <a
     * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/userguide/vpc-interface-endpoints.html">Access
     * Refactor Spaces using an interface endpoint (Amazon Web Services
     * PrivateLink)</a>.</p>
     */
    inline ApiGatewayEndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(ApiGatewayEndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline ApiGatewayProxyInput& WithEndpointType(ApiGatewayEndpointType value) { SetEndpointType(value); return *this;}
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
    ApiGatewayProxyInput& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}
  private:

    ApiGatewayEndpointType m_endpointType{ApiGatewayEndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
