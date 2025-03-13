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
    AWS_STORAGEGATEWAY_API GatewayInfo() = default;
    AWS_STORAGEGATEWAY_API GatewayInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API GatewayInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    GatewayInfo& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    GatewayInfo& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
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
    inline const Aws::String& GetGatewayType() const { return m_gatewayType; }
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }
    template<typename GatewayTypeT = Aws::String>
    void SetGatewayType(GatewayTypeT&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::forward<GatewayTypeT>(value); }
    template<typename GatewayTypeT = Aws::String>
    GatewayInfo& WithGatewayType(GatewayTypeT&& value) { SetGatewayType(std::forward<GatewayTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the gateway.</p> <p>Valid Values: <code>DISABLED</code> |
     * <code>ACTIVE</code> </p>
     */
    inline const Aws::String& GetGatewayOperationalState() const { return m_gatewayOperationalState; }
    inline bool GatewayOperationalStateHasBeenSet() const { return m_gatewayOperationalStateHasBeenSet; }
    template<typename GatewayOperationalStateT = Aws::String>
    void SetGatewayOperationalState(GatewayOperationalStateT&& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = std::forward<GatewayOperationalStateT>(value); }
    template<typename GatewayOperationalStateT = Aws::String>
    GatewayInfo& WithGatewayOperationalState(GatewayOperationalStateT&& value) { SetGatewayOperationalState(std::forward<GatewayOperationalStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const { return m_gatewayName; }
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }
    template<typename GatewayNameT = Aws::String>
    void SetGatewayName(GatewayNameT&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::forward<GatewayNameT>(value); }
    template<typename GatewayNameT = Aws::String>
    GatewayInfo& WithGatewayName(GatewayNameT&& value) { SetGatewayName(std::forward<GatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const { return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    template<typename Ec2InstanceIdT = Aws::String>
    void SetEc2InstanceId(Ec2InstanceIdT&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::forward<Ec2InstanceIdT>(value); }
    template<typename Ec2InstanceIdT = Aws::String>
    GatewayInfo& WithEc2InstanceId(Ec2InstanceIdT&& value) { SetEc2InstanceId(std::forward<Ec2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the Amazon EC2 instance is located.</p>
     */
    inline const Aws::String& GetEc2InstanceRegion() const { return m_ec2InstanceRegion; }
    inline bool Ec2InstanceRegionHasBeenSet() const { return m_ec2InstanceRegionHasBeenSet; }
    template<typename Ec2InstanceRegionT = Aws::String>
    void SetEc2InstanceRegion(Ec2InstanceRegionT&& value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion = std::forward<Ec2InstanceRegionT>(value); }
    template<typename Ec2InstanceRegionT = Aws::String>
    GatewayInfo& WithEc2InstanceRegion(Ec2InstanceRegionT&& value) { SetEc2InstanceRegion(std::forward<Ec2InstanceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hardware or software platform on which the gateway is
     * running.</p>  <p>Tape Gateway is no longer available on Snow Family
     * devices.</p> 
     */
    inline HostEnvironment GetHostEnvironment() const { return m_hostEnvironment; }
    inline bool HostEnvironmentHasBeenSet() const { return m_hostEnvironmentHasBeenSet; }
    inline void SetHostEnvironment(HostEnvironment value) { m_hostEnvironmentHasBeenSet = true; m_hostEnvironment = value; }
    inline GatewayInfo& WithHostEnvironment(HostEnvironment value) { SetHostEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the specific instance of the host platform running
     * the gateway. This value is only available for certain host environments, and its
     * format depends on the host environment type.</p>
     */
    inline const Aws::String& GetHostEnvironmentId() const { return m_hostEnvironmentId; }
    inline bool HostEnvironmentIdHasBeenSet() const { return m_hostEnvironmentIdHasBeenSet; }
    template<typename HostEnvironmentIdT = Aws::String>
    void SetHostEnvironmentId(HostEnvironmentIdT&& value) { m_hostEnvironmentIdHasBeenSet = true; m_hostEnvironmentId = std::forward<HostEnvironmentIdT>(value); }
    template<typename HostEnvironmentIdT = Aws::String>
    GatewayInfo& WithHostEnvironmentId(HostEnvironmentIdT&& value) { SetHostEnvironmentId(std::forward<HostEnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date after which this gateway will not receive software updates for new
     * features and bug fixes.</p>
     */
    inline const Aws::String& GetDeprecationDate() const { return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    template<typename DeprecationDateT = Aws::String>
    void SetDeprecationDate(DeprecationDateT&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::forward<DeprecationDateT>(value); }
    template<typename DeprecationDateT = Aws::String>
    GatewayInfo& WithDeprecationDate(DeprecationDateT&& value) { SetDeprecationDate(std::forward<DeprecationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the software running on the gateway appliance.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const { return m_softwareVersion; }
    inline bool SoftwareVersionHasBeenSet() const { return m_softwareVersionHasBeenSet; }
    template<typename SoftwareVersionT = Aws::String>
    void SetSoftwareVersion(SoftwareVersionT&& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = std::forward<SoftwareVersionT>(value); }
    template<typename SoftwareVersionT = Aws::String>
    GatewayInfo& WithSoftwareVersion(SoftwareVersionT&& value) { SetSoftwareVersion(std::forward<SoftwareVersionT>(value)); return *this;}
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

    HostEnvironment m_hostEnvironment{HostEnvironment::NOT_SET};
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
