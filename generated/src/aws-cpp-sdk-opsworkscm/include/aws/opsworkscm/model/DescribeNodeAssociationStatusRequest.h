/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class DescribeNodeAssociationStatusRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API DescribeNodeAssociationStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNodeAssociationStatus"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline const Aws::String& GetNodeAssociationStatusToken() const{ return m_nodeAssociationStatusToken; }
    inline bool NodeAssociationStatusTokenHasBeenSet() const { return m_nodeAssociationStatusTokenHasBeenSet; }
    inline void SetNodeAssociationStatusToken(const Aws::String& value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken = value; }
    inline void SetNodeAssociationStatusToken(Aws::String&& value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken = std::move(value); }
    inline void SetNodeAssociationStatusToken(const char* value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken.assign(value); }
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(const Aws::String& value) { SetNodeAssociationStatusToken(value); return *this;}
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(Aws::String&& value) { SetNodeAssociationStatusToken(std::move(value)); return *this;}
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(const char* value) { SetNodeAssociationStatusToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline DescribeNodeAssociationStatusRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline DescribeNodeAssociationStatusRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline DescribeNodeAssociationStatusRequest& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeAssociationStatusToken;
    bool m_nodeAssociationStatusTokenHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
