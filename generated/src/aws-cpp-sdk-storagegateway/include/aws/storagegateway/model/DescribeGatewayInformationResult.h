/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/HostEnvironment.h>
#include <aws/storagegateway/model/GatewayCapacity.h>
#include <aws/storagegateway/model/NetworkInterface.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeGatewayInformationOutput">AWS
   * API Reference</a></p>
   */
  class DescribeGatewayInformationResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeGatewayInformationResult() = default;
    AWS_STORAGEGATEWAY_API DescribeGatewayInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeGatewayInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeGatewayInformationResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    DescribeGatewayInformationResult& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const { return m_gatewayName; }
    template<typename GatewayNameT = Aws::String>
    void SetGatewayName(GatewayNameT&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::forward<GatewayNameT>(value); }
    template<typename GatewayNameT = Aws::String>
    DescribeGatewayInformationResult& WithGatewayName(GatewayNameT&& value) { SetGatewayName(std::forward<GatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline const Aws::String& GetGatewayTimezone() const { return m_gatewayTimezone; }
    template<typename GatewayTimezoneT = Aws::String>
    void SetGatewayTimezone(GatewayTimezoneT&& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = std::forward<GatewayTimezoneT>(value); }
    template<typename GatewayTimezoneT = Aws::String>
    DescribeGatewayInformationResult& WithGatewayTimezone(GatewayTimezoneT&& value) { SetGatewayTimezone(std::forward<GatewayTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline const Aws::String& GetGatewayState() const { return m_gatewayState; }
    template<typename GatewayStateT = Aws::String>
    void SetGatewayState(GatewayStateT&& value) { m_gatewayStateHasBeenSet = true; m_gatewayState = std::forward<GatewayStateT>(value); }
    template<typename GatewayStateT = Aws::String>
    DescribeGatewayInformationResult& WithGatewayState(GatewayStateT&& value) { SetGatewayState(std::forward<GatewayStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetGatewayNetworkInterfaces() const { return m_gatewayNetworkInterfaces; }
    template<typename GatewayNetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetGatewayNetworkInterfaces(GatewayNetworkInterfacesT&& value) { m_gatewayNetworkInterfacesHasBeenSet = true; m_gatewayNetworkInterfaces = std::forward<GatewayNetworkInterfacesT>(value); }
    template<typename GatewayNetworkInterfacesT = Aws::Vector<NetworkInterface>>
    DescribeGatewayInformationResult& WithGatewayNetworkInterfaces(GatewayNetworkInterfacesT&& value) { SetGatewayNetworkInterfaces(std::forward<GatewayNetworkInterfacesT>(value)); return *this;}
    template<typename GatewayNetworkInterfacesT = NetworkInterface>
    DescribeGatewayInformationResult& AddGatewayNetworkInterfaces(GatewayNetworkInterfacesT&& value) { m_gatewayNetworkInterfacesHasBeenSet = true; m_gatewayNetworkInterfaces.emplace_back(std::forward<GatewayNetworkInterfacesT>(value)); return *this; }
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
    template<typename GatewayTypeT = Aws::String>
    void SetGatewayType(GatewayTypeT&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::forward<GatewayTypeT>(value); }
    template<typename GatewayTypeT = Aws::String>
    DescribeGatewayInformationResult& WithGatewayType(GatewayTypeT&& value) { SetGatewayType(std::forward<GatewayTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline const Aws::String& GetNextUpdateAvailabilityDate() const { return m_nextUpdateAvailabilityDate; }
    template<typename NextUpdateAvailabilityDateT = Aws::String>
    void SetNextUpdateAvailabilityDate(NextUpdateAvailabilityDateT&& value) { m_nextUpdateAvailabilityDateHasBeenSet = true; m_nextUpdateAvailabilityDate = std::forward<NextUpdateAvailabilityDateT>(value); }
    template<typename NextUpdateAvailabilityDateT = Aws::String>
    DescribeGatewayInformationResult& WithNextUpdateAvailabilityDate(NextUpdateAvailabilityDateT&& value) { SetNextUpdateAvailabilityDate(std::forward<NextUpdateAvailabilityDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response. This only only exist and returns once it have been chosen and set by
     * the SGW service, based on the OS version of the gateway VM</p>
     */
    inline const Aws::String& GetLastSoftwareUpdate() const { return m_lastSoftwareUpdate; }
    template<typename LastSoftwareUpdateT = Aws::String>
    void SetLastSoftwareUpdate(LastSoftwareUpdateT&& value) { m_lastSoftwareUpdateHasBeenSet = true; m_lastSoftwareUpdate = std::forward<LastSoftwareUpdateT>(value); }
    template<typename LastSoftwareUpdateT = Aws::String>
    DescribeGatewayInformationResult& WithLastSoftwareUpdate(LastSoftwareUpdateT&& value) { SetLastSoftwareUpdate(std::forward<LastSoftwareUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const { return m_ec2InstanceId; }
    template<typename Ec2InstanceIdT = Aws::String>
    void SetEc2InstanceId(Ec2InstanceIdT&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::forward<Ec2InstanceIdT>(value); }
    template<typename Ec2InstanceIdT = Aws::String>
    DescribeGatewayInformationResult& WithEc2InstanceId(Ec2InstanceIdT&& value) { SetEc2InstanceId(std::forward<Ec2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the Amazon EC2 instance is located.</p>
     */
    inline const Aws::String& GetEc2InstanceRegion() const { return m_ec2InstanceRegion; }
    template<typename Ec2InstanceRegionT = Aws::String>
    void SetEc2InstanceRegion(Ec2InstanceRegionT&& value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion = std::forward<Ec2InstanceRegionT>(value); }
    template<typename Ec2InstanceRegionT = Aws::String>
    DescribeGatewayInformationResult& WithEc2InstanceRegion(Ec2InstanceRegionT&& value) { SetEc2InstanceRegion(std::forward<Ec2InstanceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags assigned to the gateway, sorted alphabetically by key
     * name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribeGatewayInformationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribeGatewayInformationResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the virtual private cloud (VPC) endpoint for
     * your gateway.</p>
     */
    inline const Aws::String& GetVPCEndpoint() const { return m_vPCEndpoint; }
    template<typename VPCEndpointT = Aws::String>
    void SetVPCEndpoint(VPCEndpointT&& value) { m_vPCEndpointHasBeenSet = true; m_vPCEndpoint = std::forward<VPCEndpointT>(value); }
    template<typename VPCEndpointT = Aws::String>
    DescribeGatewayInformationResult& WithVPCEndpoint(VPCEndpointT&& value) { SetVPCEndpoint(std::forward<VPCEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor events in the gateway. This field only only exist and returns
     * once it have been chosen and set by the SGW service, based on the OS version of
     * the gateway VM</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupARN() const { return m_cloudWatchLogGroupARN; }
    template<typename CloudWatchLogGroupARNT = Aws::String>
    void SetCloudWatchLogGroupARN(CloudWatchLogGroupARNT&& value) { m_cloudWatchLogGroupARNHasBeenSet = true; m_cloudWatchLogGroupARN = std::forward<CloudWatchLogGroupARNT>(value); }
    template<typename CloudWatchLogGroupARNT = Aws::String>
    DescribeGatewayInformationResult& WithCloudWatchLogGroupARN(CloudWatchLogGroupARNT&& value) { SetCloudWatchLogGroupARN(std::forward<CloudWatchLogGroupARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hardware or software platform on which the gateway is
     * running.</p>  <p>Tape Gateway is no longer available on Snow Family
     * devices.</p> 
     */
    inline HostEnvironment GetHostEnvironment() const { return m_hostEnvironment; }
    inline void SetHostEnvironment(HostEnvironment value) { m_hostEnvironmentHasBeenSet = true; m_hostEnvironment = value; }
    inline DescribeGatewayInformationResult& WithHostEnvironment(HostEnvironment value) { SetHostEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint for your gateway.</p> <p>Valid Values:
     * <code>STANDARD</code> | <code>FIPS</code> </p>
     */
    inline const Aws::String& GetEndpointType() const { return m_endpointType; }
    template<typename EndpointTypeT = Aws::String>
    void SetEndpointType(EndpointTypeT&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::forward<EndpointTypeT>(value); }
    template<typename EndpointTypeT = Aws::String>
    DescribeGatewayInformationResult& WithEndpointType(EndpointTypeT&& value) { SetEndpointType(std::forward<EndpointTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date after which this gateway will not receive software updates for new
     * features.</p>
     */
    inline const Aws::String& GetSoftwareUpdatesEndDate() const { return m_softwareUpdatesEndDate; }
    template<typename SoftwareUpdatesEndDateT = Aws::String>
    void SetSoftwareUpdatesEndDate(SoftwareUpdatesEndDateT&& value) { m_softwareUpdatesEndDateHasBeenSet = true; m_softwareUpdatesEndDate = std::forward<SoftwareUpdatesEndDateT>(value); }
    template<typename SoftwareUpdatesEndDateT = Aws::String>
    DescribeGatewayInformationResult& WithSoftwareUpdatesEndDate(SoftwareUpdatesEndDateT&& value) { SetSoftwareUpdatesEndDate(std::forward<SoftwareUpdatesEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date after which this gateway will not receive software updates for new
     * features and bug fixes.</p>
     */
    inline const Aws::String& GetDeprecationDate() const { return m_deprecationDate; }
    template<typename DeprecationDateT = Aws::String>
    void SetDeprecationDate(DeprecationDateT&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::forward<DeprecationDateT>(value); }
    template<typename DeprecationDateT = Aws::String>
    DescribeGatewayInformationResult& WithDeprecationDate(DeprecationDateT&& value) { SetDeprecationDate(std::forward<DeprecationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline GatewayCapacity GetGatewayCapacity() const { return m_gatewayCapacity; }
    inline void SetGatewayCapacity(GatewayCapacity value) { m_gatewayCapacityHasBeenSet = true; m_gatewayCapacity = value; }
    inline DescribeGatewayInformationResult& WithGatewayCapacity(GatewayCapacity value) { SetGatewayCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the metadata cache sizes that the gateway can support based on its
     * current hardware specifications.</p>
     */
    inline const Aws::Vector<GatewayCapacity>& GetSupportedGatewayCapacities() const { return m_supportedGatewayCapacities; }
    template<typename SupportedGatewayCapacitiesT = Aws::Vector<GatewayCapacity>>
    void SetSupportedGatewayCapacities(SupportedGatewayCapacitiesT&& value) { m_supportedGatewayCapacitiesHasBeenSet = true; m_supportedGatewayCapacities = std::forward<SupportedGatewayCapacitiesT>(value); }
    template<typename SupportedGatewayCapacitiesT = Aws::Vector<GatewayCapacity>>
    DescribeGatewayInformationResult& WithSupportedGatewayCapacities(SupportedGatewayCapacitiesT&& value) { SetSupportedGatewayCapacities(std::forward<SupportedGatewayCapacitiesT>(value)); return *this;}
    inline DescribeGatewayInformationResult& AddSupportedGatewayCapacities(GatewayCapacity value) { m_supportedGatewayCapacitiesHasBeenSet = true; m_supportedGatewayCapacities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the specific instance of the host platform running
     * the gateway. This value is only available for certain host environments, and its
     * format depends on the host environment type.</p>
     */
    inline const Aws::String& GetHostEnvironmentId() const { return m_hostEnvironmentId; }
    template<typename HostEnvironmentIdT = Aws::String>
    void SetHostEnvironmentId(HostEnvironmentIdT&& value) { m_hostEnvironmentIdHasBeenSet = true; m_hostEnvironmentId = std::forward<HostEnvironmentIdT>(value); }
    template<typename HostEnvironmentIdT = Aws::String>
    DescribeGatewayInformationResult& WithHostEnvironmentId(HostEnvironmentIdT&& value) { SetHostEnvironmentId(std::forward<HostEnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the software running on the gateway appliance.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const { return m_softwareVersion; }
    template<typename SoftwareVersionT = Aws::String>
    void SetSoftwareVersion(SoftwareVersionT&& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = std::forward<SoftwareVersionT>(value); }
    template<typename SoftwareVersionT = Aws::String>
    DescribeGatewayInformationResult& WithSoftwareVersion(SoftwareVersionT&& value) { SetSoftwareVersion(std::forward<SoftwareVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGatewayInformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet = false;

    Aws::String m_gatewayTimezone;
    bool m_gatewayTimezoneHasBeenSet = false;

    Aws::String m_gatewayState;
    bool m_gatewayStateHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_gatewayNetworkInterfaces;
    bool m_gatewayNetworkInterfacesHasBeenSet = false;

    Aws::String m_gatewayType;
    bool m_gatewayTypeHasBeenSet = false;

    Aws::String m_nextUpdateAvailabilityDate;
    bool m_nextUpdateAvailabilityDateHasBeenSet = false;

    Aws::String m_lastSoftwareUpdate;
    bool m_lastSoftwareUpdateHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::String m_ec2InstanceRegion;
    bool m_ec2InstanceRegionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vPCEndpoint;
    bool m_vPCEndpointHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupARN;
    bool m_cloudWatchLogGroupARNHasBeenSet = false;

    HostEnvironment m_hostEnvironment{HostEnvironment::NOT_SET};
    bool m_hostEnvironmentHasBeenSet = false;

    Aws::String m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_softwareUpdatesEndDate;
    bool m_softwareUpdatesEndDateHasBeenSet = false;

    Aws::String m_deprecationDate;
    bool m_deprecationDateHasBeenSet = false;

    GatewayCapacity m_gatewayCapacity{GatewayCapacity::NOT_SET};
    bool m_gatewayCapacityHasBeenSet = false;

    Aws::Vector<GatewayCapacity> m_supportedGatewayCapacities;
    bool m_supportedGatewayCapacitiesHasBeenSet = false;

    Aws::String m_hostEnvironmentId;
    bool m_hostEnvironmentIdHasBeenSet = false;

    Aws::String m_softwareVersion;
    bool m_softwareVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
