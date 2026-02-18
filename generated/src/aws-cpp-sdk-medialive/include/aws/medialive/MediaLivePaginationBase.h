/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/medialive/model/DescribeSchedulePaginationTraits.h>
#include <aws/medialive/model/ListAlertsPaginationTraits.h>
#include <aws/medialive/model/ListChannelPlacementGroupsPaginationTraits.h>
#include <aws/medialive/model/ListChannelsPaginationTraits.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplateGroupsPaginationTraits.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesPaginationTraits.h>
#include <aws/medialive/model/ListClusterAlertsPaginationTraits.h>
#include <aws/medialive/model/ListClustersPaginationTraits.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplateGroupsPaginationTraits.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplatesPaginationTraits.h>
#include <aws/medialive/model/ListInputDeviceTransfersPaginationTraits.h>
#include <aws/medialive/model/ListInputDevicesPaginationTraits.h>
#include <aws/medialive/model/ListInputSecurityGroupsPaginationTraits.h>
#include <aws/medialive/model/ListInputsPaginationTraits.h>
#include <aws/medialive/model/ListMultiplexAlertsPaginationTraits.h>
#include <aws/medialive/model/ListMultiplexProgramsPaginationTraits.h>
#include <aws/medialive/model/ListMultiplexesPaginationTraits.h>
#include <aws/medialive/model/ListNetworksPaginationTraits.h>
#include <aws/medialive/model/ListNodesPaginationTraits.h>
#include <aws/medialive/model/ListOfferingsPaginationTraits.h>
#include <aws/medialive/model/ListReservationsPaginationTraits.h>
#include <aws/medialive/model/ListSdiSourcesPaginationTraits.h>
#include <aws/medialive/model/ListSignalMapsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MediaLive {

class MediaLiveClient;

