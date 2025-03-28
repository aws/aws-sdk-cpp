﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DeleteInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DeleteInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DeleteInstanceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to delete the instance Elastic IP address.</p>
     */
    inline bool GetDeleteElasticIp() const { return m_deleteElasticIp; }
    inline bool DeleteElasticIpHasBeenSet() const { return m_deleteElasticIpHasBeenSet; }
    inline void SetDeleteElasticIp(bool value) { m_deleteElasticIpHasBeenSet = true; m_deleteElasticIp = value; }
    inline DeleteInstanceRequest& WithDeleteElasticIp(bool value) { SetDeleteElasticIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to delete the instance's Amazon EBS volumes.</p>
     */
    inline bool GetDeleteVolumes() const { return m_deleteVolumes; }
    inline bool DeleteVolumesHasBeenSet() const { return m_deleteVolumesHasBeenSet; }
    inline void SetDeleteVolumes(bool value) { m_deleteVolumesHasBeenSet = true; m_deleteVolumes = value; }
    inline DeleteInstanceRequest& WithDeleteVolumes(bool value) { SetDeleteVolumes(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    bool m_deleteElasticIp{false};
    bool m_deleteElasticIpHasBeenSet = false;

    bool m_deleteVolumes{false};
    bool m_deleteVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
