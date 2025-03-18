/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/ResourcePendingMaintenanceActions.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{
  class DescribePendingMaintenanceActionsResult
  {
  public:
    AWS_NEPTUNE_API DescribePendingMaintenanceActionsResult() = default;
    AWS_NEPTUNE_API DescribePendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribePendingMaintenanceActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline const Aws::Vector<ResourcePendingMaintenanceActions>& GetPendingMaintenanceActions() const { return m_pendingMaintenanceActions; }
    template<typename PendingMaintenanceActionsT = Aws::Vector<ResourcePendingMaintenanceActions>>
    void SetPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions = std::forward<PendingMaintenanceActionsT>(value); }
    template<typename PendingMaintenanceActionsT = Aws::Vector<ResourcePendingMaintenanceActions>>
    DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { SetPendingMaintenanceActions(std::forward<PendingMaintenanceActionsT>(value)); return *this;}
    template<typename PendingMaintenanceActionsT = ResourcePendingMaintenanceActions>
    DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions.emplace_back(std::forward<PendingMaintenanceActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribePendingMaintenanceActionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribePendingMaintenanceActionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourcePendingMaintenanceActions> m_pendingMaintenanceActions;
    bool m_pendingMaintenanceActionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
