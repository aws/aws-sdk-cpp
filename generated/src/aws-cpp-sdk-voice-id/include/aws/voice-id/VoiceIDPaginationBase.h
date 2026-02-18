/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/voice-id/model/ListDomainsPaginationTraits.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsPaginationTraits.h>
#include <aws/voice-id/model/ListFraudstersPaginationTraits.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsPaginationTraits.h>
#include <aws/voice-id/model/ListSpeakersPaginationTraits.h>
#include <aws/voice-id/model/ListWatchlistsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace VoiceID {

class VoiceIDClient;

template <typename DerivedClient>
class VoiceIDPaginationBase {
 public:
  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListFraudsterRegistrationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFraudsterRegistrationJobsRequest,
                                    Pagination::ListFraudsterRegistrationJobsPaginationTraits<DerivedClient>>
  ListFraudsterRegistrationJobsPaginator(const Model::ListFraudsterRegistrationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFraudsterRegistrationJobsRequest,
                                             Pagination::ListFraudsterRegistrationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFraudsters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFraudstersRequest, Pagination::ListFraudstersPaginationTraits<DerivedClient>>
  ListFraudstersPaginator(const Model::ListFraudstersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFraudstersRequest,
                                             Pagination::ListFraudstersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSpeakerEnrollmentJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpeakerEnrollmentJobsRequest,
                                    Pagination::ListSpeakerEnrollmentJobsPaginationTraits<DerivedClient>>
  ListSpeakerEnrollmentJobsPaginator(const Model::ListSpeakerEnrollmentJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpeakerEnrollmentJobsRequest,
                                             Pagination::ListSpeakerEnrollmentJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSpeakers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpeakersRequest, Pagination::ListSpeakersPaginationTraits<DerivedClient>>
  ListSpeakersPaginator(const Model::ListSpeakersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpeakersRequest,
                                             Pagination::ListSpeakersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListWatchlists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWatchlistsRequest, Pagination::ListWatchlistsPaginationTraits<DerivedClient>>
  ListWatchlistsPaginator(const Model::ListWatchlistsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWatchlistsRequest,
                                             Pagination::ListWatchlistsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace VoiceID
}  // namespace Aws
