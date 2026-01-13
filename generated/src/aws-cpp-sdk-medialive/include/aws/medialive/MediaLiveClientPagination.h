/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/medialive/MediaLiveClient.h>
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

namespace Aws {
namespace MediaLive {

using DescribeSchedulePaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::DescribeScheduleRequest,
                                                                    Pagination::DescribeSchedulePaginationTraits<MediaLiveClient>>;
using ListAlertsPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListAlertsRequest, Pagination::ListAlertsPaginationTraits<MediaLiveClient>>;
using ListChannelPlacementGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListChannelPlacementGroupsRequest,
                                      Pagination::ListChannelPlacementGroupsPaginationTraits<MediaLiveClient>>;
using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<MediaLiveClient>>;
using ListCloudWatchAlarmTemplateGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListCloudWatchAlarmTemplateGroupsRequest,
                                      Pagination::ListCloudWatchAlarmTemplateGroupsPaginationTraits<MediaLiveClient>>;
using ListCloudWatchAlarmTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListCloudWatchAlarmTemplatesRequest,
                                      Pagination::ListCloudWatchAlarmTemplatesPaginationTraits<MediaLiveClient>>;
using ListClusterAlertsPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListClusterAlertsRequest,
                                                                     Pagination::ListClusterAlertsPaginationTraits<MediaLiveClient>>;
using ListClustersPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListClustersRequest,
                                                                Pagination::ListClustersPaginationTraits<MediaLiveClient>>;
using ListEventBridgeRuleTemplateGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListEventBridgeRuleTemplateGroupsRequest,
                                      Pagination::ListEventBridgeRuleTemplateGroupsPaginationTraits<MediaLiveClient>>;
using ListEventBridgeRuleTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListEventBridgeRuleTemplatesRequest,
                                      Pagination::ListEventBridgeRuleTemplatesPaginationTraits<MediaLiveClient>>;
using ListInputDevicesPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListInputDevicesRequest,
                                                                    Pagination::ListInputDevicesPaginationTraits<MediaLiveClient>>;
using ListInputDeviceTransfersPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListInputDeviceTransfersRequest,
                                      Pagination::ListInputDeviceTransfersPaginationTraits<MediaLiveClient>>;
using ListInputsPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListInputsRequest, Pagination::ListInputsPaginationTraits<MediaLiveClient>>;
using ListInputSecurityGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListInputSecurityGroupsRequest,
                                      Pagination::ListInputSecurityGroupsPaginationTraits<MediaLiveClient>>;
using ListMultiplexAlertsPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListMultiplexAlertsRequest,
                                                                       Pagination::ListMultiplexAlertsPaginationTraits<MediaLiveClient>>;
using ListMultiplexesPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListMultiplexesRequest,
                                                                   Pagination::ListMultiplexesPaginationTraits<MediaLiveClient>>;
using ListMultiplexProgramsPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListMultiplexProgramsRequest,
                                      Pagination::ListMultiplexProgramsPaginationTraits<MediaLiveClient>>;
using ListNetworksPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListNetworksRequest,
                                                                Pagination::ListNetworksPaginationTraits<MediaLiveClient>>;
using ListNodesPaginator =
    Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<MediaLiveClient>>;
using ListOfferingsPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListOfferingsRequest,
                                                                 Pagination::ListOfferingsPaginationTraits<MediaLiveClient>>;
using ListReservationsPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListReservationsRequest,
                                                                    Pagination::ListReservationsPaginationTraits<MediaLiveClient>>;
using ListSdiSourcesPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListSdiSourcesRequest,
                                                                  Pagination::ListSdiSourcesPaginationTraits<MediaLiveClient>>;
using ListSignalMapsPaginator = Aws::Utils::Pagination::Paginator<MediaLiveClient, Model::ListSignalMapsRequest,
                                                                  Pagination::ListSignalMapsPaginationTraits<MediaLiveClient>>;

}  // namespace MediaLive
}  // namespace Aws
