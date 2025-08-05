/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/PortalSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{
  class ListPortalsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListPortalsResult() = default;
    AWS_WORKSPACESWEB_API ListPortalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListPortalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The portals in the list.</p>
     */
    inline const Aws::Vector<PortalSummary>& GetPortals() const { return m_portals; }
    template<typename PortalsT = Aws::Vector<PortalSummary>>
    void SetPortals(PortalsT&& value) { m_portalsHasBeenSet = true; m_portals = std::forward<PortalsT>(value); }
    template<typename PortalsT = Aws::Vector<PortalSummary>>
    ListPortalsResult& WithPortals(PortalsT&& value) { SetPortals(std::forward<PortalsT>(value)); return *this;}
    template<typename PortalsT = PortalSummary>
    ListPortalsResult& AddPortals(PortalsT&& value) { m_portalsHasBeenSet = true; m_portals.emplace_back(std::forward<PortalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPortalsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPortalsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PortalSummary> m_portals;
    bool m_portalsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
