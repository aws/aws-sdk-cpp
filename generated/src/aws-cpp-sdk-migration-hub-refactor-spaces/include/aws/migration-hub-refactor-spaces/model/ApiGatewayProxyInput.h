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
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyInput();
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of endpoint to use for the API Gateway proxy. If no value is
     * specified in the request, the value is set to <code>REGIONAL</code> by
     * default.</p> <p>If the value is set to <code>PRIVATE</code> in the request, this
     * creates a private API endpoint that is isolated from the public internet. The
     * private endpoint can only be accessed by using Amazon Virtual Private Cloud
     * (Amazon VPC) endpoints for Amazon API Gateway that have been granted access.
     * </p>
     */
    inline const ApiGatewayEndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint to use for the API Gateway proxy. If no value is
     * specified in the request, the value is set to <code>REGIONAL</code> by
     * default.</p> <p>If the value is set to <code>PRIVATE</code> in the request, this
     * creates a private API endpoint that is isolated from the public internet. The
     * private endpoint can only be accessed by using Amazon Virtual Private Cloud
     * (Amazon VPC) endpoints for Amazon API Gateway that have been granted access.
     * </p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint to use for the API Gateway proxy. If no value is
     * specified in the request, the value is set to <code>REGIONAL</code> by
     * default.</p> <p>If the value is set to <code>PRIVATE</code> in the request, this
     * creates a private API endpoint that is isolated from the public internet. The
     * private endpoint can only be accessed by using Amazon Virtual Private Cloud
     * (Amazon VPC) endpoints for Amazon API Gateway that have been granted access.
     * </p>
     */
    inline void SetEndpointType(const ApiGatewayEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint to use for the API Gateway proxy. If no value is
     * specified in the request, the value is set to <code>REGIONAL</code> by
     * default.</p> <p>If the value is set to <code>PRIVATE</code> in the request, this
     * creates a private API endpoint that is isolated from the public internet. The
     * private endpoint can only be accessed by using Amazon Virtual Private Cloud
     * (Amazon VPC) endpoints for Amazon API Gateway that have been granted access.
     * </p>
     */
    inline void SetEndpointType(ApiGatewayEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint to use for the API Gateway proxy. If no value is
     * specified in the request, the value is set to <code>REGIONAL</code> by
     * default.</p> <p>If the value is set to <code>PRIVATE</code> in the request, this
     * creates a private API endpoint that is isolated from the public internet. The
     * private endpoint can only be accessed by using Amazon Virtual Private Cloud
     * (Amazon VPC) endpoints for Amazon API Gateway that have been granted access.
     * </p>
     */
    inline ApiGatewayProxyInput& WithEndpointType(const ApiGatewayEndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint to use for the API Gateway proxy. If no value is
     * specified in the request, the value is set to <code>REGIONAL</code> by
     * default.</p> <p>If the value is set to <code>PRIVATE</code> in the request, this
     * creates a private API endpoint that is isolated from the public internet. The
     * private endpoint can only be accessed by using Amazon Virtual Private Cloud
     * (Amazon VPC) endpoints for Amazon API Gateway that have been granted access.
     * </p>
     */
    inline ApiGatewayProxyInput& WithEndpointType(ApiGatewayEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline ApiGatewayProxyInput& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline ApiGatewayProxyInput& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline ApiGatewayProxyInput& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:

    ApiGatewayEndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
