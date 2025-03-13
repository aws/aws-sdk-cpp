/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/ResourcePendingMaintenanceActions.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
  class ApplyPendingMaintenanceActionResult
  {
  public:
    AWS_NEPTUNE_API ApplyPendingMaintenanceActionResult() = default;
    AWS_NEPTUNE_API ApplyPendingMaintenanceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API ApplyPendingMaintenanceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ResourcePendingMaintenanceActions& GetResourcePendingMaintenanceActions() const { return m_resourcePendingMaintenanceActions; }
    template<typename ResourcePendingMaintenanceActionsT = ResourcePendingMaintenanceActions>
    void SetResourcePendingMaintenanceActions(ResourcePendingMaintenanceActionsT&& value) { m_resourcePendingMaintenanceActionsHasBeenSet = true; m_resourcePendingMaintenanceActions = std::forward<ResourcePendingMaintenanceActionsT>(value); }
    template<typename ResourcePendingMaintenanceActionsT = ResourcePendingMaintenanceActions>
    ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceActions(ResourcePendingMaintenanceActionsT&& value) { SetResourcePendingMaintenanceActions(std::forward<ResourcePendingMaintenanceActionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ApplyPendingMaintenanceActionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ResourcePendingMaintenanceActions m_resourcePendingMaintenanceActions;
    bool m_resourcePendingMaintenanceActionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
