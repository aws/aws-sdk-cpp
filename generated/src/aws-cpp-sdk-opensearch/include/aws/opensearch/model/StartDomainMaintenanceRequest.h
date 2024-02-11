/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/MaintenanceType.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>StartDomainMaintenance</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartDomainMaintenanceRequest">AWS
   * API Reference</a></p>
   */
  class StartDomainMaintenanceRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API StartDomainMaintenanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDomainMaintenance"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline StartDomainMaintenanceRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline StartDomainMaintenanceRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline StartDomainMaintenanceRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the action.</p>
     */
    inline const MaintenanceType& GetAction() const{ return m_action; }

    /**
     * <p>The name of the action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetAction(const MaintenanceType& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetAction(MaintenanceType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline StartDomainMaintenanceRequest& WithAction(const MaintenanceType& value) { SetAction(value); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline StartDomainMaintenanceRequest& WithAction(MaintenanceType&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The ID of the data node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The ID of the data node.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>The ID of the data node.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>The ID of the data node.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>The ID of the data node.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>The ID of the data node.</p>
     */
    inline StartDomainMaintenanceRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The ID of the data node.</p>
     */
    inline StartDomainMaintenanceRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data node.</p>
     */
    inline StartDomainMaintenanceRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    MaintenanceType m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
