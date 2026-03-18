/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/model/HeadBucketRequest.h>
#include <aws/s3-crt/model/HeadBucketResult.h>
#include <aws/s3-crt/model/HeadObjectRequest.h>
#include <aws/s3-crt/model/HeadObjectResult.h>

#include <algorithm>

namespace Aws {
namespace S3Crt {

template <typename DerivedClient = S3CrtClient>
class S3CrtWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::HeadBucketOutcome> WaitUntilBucketExists(const Model::HeadBucketRequest& request) {
    using OutcomeT = Model::HeadBucketOutcome;
    using RequestT = Model::HeadBucketRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("BucketExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::StatusAcceptor<OutcomeT>>("BucketExistsWaiter", Aws::Utils::WaiterState::RETRY, 404));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->HeadBucket(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilBucketExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::HeadBucketOutcome> WaitUntilBucketNotExists(const Model::HeadBucketRequest& request) {
    using OutcomeT = Model::HeadBucketOutcome;
    using RequestT = Model::HeadBucketRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::StatusAcceptor<OutcomeT>>("BucketNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS, 404));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->HeadBucket(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilBucketNotExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::HeadObjectOutcome> WaitUntilObjectExists(const Model::HeadObjectRequest& request) {
    using OutcomeT = Model::HeadObjectOutcome;
    using RequestT = Model::HeadObjectRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ObjectExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::StatusAcceptor<OutcomeT>>("ObjectExistsWaiter", Aws::Utils::WaiterState::RETRY, 404));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->HeadObject(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilObjectExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::HeadObjectOutcome> WaitUntilObjectNotExists(const Model::HeadObjectRequest& request) {
    using OutcomeT = Model::HeadObjectOutcome;
    using RequestT = Model::HeadObjectRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::StatusAcceptor<OutcomeT>>("ObjectNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS, 404));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->HeadObject(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilObjectNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace S3Crt
}  // namespace Aws
