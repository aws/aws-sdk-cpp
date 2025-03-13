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
  class DescribeServiceErrorsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeServiceErrorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceErrors"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The stack ID. If you use this parameter, <code>DescribeServiceErrors</code>
     * returns descriptions of the errors associated with the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeServiceErrorsRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeServiceErrorsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceErrorIds() const { return m_serviceErrorIds; }
    inline bool ServiceErrorIdsHasBeenSet() const { return m_serviceErrorIdsHasBeenSet; }
    template<typename ServiceErrorIdsT = Aws::Vector<Aws::String>>
    void SetServiceErrorIds(ServiceErrorIdsT&& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds = std::forward<ServiceErrorIdsT>(value); }
    template<typename ServiceErrorIdsT = Aws::Vector<Aws::String>>
    DescribeServiceErrorsRequest& WithServiceErrorIds(ServiceErrorIdsT&& value) { SetServiceErrorIds(std::forward<ServiceErrorIdsT>(value)); return *this;}
    template<typename ServiceErrorIdsT = Aws::String>
    DescribeServiceErrorsRequest& AddServiceErrorIds(ServiceErrorIdsT&& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds.emplace_back(std::forward<ServiceErrorIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceErrorIds;
    bool m_serviceErrorIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
