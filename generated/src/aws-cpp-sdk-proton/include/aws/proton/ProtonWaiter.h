/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetComponentOutcome;
    using RequestT = Model::GetComponentRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ComponentDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetComponentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetComponent().GetDeploymentStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ComponentDeployedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetComponentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetComponent().GetDeploymentStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetComponent(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 999, std::move(acceptors), operation, "WaitUntilComponentDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetComponentOutcome> WaitUntilComponentDeleted(const Model::GetComponentRequest& request) {
    using OutcomeT = Model::GetComponentOutcome;
    using RequestT = Model::GetComponentRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ComponentDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ComponentDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::GetComponentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetComponent().GetDeploymentStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetComponent(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 999, std::move(acceptors), operation, "WaitUntilComponentDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetEnvironmentOutcome> WaitUntilEnvironmentDeployed(const Model::GetEnvironmentRequest& request) {
    using OutcomeT = Model::GetEnvironmentOutcome;
    using RequestT = Model::GetEnvironmentRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetEnvironment().GetDeploymentStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentDeployedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetEnvironment().GetDeploymentStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetEnvironment(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 999, std::move(acceptors), operation, "WaitUntilEnvironmentDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetEnvironmentTemplateVersionOutcome> WaitUntilEnvironmentTemplateVersionRegistered(
      const Model::GetEnvironmentTemplateVersionRequest& request) {
    using OutcomeT = Model::GetEnvironmentTemplateVersionOutcome;
    using RequestT = Model::GetEnvironmentTemplateVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentTemplateVersionRegisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DRAFT"),
        [](const Model::GetEnvironmentTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetEnvironmentTemplateVersion().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentTemplateVersionRegisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("PUBLISHED"),
        [](const Model::GetEnvironmentTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetEnvironmentTemplateVersion().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentTemplateVersionRegisteredWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REGISTRATION_FAILED"),
        [](const Model::GetEnvironmentTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetEnvironmentTemplateVersion().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetEnvironmentTemplateVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 150, std::move(acceptors), operation, "WaitUntilEnvironmentTemplateVersionRegistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceCreated(const Model::GetServiceRequest& request) {
    using OutcomeT = Model::GetServiceOutcome;
    using RequestT = Model::GetServiceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED_CLEANUP_COMPLETE"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED_CLEANUP_FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 999, std::move(acceptors), operation, "WaitUntilServiceCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceUpdated(const Model::GetServiceRequest& request) {
    using OutcomeT = Model::GetServiceOutcome;
    using RequestT = Model::GetServiceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceUpdatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED_CLEANUP_COMPLETE"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED_CLEANUP_FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_COMPLETE_CLEANUP_FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 999, std::move(acceptors), operation, "WaitUntilServiceUpdated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceDeleted(const Model::GetServiceRequest& request) {
    using OutcomeT = Model::GetServiceOutcome;
    using RequestT = Model::GetServiceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ServiceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 999, std::move(acceptors), operation, "WaitUntilServiceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServicePipelineDeployed(const Model::GetServiceRequest& request) {
    using OutcomeT = Model::GetServiceOutcome;
    using RequestT = Model::GetServiceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicePipelineDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetPipeline().GetDeploymentStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicePipelineDeployedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetService().GetPipeline().GetDeploymentStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 360, std::move(acceptors), operation, "WaitUntilServicePipelineDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceInstanceOutcome> WaitUntilServiceInstanceDeployed(
      const Model::GetServiceInstanceRequest& request) {
    using OutcomeT = Model::GetServiceInstanceOutcome;
    using RequestT = Model::GetServiceInstanceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceInstanceDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetServiceInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetServiceInstance().GetDeploymentStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceInstanceDeployedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetServiceInstanceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetServiceInstance().GetDeploymentStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetServiceInstance(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 999, std::move(acceptors), operation, "WaitUntilServiceInstanceDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceTemplateVersionOutcome> WaitUntilServiceTemplateVersionRegistered(
      const Model::GetServiceTemplateVersionRequest& request) {
    using OutcomeT = Model::GetServiceTemplateVersionOutcome;
    using RequestT = Model::GetServiceTemplateVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceTemplateVersionRegisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DRAFT"),
        [](const Model::GetServiceTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetServiceTemplateVersion().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceTemplateVersionRegisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("PUBLISHED"),
        [](const Model::GetServiceTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetServiceTemplateVersion().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceTemplateVersionRegisteredWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REGISTRATION_FAILED"),
        [](const Model::GetServiceTemplateVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetServiceTemplateVersion().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetServiceTemplateVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 150, std::move(acceptors), operation, "WaitUntilServiceTemplateVersionRegistered");
    return waiter.Wait(request);
  }
};
}  // namespace Proton
}  // namespace Aws
