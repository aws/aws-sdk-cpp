/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetReservedNodeExchangeOfferingsInputMessage">AWS
   * API Reference</a></p>
   */
  class GetReservedNodeExchangeOfferingsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API GetReservedNodeExchangeOfferingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservedNodeExchangeOfferings"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A string representing the node identifier for the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline const Aws::String& GetReservedNodeId() const { return m_reservedNodeId; }
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }
    template<typename ReservedNodeIdT = Aws::String>
    void SetReservedNodeId(ReservedNodeIdT&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::forward<ReservedNodeIdT>(value); }
    template<typename ReservedNodeIdT = Aws::String>
    GetReservedNodeExchangeOfferingsRequest& WithReservedNodeId(ReservedNodeIdT&& value) { SetReservedNodeId(std::forward<ReservedNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer setting the maximum number of ReservedNodeOfferings to
     * retrieve.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline GetReservedNodeExchangeOfferingsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of
     * ReservedNodeOfferings.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    GetReservedNodeExchangeOfferingsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
