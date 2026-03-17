/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeEndpointOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EndpointStatusMapper::GetNameForEndpointStatus(result.GetEndpointStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeEndpointRequest& req) { return static_cast<DerivedClient*>(this)->DescribeEndpoint(req); };
    Aws::Utils::Waiter<Model::DescribeEndpointRequest, Model::DescribeEndpointOutcome> waiter(30, 60, acceptors, operation,
                                                                                              "WaitUntilEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEndpointOutcome> WaitUntilEndpointInService(const Model::DescribeEndpointRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeEndpointOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("InService"),
                         [](const Model::DescribeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EndpointStatusMapper::GetNameForEndpointStatus(result.GetEndpointStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EndpointStatusMapper::GetNameForEndpointStatus(result.GetEndpointStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeEndpointRequest& req) { return static_cast<DerivedClient*>(this)->DescribeEndpoint(req); };
    Aws::Utils::Waiter<Model::DescribeEndpointRequest, Model::DescribeEndpointOutcome> waiter(30, 120, acceptors, operation,
                                                                                              "WaitUntilEndpointInService");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageOutcome> WaitUntilImageCreated(const Model::DescribeImageRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImageOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATED"),
                         [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeImageRequest& req) { return static_cast<DerivedClient*>(this)->DescribeImage(req); };
    Aws::Utils::Waiter<Model::DescribeImageRequest, Model::DescribeImageOutcome> waiter(60, 60, acceptors, operation,
                                                                                        "WaitUntilImageCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageOutcome> WaitUntilImageDeleted(const Model::DescribeImageRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImageOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeImageRequest& req) { return static_cast<DerivedClient*>(this)->DescribeImage(req); };
    Aws::Utils::Waiter<Model::DescribeImageRequest, Model::DescribeImageOutcome> waiter(60, 60, acceptors, operation,
                                                                                        "WaitUntilImageDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageOutcome> WaitUntilImageUpdated(const Model::DescribeImageRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImageOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATED"),
                         [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::DescribeImageOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageStatusMapper::GetNameForImageStatus(result.GetImageStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeImageRequest& req) { return static_cast<DerivedClient*>(this)->DescribeImage(req); };
    Aws::Utils::Waiter<Model::DescribeImageRequest, Model::DescribeImageOutcome> waiter(60, 60, acceptors, operation,
                                                                                        "WaitUntilImageUpdated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageVersionOutcome> WaitUntilImageVersionCreated(
      const Model::DescribeImageVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImageVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATED"),
                         [](const Model::DescribeImageVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageVersionStatusMapper::GetNameForImageVersionStatus(result.GetImageVersionStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeImageVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageVersionStatusMapper::GetNameForImageVersionStatus(result.GetImageVersionStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeImageVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeImageVersion(req);
    };
    Aws::Utils::Waiter<Model::DescribeImageVersionRequest, Model::DescribeImageVersionOutcome> waiter(60, 60, acceptors, operation,
                                                                                                      "WaitUntilImageVersionCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImageVersionOutcome> WaitUntilImageVersionDeleted(
      const Model::DescribeImageVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImageVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeImageVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImageVersionStatusMapper::GetNameForImageVersionStatus(result.GetImageVersionStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeImageVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeImageVersion(req);
    };
    Aws::Utils::Waiter<Model::DescribeImageVersionRequest, Model::DescribeImageVersionOutcome> waiter(60, 60, acceptors, operation,
                                                                                                      "WaitUntilImageVersionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNotebookInstanceOutcome> WaitUntilNotebookInstanceDeleted(
      const Model::DescribeNotebookInstanceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNotebookInstanceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(
                                      result.GetNotebookInstanceStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeNotebookInstanceRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNotebookInstance(req);
    };
    Aws::Utils::Waiter<Model::DescribeNotebookInstanceRequest, Model::DescribeNotebookInstanceOutcome> waiter(
        30, 60, acceptors, operation, "WaitUntilNotebookInstanceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNotebookInstanceOutcome> WaitUntilNotebookInstanceInService(
      const Model::DescribeNotebookInstanceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNotebookInstanceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("InService"),
                         [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(
                                      result.GetNotebookInstanceStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(
                                      result.GetNotebookInstanceStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeNotebookInstanceRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNotebookInstance(req);
    };
    Aws::Utils::Waiter<Model::DescribeNotebookInstanceRequest, Model::DescribeNotebookInstanceOutcome> waiter(
        30, 60, acceptors, operation, "WaitUntilNotebookInstanceInService");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNotebookInstanceOutcome> WaitUntilNotebookInstanceStopped(
      const Model::DescribeNotebookInstanceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNotebookInstanceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Stopped"),
                         [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(
                                      result.GetNotebookInstanceStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeNotebookInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NotebookInstanceStatusMapper::GetNameForNotebookInstanceStatus(
                                      result.GetNotebookInstanceStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeNotebookInstanceRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeNotebookInstance(req);
    };
    Aws::Utils::Waiter<Model::DescribeNotebookInstanceRequest, Model::DescribeNotebookInstanceOutcome> waiter(
        30, 60, acceptors, operation, "WaitUntilNotebookInstanceStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeProcessingJobOutcome> WaitUntilProcessingJobCompletedOrStopped(
      const Model::DescribeProcessingJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeProcessingJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
                         [](const Model::DescribeProcessingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ProcessingJobStatusMapper::GetNameForProcessingJobStatus(result.GetProcessingJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Stopped"),
                         [](const Model::DescribeProcessingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ProcessingJobStatusMapper::GetNameForProcessingJobStatus(result.GetProcessingJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeProcessingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ProcessingJobStatusMapper::GetNameForProcessingJobStatus(result.GetProcessingJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeProcessingJobRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeProcessingJob(req);
    };
    Aws::Utils::Waiter<Model::DescribeProcessingJobRequest, Model::DescribeProcessingJobOutcome> waiter(
        60, 60, acceptors, operation, "WaitUntilProcessingJobCompletedOrStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTrainingJobOutcome> WaitUntilTrainingJobCompletedOrStopped(
      const Model::DescribeTrainingJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTrainingJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
                         [](const Model::DescribeTrainingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TrainingJobStatusMapper::GetNameForTrainingJobStatus(result.GetTrainingJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Stopped"),
                         [](const Model::DescribeTrainingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TrainingJobStatusMapper::GetNameForTrainingJobStatus(result.GetTrainingJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeTrainingJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TrainingJobStatusMapper::GetNameForTrainingJobStatus(result.GetTrainingJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeTrainingJobRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeTrainingJob(req);
    };
    Aws::Utils::Waiter<Model::DescribeTrainingJobRequest, Model::DescribeTrainingJobOutcome> waiter(
        120, 180, acceptors, operation, "WaitUntilTrainingJobCompletedOrStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTransformJobOutcome> WaitUntilTransformJobCompletedOrStopped(
      const Model::DescribeTransformJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTransformJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
                         [](const Model::DescribeTransformJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TransformJobStatusMapper::GetNameForTransformJobStatus(result.GetTransformJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Stopped"),
                         [](const Model::DescribeTransformJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TransformJobStatusMapper::GetNameForTransformJobStatus(result.GetTransformJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeTransformJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TransformJobStatusMapper::GetNameForTransformJobStatus(result.GetTransformJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationException")});

    auto operation = [this](const Model::DescribeTransformJobRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeTransformJob(req);
    };
    Aws::Utils::Waiter<Model::DescribeTransformJobRequest, Model::DescribeTransformJobOutcome> waiter(
        60, 60, acceptors, operation, "WaitUntilTransformJobCompletedOrStopped");
    return waiter.Wait(request);
  }
};
}  // namespace SageMaker
}  // namespace Aws
