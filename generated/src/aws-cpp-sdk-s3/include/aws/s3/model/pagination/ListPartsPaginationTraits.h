/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ListPartsRequest.h>
#include <aws/s3/model/ListPartsResult.h>
#include <aws/s3/S3Client.h>

namespace Aws
{
namespace S3
{
namespace Pagination
{

struct ListPartsPaginationTraits
{
    using RequestType = Model::ListPartsRequest;
    using ResultType = Model::ListPartsResult;
    using OutcomeType = Model::ListPartsOutcome;
    using ClientType = S3Client;

    static OutcomeType Invoke(ClientType& client, const RequestType& request)
    {
        return client.ListParts(request);
    }

    static bool HasMoreResults(const ResultType& result)
    {
        return result.GetIsTruncated();
    }

    static void SetNextRequest(const ResultType& result, RequestType& request)
    {
        request.SetPartNumberMarker(result.GetNextPartNumberMarker());
    }
};

} // namespace Pagination
} // namespace S3
} // namespace Aws
