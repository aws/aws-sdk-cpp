/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/proton/ProtonClient.h>
#include <aws/proton/model/GetComponentRequest.h>
#include <aws/proton/model/GetComponentResult.h>
#include <aws/proton/model/GetEnvironmentRequest.h>
#include <aws/proton/model/GetEnvironmentResult.h>
#include <aws/proton/model/GetEnvironmentTemplateVersionRequest.h>
#include <aws/proton/model/GetEnvironmentTemplateVersionResult.h>
#include <aws/proton/model/GetServiceInstanceRequest.h>
#include <aws/proton/model/GetServiceInstanceResult.h>
#include <aws/proton/model/GetServiceRequest.h>
#include <aws/proton/model/GetServiceResult.h>
#include <aws/proton/model/GetServiceTemplateVersionRequest.h>
#include <aws/proton/model/GetServiceTemplateVersionResult.h>

#include <algorithm>

namespace Aws {
namespace Proton {

template <typename DerivedClient = ProtonClient>
class ProtonWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetComponentOutcome> WaitUntilComponentDeployed(const Model::GetComponentRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetComponentOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetComponentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetComponent().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetComponentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetComponent().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetComponentRequest& req) { return static_cast<DerivedClient*>(this)->GetComponent(req); };
    Aws::Utils::Waiter<Model::GetComponentRequest, Model::GetComponentOutcome> waiter(5, 999, acceptors, operation,
                                                                                      "WaitUntilComponentDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetComponentOutcome> WaitUntilComponentDeleted(const Model::GetComponentRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetComponentOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetComponentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetComponent().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetComponentRequest& req) { return static_cast<DerivedClient*>(this)->GetComponent(req); };
    Aws::Utils::Waiter<Model::GetComponentRequest, Model::GetComponentOutcome> waiter(5, 999, acceptors, operation,
                                                                                      "WaitUntilComponentDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetEnvironmentOutcome> WaitUntilEnvironmentDeployed(const Model::GetEnvironmentRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetEnvironmentOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetEnvironment().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetEnvironment().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetEnvironmentRequest& req) { return static_cast<DerivedClient*>(this)->GetEnvironment(req); };
    Aws::Utils::Waiter<Model::GetEnvironmentRequest, Model::GetEnvironmentOutcome> waiter(5, 999, acceptors, operation,
                                                                                          "WaitUntilEnvironmentDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetEnvironmentTemplateVersionOutcome> WaitUntilEnvironmentTemplateVersionRegistered(
      const Model::GetEnvironmentTemplateVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetEnvironmentTemplateVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DRAFT"),
                         [](const Model::GetEnvironmentTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetEnvironmentTemplateVersion().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("PUBLISHED"),
                         [](const Model::GetEnvironmentTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetEnvironmentTemplateVersion().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REGISTRATION_FAILED"),
                         [](const Model::GetEnvironmentTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetEnvironmentTemplateVersion().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetEnvironmentTemplateVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->GetEnvironmentTemplateVersion(req);
    };
    Aws::Utils::Waiter<Model::GetEnvironmentTemplateVersionRequest, Model::GetEnvironmentTemplateVersionOutcome> waiter(
        2, 150, acceptors, operation, "WaitUntilEnvironmentTemplateVersionRegistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceCreated(const Model::GetServiceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetServiceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED_CLEANUP_COMPLETE"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED_CLEANUP_FAILED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetServiceRequest& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<Model::GetServiceRequest, Model::GetServiceOutcome> waiter(5, 999, acceptors, operation, "WaitUntilServiceCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceUpdated(const Model::GetServiceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetServiceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED_CLEANUP_COMPLETE"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED_CLEANUP_FAILED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_COMPLETE_CLEANUP_FAILED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetServiceRequest& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<Model::GetServiceRequest, Model::GetServiceOutcome> waiter(5, 999, acceptors, operation, "WaitUntilServiceUpdated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceDeleted(const Model::GetServiceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetServiceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetServiceRequest& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<Model::GetServiceRequest, Model::GetServiceOutcome> waiter(5, 999, acceptors, operation, "WaitUntilServiceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServicePipelineDeployed(const Model::GetServiceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetServiceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetPipeline().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetService().GetPipeline().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetServiceRequest& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<Model::GetServiceRequest, Model::GetServiceOutcome> waiter(10, 360, acceptors, operation,
                                                                                  "WaitUntilServicePipelineDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceInstanceOutcome> WaitUntilServiceInstanceDeployed(
      const Model::GetServiceInstanceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetServiceInstanceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetServiceInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetServiceInstance().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetServiceInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetServiceInstance().GetDeploymentStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetServiceInstanceRequest& req) {
      return static_cast<DerivedClient*>(this)->GetServiceInstance(req);
    };
    Aws::Utils::Waiter<Model::GetServiceInstanceRequest, Model::GetServiceInstanceOutcome> waiter(5, 999, acceptors, operation,
                                                                                                  "WaitUntilServiceInstanceDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceTemplateVersionOutcome> WaitUntilServiceTemplateVersionRegistered(
      const Model::GetServiceTemplateVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetServiceTemplateVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DRAFT"),
                         [](const Model::GetServiceTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetServiceTemplateVersion().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("PUBLISHED"),
                         [](const Model::GetServiceTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetServiceTemplateVersion().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REGISTRATION_FAILED"),
                         [](const Model::GetServiceTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetServiceTemplateVersion().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetServiceTemplateVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->GetServiceTemplateVersion(req);
    };
    Aws::Utils::Waiter<Model::GetServiceTemplateVersionRequest, Model::GetServiceTemplateVersionOutcome> waiter(
        2, 150, acceptors, operation, "WaitUntilServiceTemplateVersionRegistered");
    return waiter.Wait(request);
  }
};
}  // namespace Proton
}  // namespace Aws
