/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the endpoints for the API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayEndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayEndpointConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayEndpointConfiguration() = default;
    AWS_SECURITYHUB_API AwsApiGatewayEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of endpoint types for the REST API.</p> <p>For an edge-optimized API,
     * the endpoint type is <code>EDGE</code>. For a Regional API, the endpoint type is
     * <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<Aws::String>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<Aws::String>>
    AwsApiGatewayEndpointConfiguration& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = Aws::String>
    AwsApiGatewayEndpointConfiguration& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
