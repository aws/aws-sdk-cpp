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
    AWS_OPSWORKS_API RegisterVolumeRequest();

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
    inline const Aws::String& GetEc2VolumeId() const{ return m_ec2VolumeId; }
    inline bool Ec2VolumeIdHasBeenSet() const { return m_ec2VolumeIdHasBeenSet; }
    inline void SetEc2VolumeId(const Aws::String& value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId = value; }
    inline void SetEc2VolumeId(Aws::String&& value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId = std::move(value); }
    inline void SetEc2VolumeId(const char* value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId.assign(value); }
    inline RegisterVolumeRequest& WithEc2VolumeId(const Aws::String& value) { SetEc2VolumeId(value); return *this;}
    inline RegisterVolumeRequest& WithEc2VolumeId(Aws::String&& value) { SetEc2VolumeId(std::move(value)); return *this;}
    inline RegisterVolumeRequest& WithEc2VolumeId(const char* value) { SetEc2VolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline RegisterVolumeRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline RegisterVolumeRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline RegisterVolumeRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
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
