/**
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
  class RegisterVolumeRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API RegisterVolumeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterVolume"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon EBS volume ID.</p>
     */
    inline const Aws::String& GetEc2VolumeId() const { return m_ec2VolumeId; }
    inline bool Ec2VolumeIdHasBeenSet() const { return m_ec2VolumeIdHasBeenSet; }
    template<typename Ec2VolumeIdT = Aws::String>
    void SetEc2VolumeId(Ec2VolumeIdT&& value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId = std::forward<Ec2VolumeIdT>(value); }
    template<typename Ec2VolumeIdT = Aws::String>
    RegisterVolumeRequest& WithEc2VolumeId(Ec2VolumeIdT&& value) { SetEc2VolumeId(std::forward<Ec2VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    RegisterVolumeRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ec2VolumeId;
    bool m_ec2VolumeIdHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
