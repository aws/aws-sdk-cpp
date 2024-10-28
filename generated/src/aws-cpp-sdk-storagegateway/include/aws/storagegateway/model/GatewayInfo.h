/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/HostEnvironment.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a gateway object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/GatewayInfo">AWS
   * API Reference</a></p>
   */
  class GatewayInfo
  {
  public:
    AWS_STORAGEGATEWAY_API GatewayInfo();
    AWS_STORAGEGATEWAY_API GatewayInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API GatewayInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }
    inline GatewayInfo& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline GatewayInfo& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline GatewayInfo& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline GatewayInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline GatewayInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline GatewayInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the gateway.</p>  <p>Amazon FSx File Gateway is no
     * longer available to new customers. Existing customers of FSx File Gateway can
     * continue to use the service normally. For capabilities similar to FSx File
     * Gateway, visit <a
     * href="https://aws.amazon.com/blogs/storage/switch-your-file-share-access-from-amazon-fsx-file-gateway-to-amazon-fsx-for-windows-file-server/">this
     * blog post</a>.</p> 
     */
    inline const Aws::String& GetGatewayType() const{ return m_gatewayType; }
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }
    inline void SetGatewayType(const Aws::String& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }
    inline void SetGatewayType(Aws::String&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::move(value); }
    inline void SetGatewayType(const char* value) { m_gatewayTypeHasBeenSet = true; m_gatewayType.assign(value); }
    inline GatewayInfo& WithGatewayType(const Aws::String& value) { SetGatewayType(value); return *this;}
    inline GatewayInfo& WithGatewayType(Aws::String&& value) { SetGatewayType(std::move(value)); return *this;}
    inline GatewayInfo& WithGatewayType(const char* value) { SetGatewayType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the gateway.</p> <p>Valid Values: <code>DISABLED</code> |
     * <code>ACTIVE</code> </p>
     */
    inline const Aws::String& GetGatewayOperationalState() const{ return m_gatewayOperationalState; }
    inline bool GatewayOperationalStateHasBeenSet() const { return m_gatewayOperationalStateHasBeenSet; }
    inline void SetGatewayOperationalState(const Aws::String& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = value; }
    inline void SetGatewayOperationalState(Aws::String&& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = std::move(value); }
    inline void SetGatewayOperationalState(const char* value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState.assign(value); }
    inline GatewayInfo& WithGatewayOperationalState(const Aws::String& value) { SetGatewayOperationalState(value); return *this;}
    inline GatewayInfo& WithGatewayOperationalState(Aws::String&& value) { SetGatewayOperationalState(std::move(value)); return *this;}
    inline GatewayInfo& WithGatewayOperationalState(const char* value) { SetGatewayOperationalState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::move(value); }
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }
    inline GatewayInfo& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}
    inline GatewayInfo& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}
    inline GatewayInfo& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }
    inline GatewayInfo& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}
    inline GatewayInfo& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}
    inline GatewayInfo& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the Amazon EC2 instance is located.</p>
     */
    inline const Aws::String& GetEc2InstanceRegion() const{ return m_ec2InstanceRegion; }
    inline bool Ec2InstanceRegionHasBeenSet() const { return m_ec2InstanceRegionHasBeenSet; }
    inline void SetEc2InstanceRegion(const Aws::String& value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion = value; }
    inline void SetEc2InstanceRegion(Aws::String&& value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion = std::move(value); }
    inline void SetEc2InstanceRegion(const char* value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion.assign(value); }
    inline GatewayInfo& WithEc2InstanceRegion(const Aws::String& value) { SetEc2InstanceRegion(value); return *this;}
    inline GatewayInfo& WithEc2InstanceRegion(Aws::String&& value) { SetEc2InstanceRegion(std::move(value)); return *this;}
    inline GatewayInfo& WithEc2InstanceRegion(const char* value) { SetEc2InstanceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hardware or software platform on which the gateway is
     * running.</p>  <p>Tape Gateway is no longer available on Snow Family
     * devices.</p> 
     */
    inline const HostEnvironment& GetHostEnvironment() const{ return m_hostEnvironment; }
    inline bool HostEnvironmentHasBeenSet() const { return m_hostEnvironmentHasBeenSet; }
    inline void SetHostEnvironment(const HostEnvironment& value) { m_hostEnvironmentHasBeenSet = true; m_hostEnvironment = value; }
    inline void SetHostEnvironment(HostEnvironment&& value) { m_hostEnvironmentHasBeenSet = true; m_hostEnvironment = std::move(value); }
    inline GatewayInfo& WithHostEnvironment(const HostEnvironment& value) { SetHostEnvironment(value); return *this;}
    inline GatewayInfo& WithHostEnvironment(HostEnvironment&& value) { SetHostEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the specific instance of the host platform running
     * the gateway. This value is only available for certain host environments, and its
     * format depends on the host environment type.</p>
     */
    inline const Aws::String& GetHostEnvironmentId() const{ return m_hostEnvironmentId; }
    inline bool HostEnvironmentIdHasBeenSet() const { return m_hostEnvironmentIdHasBeenSet; }
    inline void SetHostEnvironmentId(const Aws::String& value) { m_hostEnvironmentIdHasBeenSet = true; m_hostEnvironmentId = value; }
    inline void SetHostEnvironmentId(Aws::String&& value) { m_hostEnvironmentIdHasBeenSet = true; m_hostEnvironmentId = std::move(value); }
    inline void SetHostEnvironmentId(const char* value) { m_hostEnvironmentIdHasBeenSet = true; m_hostEnvironmentId.assign(value); }
    inline GatewayInfo& WithHostEnvironmentId(const Aws::String& value) { SetHostEnvironmentId(value); return *this;}
    inline GatewayInfo& WithHostEnvironmentId(Aws::String&& value) { SetHostEnvironmentId(std::move(value)); return *this;}
    inline GatewayInfo& WithHostEnvironmentId(const char* value) { SetHostEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date after which this gateway will not receive software updates for new
     * features and bug fixes.</p>
     */
    inline const Aws::String& GetDeprecationDate() const{ return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    inline void SetDeprecationDate(const Aws::String& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }
    inline void SetDeprecationDate(Aws::String&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::move(value); }
    inline void SetDeprecationDate(const char* value) { m_deprecationDateHasBeenSet = true; m_deprecationDate.assign(value); }
    inline GatewayInfo& WithDeprecationDate(const Aws::String& value) { SetDeprecationDate(value); return *this;}
    inline GatewayInfo& WithDeprecationDate(Aws::String&& value) { SetDeprecationDate(std::move(value)); return *this;}
    inline GatewayInfo& WithDeprecationDate(const char* value) { SetDeprecationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the software running on the gateway appliance.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const{ return m_softwareVersion; }
    inline bool SoftwareVersionHasBeenSet() const { return m_softwareVersionHasBeenSet; }
    inline void SetSoftwareVersion(const Aws::String& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = value; }
    inline void SetSoftwareVersion(Aws::String&& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = std::move(value); }
    inline void SetSoftwareVersion(const char* value) { m_softwareVersionHasBeenSet = true; m_softwareVersion.assign(value); }
    inline GatewayInfo& WithSoftwareVersion(const Aws::String& value) { SetSoftwareVersion(value); return *this;}
    inline GatewayInfo& WithSoftwareVersion(Aws::String&& value) { SetSoftwareVersion(std::move(value)); return *this;}
    inline GatewayInfo& WithSoftwareVersion(const char* value) { SetSoftwareVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_gatewayType;
    bool m_gatewayTypeHasBeenSet = false;

    Aws::String m_gatewayOperationalState;
    bool m_gatewayOperationalStateHasBeenSet = false;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::String m_ec2InstanceRegion;
    bool m_ec2InstanceRegionHasBeenSet = false;

    HostEnvironment m_hostEnvironment;
    bool m_hostEnvironmentHasBeenSet = false;

    Aws::String m_hostEnvironmentId;
    bool m_hostEnvironmentIdHasBeenSet = false;

    Aws::String m_deprecationDate;
    bool m_deprecationDateHasBeenSet = false;

    Aws::String m_softwareVersion;
    bool m_softwareVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
