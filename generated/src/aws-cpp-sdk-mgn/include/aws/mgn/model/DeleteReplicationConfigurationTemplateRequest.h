/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DeleteReplicationConfigurationTemplateRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DeleteReplicationConfigurationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationConfigurationTemplate"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Request to delete Replication Configuration Template from service by
     * Replication Configuration Template ID.</p>
     */
    inline const Aws::String& GetReplicationConfigurationTemplateID() const { return m_replicationConfigurationTemplateID; }
    inline bool ReplicationConfigurationTemplateIDHasBeenSet() const { return m_replicationConfigurationTemplateIDHasBeenSet; }
    template<typename ReplicationConfigurationTemplateIDT = Aws::String>
    void SetReplicationConfigurationTemplateID(ReplicationConfigurationTemplateIDT&& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = std::forward<ReplicationConfigurationTemplateIDT>(value); }
    template<typename ReplicationConfigurationTemplateIDT = Aws::String>
    DeleteReplicationConfigurationTemplateRequest& WithReplicationConfigurationTemplateID(ReplicationConfigurationTemplateIDT&& value) { SetReplicationConfigurationTemplateID(std::forward<ReplicationConfigurationTemplateIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationConfigurationTemplateID;
    bool m_replicationConfigurationTemplateIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
