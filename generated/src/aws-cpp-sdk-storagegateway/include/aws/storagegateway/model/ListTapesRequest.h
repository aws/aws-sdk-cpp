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
   * <p>A JSON object that contains one or more of the following fields:</p> <ul>
   * <li> <p> <a>ListTapesInput$Limit</a> </p> </li> <li> <p>
   * <a>ListTapesInput$Marker</a> </p> </li> <li> <p> <a>ListTapesInput$TapeARNs</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListTapesInput">AWS
   * API Reference</a></p>
   */
  class ListTapesRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API ListTapesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTapes"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetTapeARNs() const { return m_tapeARNs; }
    inline bool TapeARNsHasBeenSet() const { return m_tapeARNsHasBeenSet; }
    template<typename TapeARNsT = Aws::Vector<Aws::String>>
    void SetTapeARNs(TapeARNsT&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs = std::forward<TapeARNsT>(value); }
    template<typename TapeARNsT = Aws::Vector<Aws::String>>
    ListTapesRequest& WithTapeARNs(TapeARNsT&& value) { SetTapeARNs(std::forward<TapeARNsT>(value)); return *this;}
    template<typename TapeARNsT = Aws::String>
    ListTapesRequest& AddTapeARNs(TapeARNsT&& value) { m_tapeARNsHasBeenSet = true; m_tapeARNs.emplace_back(std::forward<TapeARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tapes.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListTapesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional number limit for the tapes in the list returned by this call.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListTapesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

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
