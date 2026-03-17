/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/HeadBucketResult.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/HeadObjectResult.h>

#include <algorithm>

namespace Aws {
namespace S3 {

template <typename DerivedClient = S3Client>
class S3Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::HeadBucketOutcome> WaitUntilBucketExists(const Model::HeadBucketRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::HeadBucketOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::STATUS, 404});

    auto operation = [this](const Model::HeadBucketRequest& req) { return static_cast<DerivedClient*>(this)->HeadBucket(req); };
    Aws::Utils::Waiter<Model::HeadBucketRequest, Model::HeadBucketOutcome> waiter(5, 24, acceptors, operation, "WaitUntilBucketExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::HeadBucketOutcome> WaitUntilBucketNotExists(const Model::HeadBucketRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::HeadBucketOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::STATUS, 404});

    auto operation = [this](const Model::HeadBucketRequest& req) { return static_cast<DerivedClient*>(this)->HeadBucket(req); };
    Aws::Utils::Waiter<Model::HeadBucketRequest, Model::HeadBucketOutcome> waiter(5, 24, acceptors, operation, "WaitUntilBucketNotExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::HeadObjectOutcome> WaitUntilObjectExists(const Model::HeadObjectRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::HeadObjectOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::STATUS, 404});

    auto operation = [this](const Model::HeadObjectRequest& req) { return static_cast<DerivedClient*>(this)->HeadObject(req); };
    Aws::Utils::Waiter<Model::HeadObjectRequest, Model::HeadObjectOutcome> waiter(5, 24, acceptors, operation, "WaitUntilObjectExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::HeadObjectOutcome> WaitUntilObjectNotExists(const Model::HeadObjectRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::HeadObjectOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::STATUS, 404});

    auto operation = [this](const Model::HeadObjectRequest& req) { return static_cast<DerivedClient*>(this)->HeadObject(req); };
    Aws::Utils::Waiter<Model::HeadObjectRequest, Model::HeadObjectOutcome> waiter(5, 24, acceptors, operation, "WaitUntilObjectNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace S3
}  // namespace Aws
