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
  class DescribeInstancesRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstances"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline DescribeInstancesRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline DescribeInstancesRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>A stack ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified stack.</p>
     */
    inline DescribeInstancesRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }

    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }

    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }

    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline DescribeInstancesRequest& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline DescribeInstancesRequest& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>A layer ID. If you use this parameter, <code>DescribeInstances</code> returns
     * descriptions of the instances associated with the specified layer.</p>
     */
    inline DescribeInstancesRequest& WithLayerId(const char* value) { SetLayerId(value); return *this;}


    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline DescribeInstancesRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline DescribeInstancesRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline DescribeInstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline DescribeInstancesRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of instance IDs to be described. If you use this parameter,
     * <code>DescribeInstances</code> returns a description of the specified instances.
     * Otherwise, it returns a description of every instance.</p>
     */
    inline DescribeInstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
