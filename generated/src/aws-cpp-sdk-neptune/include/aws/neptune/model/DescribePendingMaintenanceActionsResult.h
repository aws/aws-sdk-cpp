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
    AWS_NEPTUNE_API DescribePendingMaintenanceActionsResult();
    AWS_NEPTUNE_API DescribePendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribePendingMaintenanceActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline const Aws::Vector<ResourcePendingMaintenanceActions>& GetPendingMaintenanceActions() const{ return m_pendingMaintenanceActions; }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline void SetPendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceActions>& value) { m_pendingMaintenanceActions = value; }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline void SetPendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceActions>&& value) { m_pendingMaintenanceActions = std::move(value); }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceActions>& value) { SetPendingMaintenanceActions(value); return *this;}

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceActions>&& value) { SetPendingMaintenanceActions(std::move(value)); return *this;}

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(const ResourcePendingMaintenanceActions& value) { m_pendingMaintenanceActions.push_back(value); return *this; }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(ResourcePendingMaintenanceActions&& value) { m_pendingMaintenanceActions.push_back(std::move(value)); return *this; }


    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline DescribePendingMaintenanceActionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline DescribePendingMaintenanceActionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>.</p>
     */
    inline DescribePendingMaintenanceActionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribePendingMaintenanceActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribePendingMaintenanceActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ResourcePendingMaintenanceActions> m_pendingMaintenanceActions;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
