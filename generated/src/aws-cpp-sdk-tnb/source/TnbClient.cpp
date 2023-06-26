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

#include <aws/tnb/TnbClient.h>
#include <aws/tnb/TnbErrorMarshaller.h>
#include <aws/tnb/TnbEndpointProvider.h>
#include <aws/tnb/model/CancelSolNetworkOperationRequest.h>
#include <aws/tnb/model/CreateSolFunctionPackageRequest.h>
#include <aws/tnb/model/CreateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/CreateSolNetworkPackageRequest.h>
#include <aws/tnb/model/DeleteSolFunctionPackageRequest.h>
#include <aws/tnb/model/DeleteSolNetworkInstanceRequest.h>
#include <aws/tnb/model/DeleteSolNetworkPackageRequest.h>
#include <aws/tnb/model/GetSolFunctionInstanceRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageDescriptorRequest.h>
#include <aws/tnb/model/GetSolNetworkInstanceRequest.h>
#include <aws/tnb/model/GetSolNetworkOperationRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageDescriptorRequest.h>
#include <aws/tnb/model/InstantiateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/ListSolFunctionInstancesRequest.h>
#include <aws/tnb/model/ListSolFunctionPackagesRequest.h>
#include <aws/tnb/model/ListSolNetworkInstancesRequest.h>
#include <aws/tnb/model/ListSolNetworkOperationsRequest.h>
#include <aws/tnb/model/ListSolNetworkPackagesRequest.h>
#include <aws/tnb/model/ListTagsForResourceRequest.h>
#include <aws/tnb/model/PutSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/PutSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/TagResourceRequest.h>
#include <aws/tnb/model/TerminateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/UntagResourceRequest.h>
#include <aws/tnb/model/UpdateSolFunctionPackageRequest.h>
#include <aws/tnb/model/UpdateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/UpdateSolNetworkPackageRequest.h>
#include <aws/tnb/model/ValidateSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/ValidateSolNetworkPackageContentRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::tnb;
using namespace Aws::tnb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* TnbClient::SERVICE_NAME = "tnb";
const char* TnbClient::ALLOCATION_TAG = "TnbClient";

