/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/SageMakerEndpointProvider.h>
#include <aws/sagemaker/SageMakerErrorMarshaller.h>
#include <aws/sagemaker/model/UpdatePipelineVersionRequest.h>
#include <aws/sagemaker/model/UpdateProjectRequest.h>
#include <aws/sagemaker/model/UpdateSpaceRequest.h>
#include <aws/sagemaker/model/UpdateTrainingJobRequest.h>
#include <aws/sagemaker/model/UpdateTrialComponentRequest.h>
#include <aws/sagemaker/model/UpdateTrialRequest.h>
#include <aws/sagemaker/model/UpdateUserProfileRequest.h>
#include <aws/sagemaker/model/UpdateWorkforceRequest.h>
#include <aws/sagemaker/model/UpdateWorkteamRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMaker;
using namespace Aws::SageMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

UpdatePipelineVersionOutcome SageMakerClient::UpdatePipelineVersion(const UpdatePipelineVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePipelineVersionOutcome(result.GetResultWithOwnership())
                            : UpdatePipelineVersionOutcome(std::move(result.GetError()));
}

UpdateProjectOutcome SageMakerClient::UpdateProject(const UpdateProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProjectOutcome(result.GetResultWithOwnership()) : UpdateProjectOutcome(std::move(result.GetError()));
}

UpdateSpaceOutcome SageMakerClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSpaceOutcome(result.GetResultWithOwnership()) : UpdateSpaceOutcome(std::move(result.GetError()));
}

UpdateTrainingJobOutcome SageMakerClient::UpdateTrainingJob(const UpdateTrainingJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrainingJobOutcome(result.GetResultWithOwnership())
                            : UpdateTrainingJobOutcome(std::move(result.GetError()));
}

UpdateTrialOutcome SageMakerClient::UpdateTrial(const UpdateTrialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrialOutcome(result.GetResultWithOwnership()) : UpdateTrialOutcome(std::move(result.GetError()));
}

UpdateTrialComponentOutcome SageMakerClient::UpdateTrialComponent(const UpdateTrialComponentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrialComponentOutcome(result.GetResultWithOwnership())
                            : UpdateTrialComponentOutcome(std::move(result.GetError()));
}

UpdateUserProfileOutcome SageMakerClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserProfileOutcome(result.GetResultWithOwnership())
                            : UpdateUserProfileOutcome(std::move(result.GetError()));
}

UpdateWorkforceOutcome SageMakerClient::UpdateWorkforce(const UpdateWorkforceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkforceOutcome(result.GetResultWithOwnership())
                            : UpdateWorkforceOutcome(std::move(result.GetError()));
}

UpdateWorkteamOutcome SageMakerClient::UpdateWorkteam(const UpdateWorkteamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkteamOutcome(result.GetResultWithOwnership()) : UpdateWorkteamOutcome(std::move(result.GetError()));
}
