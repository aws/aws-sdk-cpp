/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/VpcOptions.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>An OpenSearch Ingestion-managed VPC endpoint that will access one or more
   * pipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/VpcEndpoint">AWS
   * API Reference</a></p>
   */
  class VpcEndpoint
  {
  public:
    AWS_OSIS_API VpcEndpoint();
    AWS_OSIS_API VpcEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API VpcEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline VpcEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline VpcEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID for your VPC. Amazon Web Services PrivateLink generates this value
     * when you create a VPC.</p>
     */
    inline VpcEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Information about the VPC, including associated subnets and security
     * groups.</p>
     */
    inline const VpcOptions& GetVpcOptions() const{ return m_vpcOptions; }

    /**
     * <p>Information about the VPC, including associated subnets and security
     * groups.</p>
     */
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }

    /**
     * <p>Information about the VPC, including associated subnets and security
     * groups.</p>
     */
    inline void SetVpcOptions(const VpcOptions& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = value; }

    /**
     * <p>Information about the VPC, including associated subnets and security
     * groups.</p>
     */
    inline void SetVpcOptions(VpcOptions&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::move(value); }

    /**
     * <p>Information about the VPC, including associated subnets and security
     * groups.</p>
     */
    inline VpcEndpoint& WithVpcOptions(const VpcOptions& value) { SetVpcOptions(value); return *this;}

    /**
     * <p>Information about the VPC, including associated subnets and security
     * groups.</p>
     */
    inline VpcEndpoint& WithVpcOptions(VpcOptions&& value) { SetVpcOptions(std::move(value)); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    VpcOptions m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
