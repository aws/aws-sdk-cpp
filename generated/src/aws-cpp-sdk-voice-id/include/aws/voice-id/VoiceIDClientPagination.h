/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/voice-id/VoiceIDClient.h>
#include <aws/voice-id/model/ListDomainsPaginationTraits.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsPaginationTraits.h>
#include <aws/voice-id/model/ListFraudstersPaginationTraits.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsPaginationTraits.h>
#include <aws/voice-id/model/ListSpeakersPaginationTraits.h>
#include <aws/voice-id/model/ListWatchlistsPaginationTraits.h>

namespace Aws {
namespace VoiceID {

using ListDomainsPaginator =
    Aws::Utils::Pagination::Paginator<VoiceIDClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<VoiceIDClient>>;
using ListFraudsterRegistrationJobsPaginator =
    Aws::Utils::Pagination::Paginator<VoiceIDClient, Model::ListFraudsterRegistrationJobsRequest,
                                      Pagination::ListFraudsterRegistrationJobsPaginationTraits<VoiceIDClient>>;
using ListFraudstersPaginator = Aws::Utils::Pagination::Paginator<VoiceIDClient, Model::ListFraudstersRequest,
                                                                  Pagination::ListFraudstersPaginationTraits<VoiceIDClient>>;
using ListSpeakerEnrollmentJobsPaginator =
    Aws::Utils::Pagination::Paginator<VoiceIDClient, Model::ListSpeakerEnrollmentJobsRequest,
                                      Pagination::ListSpeakerEnrollmentJobsPaginationTraits<VoiceIDClient>>;
using ListSpeakersPaginator =
    Aws::Utils::Pagination::Paginator<VoiceIDClient, Model::ListSpeakersRequest, Pagination::ListSpeakersPaginationTraits<VoiceIDClient>>;
using ListWatchlistsPaginator = Aws::Utils::Pagination::Paginator<VoiceIDClient, Model::ListWatchlistsRequest,
                                                                  Pagination::ListWatchlistsPaginationTraits<VoiceIDClient>>;

}  // namespace VoiceID
}  // namespace Aws
