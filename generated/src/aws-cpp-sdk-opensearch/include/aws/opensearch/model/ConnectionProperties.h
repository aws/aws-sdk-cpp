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
    AWS_OPENSEARCHSERVICE_API ConnectionProperties();
    AWS_OPENSEARCHSERVICE_API ConnectionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ConnectionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline ConnectionProperties& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline ConnectionProperties& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     *  <p>The Endpoint attribute cannot be modified. </p> 
     * <p>The endpoint of the remote domain. Applicable for VPC_ENDPOINT connection
     * mode.</p>
     */
    inline ConnectionProperties& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The connection properties for cross cluster search.</p>
     */
    inline const CrossClusterSearchConnectionProperties& GetCrossClusterSearch() const{ return m_crossClusterSearch; }

    /**
     * <p>The connection properties for cross cluster search.</p>
     */
    inline bool CrossClusterSearchHasBeenSet() const { return m_crossClusterSearchHasBeenSet; }

    /**
     * <p>The connection properties for cross cluster search.</p>
     */
    inline void SetCrossClusterSearch(const CrossClusterSearchConnectionProperties& value) { m_crossClusterSearchHasBeenSet = true; m_crossClusterSearch = value; }

    /**
     * <p>The connection properties for cross cluster search.</p>
     */
    inline void SetCrossClusterSearch(CrossClusterSearchConnectionProperties&& value) { m_crossClusterSearchHasBeenSet = true; m_crossClusterSearch = std::move(value); }

    /**
     * <p>The connection properties for cross cluster search.</p>
     */
    inline ConnectionProperties& WithCrossClusterSearch(const CrossClusterSearchConnectionProperties& value) { SetCrossClusterSearch(value); return *this;}

    /**
     * <p>The connection properties for cross cluster search.</p>
     */
    inline ConnectionProperties& WithCrossClusterSearch(CrossClusterSearchConnectionProperties&& value) { SetCrossClusterSearch(std::move(value)); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    CrossClusterSearchConnectionProperties m_crossClusterSearch;
    bool m_crossClusterSearchHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
