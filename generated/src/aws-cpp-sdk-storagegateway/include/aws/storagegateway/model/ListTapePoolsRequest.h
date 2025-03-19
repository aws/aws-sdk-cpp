/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class ListTapePoolsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API ListTapePoolsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTapePools"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPoolARNs() const { return m_poolARNs; }
    inline bool PoolARNsHasBeenSet() const { return m_poolARNsHasBeenSet; }
    template<typename PoolARNsT = Aws::Vector<Aws::String>>
    void SetPoolARNs(PoolARNsT&& value) { m_poolARNsHasBeenSet = true; m_poolARNs = std::forward<PoolARNsT>(value); }
    template<typename PoolARNsT = Aws::Vector<Aws::String>>
    ListTapePoolsRequest& WithPoolARNs(PoolARNsT&& value) { SetPoolARNs(std::forward<PoolARNsT>(value)); return *this;}
    template<typename PoolARNsT = Aws::String>
    ListTapePoolsRequest& AddPoolARNs(PoolARNsT&& value) { m_poolARNsHasBeenSet = true; m_poolARNs.emplace_back(std::forward<PoolARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListTapePoolsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional number limit for the tape pools in the list returned by this
     * call.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListTapePoolsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_poolARNs;
    bool m_poolARNsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
