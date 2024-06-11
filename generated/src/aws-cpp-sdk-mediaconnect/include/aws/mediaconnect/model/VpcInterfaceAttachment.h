﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{

  /**
   * The settings for attaching a VPC interface to an resource.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/VpcInterfaceAttachment">AWS
   * API Reference</a></p>
   */
  class VpcInterfaceAttachment
  {
  public:
    AWS_MEDIACONNECT_API VpcInterfaceAttachment();
    AWS_MEDIACONNECT_API VpcInterfaceAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API VpcInterfaceAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of the VPC interface to use for this resource.
     */
    inline const Aws::String& GetVpcInterfaceName() const{ return m_vpcInterfaceName; }
    inline bool VpcInterfaceNameHasBeenSet() const { return m_vpcInterfaceNameHasBeenSet; }
    inline void SetVpcInterfaceName(const Aws::String& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = value; }
    inline void SetVpcInterfaceName(Aws::String&& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = std::move(value); }
    inline void SetVpcInterfaceName(const char* value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName.assign(value); }
    inline VpcInterfaceAttachment& WithVpcInterfaceName(const Aws::String& value) { SetVpcInterfaceName(value); return *this;}
    inline VpcInterfaceAttachment& WithVpcInterfaceName(Aws::String&& value) { SetVpcInterfaceName(std::move(value)); return *this;}
    inline VpcInterfaceAttachment& WithVpcInterfaceName(const char* value) { SetVpcInterfaceName(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcInterfaceName;
    bool m_vpcInterfaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
