/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for UpdateInstance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UpdateInstanceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateInstanceRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API UpdateInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstance"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Supply Chain instance name.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline UpdateInstanceRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline UpdateInstanceRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline UpdateInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Supply Chain instance description.</p>
     */
    inline const Aws::String& GetInstanceDescription() const{ return m_instanceDescription; }
    inline bool InstanceDescriptionHasBeenSet() const { return m_instanceDescriptionHasBeenSet; }
    inline void SetInstanceDescription(const Aws::String& value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription = value; }
    inline void SetInstanceDescription(Aws::String&& value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription = std::move(value); }
    inline void SetInstanceDescription(const char* value) { m_instanceDescriptionHasBeenSet = true; m_instanceDescription.assign(value); }
    inline UpdateInstanceRequest& WithInstanceDescription(const Aws::String& value) { SetInstanceDescription(value); return *this;}
    inline UpdateInstanceRequest& WithInstanceDescription(Aws::String&& value) { SetInstanceDescription(std::move(value)); return *this;}
    inline UpdateInstanceRequest& WithInstanceDescription(const char* value) { SetInstanceDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_instanceDescription;
    bool m_instanceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