TnbClient::TnbClient(const tnb::TnbClientConfiguration& clientConfiguration,
                     std::shared_ptr<TnbEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const AWSCredentials& credentials,
                     std::shared_ptr<TnbEndpointProviderBase> endpointProvider,
                     const tnb::TnbClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<TnbEndpointProviderBase> endpointProvider,
                     const tnb::TnbClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  TnbClient::TnbClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
TnbClient::~TnbClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<TnbEndpointProviderBase>& TnbClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TnbClient::init(const tnb::TnbClientConfiguration& config)
{
  AWSClient::SetServiceClientName("tnb");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void TnbClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelSolNetworkOperationOutcome TnbClient::CancelSolNetworkOperation(const CancelSolNetworkOperationRequest& request) const
{
  AWS_OPERATION_GUARD(CancelSolNetworkOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSolNetworkOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsLcmOpOccIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSolNetworkOperation", "Required field: NsLcmOpOccId, is not set");
    return CancelSolNetworkOperationOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsLcmOpOccId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSolNetworkOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsLcmOpOccId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  return CancelSolNetworkOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSolFunctionPackageOutcome TnbClient::CreateSolFunctionPackage(const CreateSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
  return CreateSolFunctionPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSolNetworkInstanceOutcome TnbClient::CreateSolNetworkInstance(const CreateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances");
  return CreateSolNetworkInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSolNetworkPackageOutcome TnbClient::CreateSolNetworkPackage(const CreateSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors");
  return CreateSolNetworkPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSolFunctionPackageOutcome TnbClient::DeleteSolFunctionPackage(const DeleteSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return DeleteSolFunctionPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  return DeleteSolFunctionPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSolNetworkInstanceOutcome TnbClient::DeleteSolNetworkInstance(const DeleteSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return DeleteSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
  return DeleteSolNetworkInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSolNetworkPackageOutcome TnbClient::DeleteSolNetworkPackage(const DeleteSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return DeleteSolNetworkPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  return DeleteSolNetworkPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetSolFunctionInstanceOutcome TnbClient::GetSolFunctionInstance(const GetSolFunctionInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionInstance", "Required field: VnfInstanceId, is not set");
    return GetSolFunctionInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolFunctionInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnflcm/v1/vnf_instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfInstanceId());
  return GetSolFunctionInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSolFunctionPackageOutcome TnbClient::GetSolFunctionPackage(const GetSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  return GetSolFunctionPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSolFunctionPackageContentOutcome TnbClient::GetSolFunctionPackageContent(const GetSolFunctionPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageContent", "Required field: Accept, is not set");
    return GetSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/package_content");
  return GetSolFunctionPackageContentOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetSolFunctionPackageDescriptorOutcome TnbClient::GetSolFunctionPackageDescriptor(const GetSolFunctionPackageDescriptorRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionPackageDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageDescriptor", "Required field: Accept, is not set");
    return GetSolFunctionPackageDescriptorOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageDescriptor", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageDescriptorOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vnfd");
  return GetSolFunctionPackageDescriptorOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetSolNetworkInstanceOutcome TnbClient::GetSolNetworkInstance(const GetSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return GetSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
  return GetSolNetworkInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSolNetworkOperationOutcome TnbClient::GetSolNetworkOperation(const GetSolNetworkOperationRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsLcmOpOccIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkOperation", "Required field: NsLcmOpOccId, is not set");
    return GetSolNetworkOperationOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsLcmOpOccId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolNetworkOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsLcmOpOccId());
  return GetSolNetworkOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSolNetworkPackageOutcome TnbClient::GetSolNetworkPackage(const GetSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  return GetSolNetworkPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSolNetworkPackageContentOutcome TnbClient::GetSolNetworkPackageContent(const GetSolNetworkPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageContent", "Required field: Accept, is not set");
    return GetSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/nsd_content");
  return GetSolNetworkPackageContentOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetSolNetworkPackageDescriptorOutcome TnbClient::GetSolNetworkPackageDescriptor(const GetSolNetworkPackageDescriptorRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkPackageDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageDescriptor", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageDescriptorOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/nsd");
  return GetSolNetworkPackageDescriptorOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

InstantiateSolNetworkInstanceOutcome TnbClient::InstantiateSolNetworkInstance(const InstantiateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(InstantiateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InstantiateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InstantiateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return InstantiateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InstantiateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instantiate");
  return InstantiateSolNetworkInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSolFunctionInstancesOutcome TnbClient::ListSolFunctionInstances(const ListSolFunctionInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolFunctionInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolFunctionInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSolFunctionInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnflcm/v1/vnf_instances");
  return ListSolFunctionInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSolFunctionPackagesOutcome TnbClient::ListSolFunctionPackages(const ListSolFunctionPackagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolFunctionPackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolFunctionPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSolFunctionPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
  return ListSolFunctionPackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSolNetworkInstancesOutcome TnbClient::ListSolNetworkInstances(const ListSolNetworkInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolNetworkInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolNetworkInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSolNetworkInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances");
  return ListSolNetworkInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSolNetworkOperationsOutcome TnbClient::ListSolNetworkOperations(const ListSolNetworkOperationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolNetworkOperations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolNetworkOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSolNetworkOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs");
  return ListSolNetworkOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSolNetworkPackagesOutcome TnbClient::ListSolNetworkPackages(const ListSolNetworkPackagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolNetworkPackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolNetworkPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSolNetworkPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors");
  return ListSolNetworkPackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome TnbClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutSolFunctionPackageContentOutcome TnbClient::PutSolFunctionPackageContent(const PutSolFunctionPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(PutSolFunctionPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return PutSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/package_content");
  return PutSolFunctionPackageContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSolNetworkPackageContentOutcome TnbClient::PutSolNetworkPackageContent(const PutSolNetworkPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(PutSolNetworkPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return PutSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/nsd_content");
  return PutSolNetworkPackageContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome TnbClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateSolNetworkInstanceOutcome TnbClient::TerminateSolNetworkInstance(const TerminateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(TerminateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TerminateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return TerminateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/terminate");
  return TerminateSolNetworkInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome TnbClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateSolFunctionPackageOutcome TnbClient::UpdateSolFunctionPackage(const UpdateSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return UpdateSolFunctionPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  return UpdateSolFunctionPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSolNetworkInstanceOutcome TnbClient::UpdateSolNetworkInstance(const UpdateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return UpdateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update");
  return UpdateSolNetworkInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSolNetworkPackageOutcome TnbClient::UpdateSolNetworkPackage(const UpdateSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return UpdateSolNetworkPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  return UpdateSolNetworkPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

ValidateSolFunctionPackageContentOutcome TnbClient::ValidateSolFunctionPackageContent(const ValidateSolFunctionPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(ValidateSolFunctionPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ValidateSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return ValidateSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/package_content/validate");
  return ValidateSolFunctionPackageContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ValidateSolNetworkPackageContentOutcome TnbClient::ValidateSolNetworkPackageContent(const ValidateSolNetworkPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(ValidateSolNetworkPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ValidateSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return ValidateSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/nsd_content/validate");
  return ValidateSolNetworkPackageContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

