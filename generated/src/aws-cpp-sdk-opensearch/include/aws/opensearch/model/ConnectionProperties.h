/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/CrossClusterSearchConnectionProperties.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The connection properties of an outbound connection.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ConnectionProperties">AWS
   * API Reference</a></p>
   */
  class ConnectionProperties
  {
  public:
    AWS_OPENSEARCHSERVICE_API ConnectionProperties() = default;
    AWS_OPENSEARCHSERVICE_API ConnectionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ConnectionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    ConnectionProperties& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection properties for cross cluster search.</p>
     */
    inline const CrossClusterSearchConnectionProperties& GetCrossClusterSearch() const { return m_crossClusterSearch; }
    inline bool CrossClusterSearchHasBeenSet() const { return m_crossClusterSearchHasBeenSet; }
    template<typename CrossClusterSearchT = CrossClusterSearchConnectionProperties>
    void SetCrossClusterSearch(CrossClusterSearchT&& value) { m_crossClusterSearchHasBeenSet = true; m_crossClusterSearch = std::forward<CrossClusterSearchT>(value); }
    template<typename CrossClusterSearchT = CrossClusterSearchConnectionProperties>
    ConnectionProperties& WithCrossClusterSearch(CrossClusterSearchT&& value) { SetCrossClusterSearch(std::forward<CrossClusterSearchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    CrossClusterSearchConnectionProperties m_crossClusterSearch;
    bool m_crossClusterSearchHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
