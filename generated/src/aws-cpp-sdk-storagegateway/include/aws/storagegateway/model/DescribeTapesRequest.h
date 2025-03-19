/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>DescribeTapesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapesInput">AWS
   * API Reference</a></p>
   */
  class DescribeTapesRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeTapesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTapes"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeTapesRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one or more unique Amazon Resource Names (ARNs) that represent the
     * virtual tapes you want to describe. If this parameter is not specified, Tape
     * gateway returns a description of all virtual tapes associated with the specified
     * gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTapeARNs() const { return m_tapeARNs; }
    inline bool TapeARNsHasBeenSet() const { return m_tapeARNsHasBeenSet; }
    template<typename TapeARNsT = Aws::Vector<Aws::String>>
    void SetTapeARNs(TapeARNsT&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs = std::forward<TapeARNsT>(value); }
    template<typename TapeARNsT = Aws::Vector<Aws::String>>
    DescribeTapesRequest& WithTapeARNs(TapeARNsT&& value) { SetTapeARNs(std::forward<TapeARNsT>(value)); return *this;}
    template<typename TapeARNsT = Aws::String>
    DescribeTapesRequest& AddTapeARNs(TapeARNsT&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.emplace_back(std::forward<TapeARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A marker value, obtained in a previous call to <code>DescribeTapes</code>.
     * This marker indicates which page of results to retrieve.</p> <p>If not
     * specified, the first page of results is retrieved.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeTapesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the number of virtual tapes described be limited to the
     * specified number.</p>  <p>Amazon Web Services may impose its own limit, if
     * this field is not set.</p> 
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeTapesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_tapeARNs;
    bool m_tapeARNsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
