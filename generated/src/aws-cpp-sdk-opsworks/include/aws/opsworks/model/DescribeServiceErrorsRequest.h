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
    AWS_OPSWORKS_API DescribeServiceErrorsRequest();

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
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline DescribeServiceErrorsRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DescribeServiceErrorsRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DescribeServiceErrorsRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the errors associated
     * with the specified instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DescribeServiceErrorsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DescribeServiceErrorsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DescribeServiceErrorsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of service error IDs. If you use this parameter,
     * <code>DescribeServiceErrors</code> returns descriptions of the specified errors.
     * Otherwise, it returns a description of every error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceErrorIds() const{ return m_serviceErrorIds; }
    inline bool ServiceErrorIdsHasBeenSet() const { return m_serviceErrorIdsHasBeenSet; }
    inline void SetServiceErrorIds(const Aws::Vector<Aws::String>& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds = value; }
    inline void SetServiceErrorIds(Aws::Vector<Aws::String>&& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds = std::move(value); }
    inline DescribeServiceErrorsRequest& WithServiceErrorIds(const Aws::Vector<Aws::String>& value) { SetServiceErrorIds(value); return *this;}
    inline DescribeServiceErrorsRequest& WithServiceErrorIds(Aws::Vector<Aws::String>&& value) { SetServiceErrorIds(std::move(value)); return *this;}
    inline DescribeServiceErrorsRequest& AddServiceErrorIds(const Aws::String& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds.push_back(value); return *this; }
    inline DescribeServiceErrorsRequest& AddServiceErrorIds(Aws::String&& value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds.push_back(std::move(value)); return *this; }
    inline DescribeServiceErrorsRequest& AddServiceErrorIds(const char* value) { m_serviceErrorIdsHasBeenSet = true; m_serviceErrorIds.push_back(value); return *this; }
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
