/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/RekognitionServiceClientModel.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/GetFaceDetectionRequest.h>
#include <aws/rekognition/model/GetFaceDetectionResult.h>

namespace Aws {
namespace Rekognition {
namespace Pagination {

template <typename Client = RekognitionClient>
struct GetFaceDetectionPaginationTraits {
  using RequestType = Model::GetFaceDetectionRequest;
  using ResultType = Model::GetFaceDetectionResult;
  using OutcomeType = Model::GetFaceDetectionOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetFaceDetection(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Rekognition
}  // namespace Aws
