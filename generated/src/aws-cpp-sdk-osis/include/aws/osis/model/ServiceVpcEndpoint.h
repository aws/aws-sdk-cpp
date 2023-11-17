/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/model/VpcEndpointServiceName.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>A container for information about VPC endpoints that were created to other
   * services</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/ServiceVpcEndpoint">AWS
   * API Reference</a></p>
   */
  class ServiceVpcEndpoint
  {
  public:
    AWS_OSIS_API ServiceVpcEndpoint();
    AWS_OSIS_API ServiceVpcEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API ServiceVpcEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service for which a VPC endpoint was created.</p>
     */
    inline const VpcEndpointServiceName& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service for which a VPC endpoint was created.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service for which a VPC endpoint was created.</p>
     */
    inline void SetServiceName(const VpcEndpointServiceName& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service for which a VPC endpoint was created.</p>
     */
    inline void SetServiceName(VpcEndpointServiceName&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service for which a VPC endpoint was created.</p>
     */
    inline ServiceVpcEndpoint& WithServiceName(const VpcEndpointServiceName& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service for which a VPC endpoint was created.</p>
     */
    inline ServiceVpcEndpoint& WithServiceName(VpcEndpointServiceName&& value) { SetServiceName(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline ServiceVpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline ServiceVpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint that was created.</p>
     */
    inline ServiceVpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}

  private:

    VpcEndpointServiceName m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
