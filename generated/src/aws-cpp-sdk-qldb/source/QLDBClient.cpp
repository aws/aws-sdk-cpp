/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/qldb/QLDBClient.h>
#include <aws/qldb/QLDBErrorMarshaller.h>
#include <aws/qldb/QLDBEndpointProvider.h>
#include <aws/qldb/model/CancelJournalKinesisStreamRequest.h>
#include <aws/qldb/model/CreateLedgerRequest.h>
#include <aws/qldb/model/DeleteLedgerRequest.h>
#include <aws/qldb/model/DescribeJournalKinesisStreamRequest.h>
#include <aws/qldb/model/DescribeJournalS3ExportRequest.h>
#include <aws/qldb/model/DescribeLedgerRequest.h>
#include <aws/qldb/model/ExportJournalToS3Request.h>
#include <aws/qldb/model/GetBlockRequest.h>
#include <aws/qldb/model/GetDigestRequest.h>
#include <aws/qldb/model/GetRevisionRequest.h>
#include <aws/qldb/model/ListJournalKinesisStreamsForLedgerRequest.h>
#include <aws/qldb/model/ListJournalS3ExportsRequest.h>
#include <aws/qldb/model/ListJournalS3ExportsForLedgerRequest.h>
#include <aws/qldb/model/ListLedgersRequest.h>
#include <aws/qldb/model/ListTagsForResourceRequest.h>
#include <aws/qldb/model/StreamJournalToKinesisRequest.h>
#include <aws/qldb/model/TagResourceRequest.h>
#include <aws/qldb/model/UntagResourceRequest.h>
#include <aws/qldb/model/UpdateLedgerRequest.h>
#include <aws/qldb/model/UpdateLedgerPermissionsModeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QLDB;
using namespace Aws::QLDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* QLDBClient::SERVICE_NAME = "qldb";
const char* QLDBClient::ALLOCATION_TAG = "QLDBClient";

QLDBClient::QLDBClient(const QLDB::QLDBClientConfiguration& clientConfiguration,
                       std::shared_ptr<QLDBEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const AWSCredentials& credentials,
                       std::shared_ptr<QLDBEndpointProviderBase> endpointProvider,
                       const QLDB::QLDBClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<QLDBEndpointProviderBase> endpointProvider,
                       const QLDB::QLDBClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  QLDBClient::QLDBClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const AWSCredentials& credentials,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
QLDBClient::~QLDBClient()
{
}

std::shared_ptr<QLDBEndpointProviderBase>& QLDBClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void QLDBClient::init(const QLDB::QLDBClientConfiguration& config)
{
  AWSClient::SetServiceClientName("QLDB");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void QLDBClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelJournalKinesisStreamOutcome QLDBClient::CancelJournalKinesisStream(const CancelJournalKinesisStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJournalKinesisStream", "Required field: LedgerName, is not set");
    return CancelJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJournalKinesisStream", "Required field: StreamId, is not set");
    return CancelJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  return CancelJournalKinesisStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CreateLedgerOutcome QLDBClient::CreateLedger(const CreateLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers");
  return CreateLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLedgerOutcome QLDBClient::DeleteLedger(const DeleteLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLedger", "Required field: Name, is not set");
    return DeleteLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeJournalKinesisStreamOutcome QLDBClient::DescribeJournalKinesisStream(const DescribeJournalKinesisStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalKinesisStream", "Required field: LedgerName, is not set");
    return DescribeJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalKinesisStream", "Required field: StreamId, is not set");
    return DescribeJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  return DescribeJournalKinesisStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJournalS3ExportOutcome QLDBClient::DescribeJournalS3Export(const DescribeJournalS3ExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJournalS3Export, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalS3Export", "Required field: Name, is not set");
    return DescribeJournalS3ExportOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalS3Export", "Required field: ExportId, is not set");
    return DescribeJournalS3ExportOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJournalS3Export, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  return DescribeJournalS3ExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLedgerOutcome QLDBClient::DescribeLedger(const DescribeLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLedger", "Required field: Name, is not set");
    return DescribeLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportJournalToS3Outcome QLDBClient::ExportJournalToS3(const ExportJournalToS3Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportJournalToS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportJournalToS3", "Required field: Name, is not set");
    return ExportJournalToS3Outcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportJournalToS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports");
  return ExportJournalToS3Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlockOutcome QLDBClient::GetBlock(const GetBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBlock", "Required field: Name, is not set");
    return GetBlockOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/block");
  return GetBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDigestOutcome QLDBClient::GetDigest(const GetDigestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDigest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDigest", "Required field: Name, is not set");
    return GetDigestOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDigest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/digest");
  return GetDigestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRevisionOutcome QLDBClient::GetRevision(const GetRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRevision", "Required field: Name, is not set");
    return GetRevisionOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revision");
  return GetRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListJournalKinesisStreamsForLedgerOutcome QLDBClient::ListJournalKinesisStreamsForLedger(const ListJournalKinesisStreamsForLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJournalKinesisStreamsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJournalKinesisStreamsForLedger", "Required field: LedgerName, is not set");
    return ListJournalKinesisStreamsForLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJournalKinesisStreamsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams");
  return ListJournalKinesisStreamsForLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJournalS3ExportsOutcome QLDBClient::ListJournalS3Exports(const ListJournalS3ExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJournalS3Exports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJournalS3Exports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports");
  return ListJournalS3ExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJournalS3ExportsForLedgerOutcome QLDBClient::ListJournalS3ExportsForLedger(const ListJournalS3ExportsForLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJournalS3ExportsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJournalS3ExportsForLedger", "Required field: Name, is not set");
    return ListJournalS3ExportsForLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJournalS3ExportsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports");
  return ListJournalS3ExportsForLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLedgersOutcome QLDBClient::ListLedgers(const ListLedgersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLedgers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLedgers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers");
  return ListLedgersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome QLDBClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StreamJournalToKinesisOutcome QLDBClient::StreamJournalToKinesis(const StreamJournalToKinesisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StreamJournalToKinesis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StreamJournalToKinesis", "Required field: LedgerName, is not set");
    return StreamJournalToKinesisOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StreamJournalToKinesis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams");
  return StreamJournalToKinesisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome QLDBClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome QLDBClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateLedgerOutcome QLDBClient::UpdateLedger(const UpdateLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLedger", "Required field: Name, is not set");
    return UpdateLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLedgerPermissionsModeOutcome QLDBClient::UpdateLedgerPermissionsMode(const UpdateLedgerPermissionsModeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLedgerPermissionsMode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLedgerPermissionsMode", "Required field: Name, is not set");
    return UpdateLedgerPermissionsModeOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLedgerPermissionsMode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions-mode");
  return UpdateLedgerPermissionsModeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

