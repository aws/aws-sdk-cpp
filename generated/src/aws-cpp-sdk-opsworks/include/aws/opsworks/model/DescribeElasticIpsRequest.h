/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeElasticIpsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeElasticIpsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeElasticIps"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The instance ID. If you include this parameter,
     * <code>DescribeElasticIps</code> returns a description of the Elastic IP
     * addresses associated with the specified instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeElasticIpsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stack ID. If you include this parameter, <code>DescribeElasticIps</code>
     * returns a description of the Elastic IP addresses that are registered with the
     * specified stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeElasticIpsRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Elastic IP addresses to be described. If you include this
     * parameter, <code>DescribeElasticIps</code> returns a description of the
     * specified Elastic IP addresses. Otherwise, it returns a description of every
     * Elastic IP address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIps() const { return m_ips; }
    inline bool IpsHasBeenSet() const { return m_ipsHasBeenSet; }
    template<typename IpsT = Aws::Vector<Aws::String>>
    void SetIps(IpsT&& value) { m_ipsHasBeenSet = true; m_ips = std::forward<IpsT>(value); }
    template<typename IpsT = Aws::Vector<Aws::String>>
    DescribeElasticIpsRequest& WithIps(IpsT&& value) { SetIps(std::forward<IpsT>(value)); return *this;}
    template<typename IpsT = Aws::String>
    DescribeElasticIpsRequest& AddIps(IpsT&& value) { m_ipsHasBeenSet = true; m_ips.emplace_back(std::forward<IpsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ips;
    bool m_ipsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
