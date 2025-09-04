/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>FIPS-compliant endpoint URLs for an OpenSearch Serverless collection. These
   * endpoints ensure all data transmission uses FIPS 140-3 validated cryptographic
   * implementations, meeting federal security requirements for government
   * workloads.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/FipsEndpoints">AWS
   * API Reference</a></p>
   */
  class FipsEndpoints
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API FipsEndpoints() = default;
    AWS_OPENSEARCHSERVERLESS_API FipsEndpoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API FipsEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>FIPS-compliant collection endpoint used to submit index, search, and data
     * upload requests to an OpenSearch Serverless collection. This endpoint uses FIPS
     * 140-3 validated cryptography and is required for federal government
     * workloads.</p>
     */
    inline const Aws::String& GetCollectionEndpoint() const { return m_collectionEndpoint; }
    inline bool CollectionEndpointHasBeenSet() const { return m_collectionEndpointHasBeenSet; }
    template<typename CollectionEndpointT = Aws::String>
    void SetCollectionEndpoint(CollectionEndpointT&& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = std::forward<CollectionEndpointT>(value); }
    template<typename CollectionEndpointT = Aws::String>
    FipsEndpoints& WithCollectionEndpoint(CollectionEndpointT&& value) { SetCollectionEndpoint(std::forward<CollectionEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>FIPS-compliant endpoint used to access OpenSearch Dashboards. This endpoint
     * uses FIPS 140-3 validated cryptography and is required for federal government
     * workloads that need dashboard visualization capabilities.</p>
     */
    inline const Aws::String& GetDashboardEndpoint() const { return m_dashboardEndpoint; }
    inline bool DashboardEndpointHasBeenSet() const { return m_dashboardEndpointHasBeenSet; }
    template<typename DashboardEndpointT = Aws::String>
    void SetDashboardEndpoint(DashboardEndpointT&& value) { m_dashboardEndpointHasBeenSet = true; m_dashboardEndpoint = std::forward<DashboardEndpointT>(value); }
    template<typename DashboardEndpointT = Aws::String>
    FipsEndpoints& WithDashboardEndpoint(DashboardEndpointT&& value) { SetDashboardEndpoint(std::forward<DashboardEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectionEndpoint;
    bool m_collectionEndpointHasBeenSet = false;

    Aws::String m_dashboardEndpoint;
    bool m_dashboardEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
