/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/model/DescribeEndpointRequest.h>
#include <aws/sagemaker/model/DescribeEndpointResult.h>
#include <aws/sagemaker/model/DescribeImageRequest.h>
#include <aws/sagemaker/model/DescribeImageResult.h>
#include <aws/sagemaker/model/DescribeImageVersionRequest.h>
#include <aws/sagemaker/model/DescribeImageVersionResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceRequest.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceResult.h>
#include <aws/sagemaker/model/DescribeProcessingJobRequest.h>
#include <aws/sagemaker/model/DescribeProcessingJobResult.h>
#include <aws/sagemaker/model/DescribeTrainingJobRequest.h>
#include <aws/sagemaker/model/DescribeTrainingJobResult.h>
#include <aws/sagemaker/model/DescribeTransformJobRequest.h>
#include <aws/sagemaker/model/DescribeTransformJobResult.h>
#include <aws/sagemaker/model/EndpointStatus.h>
#include <aws/sagemaker/model/ImageStatus.h>
#include <aws/sagemaker/model/ImageVersionStatus.h>
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/sagemaker/model/ProcessingJobStatus.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/TransformJobStatus.h>

#include <algorithm>

namespace Aws {
namespace SageMaker {

template <typename DerivedClient = SageMakerClient>
class SageMakerWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeEndpointOutcome> WaitUntilEndpointDeleted(const Model::DescribeEndpointRequest& request) {
    using OutcomeT = Model::DescribeEndpointOutcome;
    using RequestT = Model::DescribeEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("EndpointDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ValidationException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EndpointDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStatusMapper::GetNameForEndpointStatus(result.GetEndpointStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEndpointOutcome> WaitUntilEndpointInService(const Model::DescribeEndpointRequest& request) {
    using OutcomeT = Model::DescribeEndpointOutcome;
    using RequestT = Model::DescribeEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EndpointInServiceWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("InService"),
        [](const Model::DescribeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStatusMapper::GetNameForEndpointStatus(result.GetEndpointStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EndpointInServiceWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EndpointStatusMapper::GetNameForEndpointStatus(result.GetEndpointStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("EndpointInServiceWaiter", Aws::Utils::WaiterState::FAILURE,
                                                                                Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 120, std::move(acceptors), operation, "WaitUntilEndpointInService");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageOutcome> WaitUntilImageCreated(const Model::DescribeImageRequest& request) {
    using OutcomeT = Model::DescribeImageOutcome;
    using RequestT = Model::DescribeImageRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATED"),
        [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ImageCreatedWaiter", Aws::Utils::WaiterState::FAILURE,
                                                                                Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImage(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilImageCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageOutcome> WaitUntilImageDeleted(const Model::DescribeImageRequest& request) {
    using OutcomeT = Model::DescribeImageOutcome;
    using RequestT = Model::DescribeImageRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ImageDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ImageDeletedWaiter", Aws::Utils::WaiterState::FAILURE,
                                                                                Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImage(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilImageDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageOutcome> WaitUntilImageUpdated(const Model::DescribeImageRequest& request) {
    using OutcomeT = Model::DescribeImageOutcome;
    using RequestT = Model::DescribeImageRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageUpdatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATED"),
        [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ImageUpdatedWaiter", Aws::Utils::WaiterState::FAILURE,
                                                                                Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImage(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilImageUpdated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageVersionOutcome> WaitUntilImageVersionCreated(
      const Model::DescribeImageVersionRequest& request) {
    using OutcomeT = Model::DescribeImageVersionOutcome;
    using RequestT = Model::DescribeImageVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageVersionCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATED"),
        [](const Model::DescribeImageVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageVersionStatusMapper::GetNameForImageVersionStatus(result.GetImageVersionStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageVersionCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeImageVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageVersionStatusMapper::GetNameForImageVersionStatus(result.GetImageVersionStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ImageVersionCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImageVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilImageVersionCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageVersionOutcome> WaitUntilImageVersionDeleted(
      const Model::DescribeImageVersionRequest& request) {
    using OutcomeT = Model::DescribeImageVersionOutcome;
    using RequestT = Model::DescribeImageVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ImageVersionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageVersionDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeImageVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImageVersionStatusMapper::GetNameForImageVersionStatus(result.GetImageVersionStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ImageVersionDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImageVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilImageVersionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNotebookInstanceOutcome> WaitUntilNotebookInstanceDeleted(
      const Model::DescribeNotebookInstanceRequest& request) {
    using OutcomeT = Model::DescribeNotebookInstanceOutcome;
    using RequestT = Model::DescribeNotebookInstanceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "NotebookInstanceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ValidationException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NotebookInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(result.GetNotebookInstanceStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNotebookInstance(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilNotebookInstanceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNotebookInstanceOutcome> WaitUntilNotebookInstanceInService(
      const Model::DescribeNotebookInstanceRequest& request) {
    using OutcomeT = Model::DescribeNotebookInstanceOutcome;
    using RequestT = Model::DescribeNotebookInstanceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NotebookInstanceInServiceWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("InService"),
        [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(result.GetNotebookInstanceStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NotebookInstanceInServiceWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(result.GetNotebookInstanceStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNotebookInstance(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilNotebookInstanceInService");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNotebookInstanceOutcome> WaitUntilNotebookInstanceStopped(
      const Model::DescribeNotebookInstanceRequest& request) {
    using OutcomeT = Model::DescribeNotebookInstanceOutcome;
    using RequestT = Model::DescribeNotebookInstanceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NotebookInstanceStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Stopped"),
        [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(result.GetNotebookInstanceStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NotebookInstanceStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(result.GetNotebookInstanceStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNotebookInstance(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilNotebookInstanceStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeProcessingJobOutcome> WaitUntilProcessingJobCompletedOrStopped(
      const Model::DescribeProcessingJobRequest& request) {
    using OutcomeT = Model::DescribeProcessingJobOutcome;
    using RequestT = Model::DescribeProcessingJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProcessingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::DescribeProcessingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProcessingJobStatusMapper::GetNameForProcessingJobStatus(result.GetProcessingJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProcessingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Stopped"),
        [](const Model::DescribeProcessingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProcessingJobStatusMapper::GetNameForProcessingJobStatus(result.GetProcessingJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProcessingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeProcessingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ProcessingJobStatusMapper::GetNameForProcessingJobStatus(result.GetProcessingJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ProcessingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeProcessingJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilProcessingJobCompletedOrStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTrainingJobOutcome> WaitUntilTrainingJobCompletedOrStopped(
      const Model::DescribeTrainingJobRequest& request) {
    using OutcomeT = Model::DescribeTrainingJobOutcome;
    using RequestT = Model::DescribeTrainingJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TrainingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::DescribeTrainingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TrainingJobStatusMapper::GetNameForTrainingJobStatus(result.GetTrainingJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TrainingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Stopped"),
        [](const Model::DescribeTrainingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TrainingJobStatusMapper::GetNameForTrainingJobStatus(result.GetTrainingJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TrainingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeTrainingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TrainingJobStatusMapper::GetNameForTrainingJobStatus(result.GetTrainingJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "TrainingJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTrainingJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(120, 180, std::move(acceptors), operation, "WaitUntilTrainingJobCompletedOrStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTransformJobOutcome> WaitUntilTransformJobCompletedOrStopped(
      const Model::DescribeTransformJobRequest& request) {
    using OutcomeT = Model::DescribeTransformJobOutcome;
    using RequestT = Model::DescribeTransformJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TransformJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::DescribeTransformJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TransformJobStatusMapper::GetNameForTransformJobStatus(result.GetTransformJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TransformJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Stopped"),
        [](const Model::DescribeTransformJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TransformJobStatusMapper::GetNameForTransformJobStatus(result.GetTransformJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TransformJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeTransformJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TransformJobStatusMapper::GetNameForTransformJobStatus(result.GetTransformJobStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "TransformJobCompletedOrStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTransformJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilTransformJobCompletedOrStopped");
    return waiter.Wait(request);
  }
};
}  // namespace SageMaker
}  // namespace Aws