template <typename DerivedClient>
class MediaLivePaginationBase {
 public:
  /**
   * Create a paginator for DescribeSchedule operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduleRequest,
                                    Pagination::DescribeSchedulePaginationTraits<DerivedClient>>
  DescribeSchedulePaginator(const Model::DescribeScheduleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduleRequest,
                                             Pagination::DescribeSchedulePaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAlerts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlertsRequest, Pagination::ListAlertsPaginationTraits<DerivedClient>>
  ListAlertsPaginator(const Model::ListAlertsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlertsRequest,
                                             Pagination::ListAlertsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListChannelPlacementGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelPlacementGroupsRequest,
                                    Pagination::ListChannelPlacementGroupsPaginationTraits<DerivedClient>>
  ListChannelPlacementGroupsPaginator(const Model::ListChannelPlacementGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelPlacementGroupsRequest,
                                             Pagination::ListChannelPlacementGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<DerivedClient>>
  ListChannelsPaginator(const Model::ListChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest,
                                             Pagination::ListChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCloudWatchAlarmTemplateGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudWatchAlarmTemplateGroupsRequest,
                                    Pagination::ListCloudWatchAlarmTemplateGroupsPaginationTraits<DerivedClient>>
  ListCloudWatchAlarmTemplateGroupsPaginator(const Model::ListCloudWatchAlarmTemplateGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudWatchAlarmTemplateGroupsRequest,
                                             Pagination::ListCloudWatchAlarmTemplateGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCloudWatchAlarmTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudWatchAlarmTemplatesRequest,
                                    Pagination::ListCloudWatchAlarmTemplatesPaginationTraits<DerivedClient>>
  ListCloudWatchAlarmTemplatesPaginator(const Model::ListCloudWatchAlarmTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudWatchAlarmTemplatesRequest,
                                             Pagination::ListCloudWatchAlarmTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusterAlerts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterAlertsRequest,
                                    Pagination::ListClusterAlertsPaginationTraits<DerivedClient>>
  ListClusterAlertsPaginator(const Model::ListClusterAlertsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterAlertsRequest,
                                             Pagination::ListClusterAlertsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEventBridgeRuleTemplateGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventBridgeRuleTemplateGroupsRequest,
                                    Pagination::ListEventBridgeRuleTemplateGroupsPaginationTraits<DerivedClient>>
  ListEventBridgeRuleTemplateGroupsPaginator(const Model::ListEventBridgeRuleTemplateGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventBridgeRuleTemplateGroupsRequest,
                                             Pagination::ListEventBridgeRuleTemplateGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventBridgeRuleTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventBridgeRuleTemplatesRequest,
                                    Pagination::ListEventBridgeRuleTemplatesPaginationTraits<DerivedClient>>
  ListEventBridgeRuleTemplatesPaginator(const Model::ListEventBridgeRuleTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventBridgeRuleTemplatesRequest,
                                             Pagination::ListEventBridgeRuleTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInputDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputDevicesRequest,
                                    Pagination::ListInputDevicesPaginationTraits<DerivedClient>>
  ListInputDevicesPaginator(const Model::ListInputDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputDevicesRequest,
                                             Pagination::ListInputDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListInputDeviceTransfers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputDeviceTransfersRequest,
                                    Pagination::ListInputDeviceTransfersPaginationTraits<DerivedClient>>
  ListInputDeviceTransfersPaginator(const Model::ListInputDeviceTransfersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputDeviceTransfersRequest,
                                             Pagination::ListInputDeviceTransfersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInputs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputsRequest, Pagination::ListInputsPaginationTraits<DerivedClient>>
  ListInputsPaginator(const Model::ListInputsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputsRequest,
                                             Pagination::ListInputsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListInputSecurityGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputSecurityGroupsRequest,
                                    Pagination::ListInputSecurityGroupsPaginationTraits<DerivedClient>>
  ListInputSecurityGroupsPaginator(const Model::ListInputSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputSecurityGroupsRequest,
                                             Pagination::ListInputSecurityGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMultiplexAlerts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiplexAlertsRequest,
                                    Pagination::ListMultiplexAlertsPaginationTraits<DerivedClient>>
  ListMultiplexAlertsPaginator(const Model::ListMultiplexAlertsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiplexAlertsRequest,
                                             Pagination::ListMultiplexAlertsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMultiplexes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiplexesRequest,
                                    Pagination::ListMultiplexesPaginationTraits<DerivedClient>>
  ListMultiplexesPaginator(const Model::ListMultiplexesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiplexesRequest,
                                             Pagination::ListMultiplexesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListMultiplexPrograms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiplexProgramsRequest,
                                    Pagination::ListMultiplexProgramsPaginationTraits<DerivedClient>>
  ListMultiplexProgramsPaginator(const Model::ListMultiplexProgramsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiplexProgramsRequest,
                                             Pagination::ListMultiplexProgramsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworksRequest, Pagination::ListNetworksPaginationTraits<DerivedClient>>
  ListNetworksPaginator(const Model::ListNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworksRequest,
                                             Pagination::ListNetworksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>
  ListNodesPaginator(const Model::ListNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingsRequest, Pagination::ListOfferingsPaginationTraits<DerivedClient>>
  ListOfferingsPaginator(const Model::ListOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingsRequest,
                                             Pagination::ListOfferingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListReservations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationsRequest,
                                    Pagination::ListReservationsPaginationTraits<DerivedClient>>
  ListReservationsPaginator(const Model::ListReservationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationsRequest,
                                             Pagination::ListReservationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListSdiSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSdiSourcesRequest, Pagination::ListSdiSourcesPaginationTraits<DerivedClient>>
  ListSdiSourcesPaginator(const Model::ListSdiSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSdiSourcesRequest,
                                             Pagination::ListSdiSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSignalMaps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalMapsRequest, Pagination::ListSignalMapsPaginationTraits<DerivedClient>>
  ListSignalMapsPaginator(const Model::ListSignalMapsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalMapsRequest,
                                             Pagination::ListSignalMapsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace MediaLive
}  // namespace Aws
