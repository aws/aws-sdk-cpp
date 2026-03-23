/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/transcribe/TranscribeServiceClient.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/transcribe/model/DescribeLanguageModelRequest.h>
#include <aws/transcribe/model/DescribeLanguageModelResult.h>
#include <aws/transcribe/model/GetCallAnalyticsJobRequest.h>
#include <aws/transcribe/model/GetCallAnalyticsJobResult.h>
#include <aws/transcribe/model/GetMedicalScribeJobRequest.h>
#include <aws/transcribe/model/GetMedicalScribeJobResult.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/GetMedicalVocabularyRequest.h>
#include <aws/transcribe/model/GetMedicalVocabularyResult.h>
#include <aws/transcribe/model/GetTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetTranscriptionJobResult.h>
#include <aws/transcribe/model/GetVocabularyRequest.h>
#include <aws/transcribe/model/GetVocabularyResult.h>
#include <aws/transcribe/model/MedicalScribeJobStatus.h>
#include <aws/transcribe/model/ModelStatus.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/transcribe/model/VocabularyState.h>

#include <algorithm>

namespace Aws {
namespace TranscribeService {

template <typename DerivedClient = TranscribeServiceClient>
class TranscribeServiceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeLanguageModelOutcome> WaitUntilLanguageModelCompleted(
      const Model::DescribeLanguageModelRequest& request) {
    using OutcomeT = Model::DescribeLanguageModelOutcome;
    using RequestT = Model::DescribeLanguageModelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LanguageModelCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeLanguageModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ModelStatusMapper::GetNameForModelStatus(result.GetLanguageModel().GetModelStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LanguageModelCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeLanguageModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ModelStatusMapper::GetNameForModelStatus(result.GetLanguageModel().GetModelStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeLanguageModel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(120, 1, std::move(acceptors), operation, "WaitUntilLanguageModelCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetCallAnalyticsJobOutcome> WaitUntilCallAnalyticsJobCompleted(
      const Model::GetCallAnalyticsJobRequest& request) {
    using OutcomeT = Model::GetCallAnalyticsJobOutcome;
    using RequestT = Model::GetCallAnalyticsJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CallAnalyticsJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetCallAnalyticsJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CallAnalyticsJobStatusMapper::GetNameForCallAnalyticsJobStatus(
                     result.GetCallAnalyticsJob().GetCallAnalyticsJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CallAnalyticsJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetCallAnalyticsJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CallAnalyticsJobStatusMapper::GetNameForCallAnalyticsJobStatus(
                     result.GetCallAnalyticsJob().GetCallAnalyticsJobStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetCallAnalyticsJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilCallAnalyticsJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetMedicalScribeJobOutcome> WaitUntilMedicalScribeJobCompleted(
      const Model::GetMedicalScribeJobRequest& request) {
    using OutcomeT = Model::GetMedicalScribeJobOutcome;
    using RequestT = Model::GetMedicalScribeJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MedicalScribeJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetMedicalScribeJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MedicalScribeJobStatusMapper::GetNameForMedicalScribeJobStatus(
                     result.GetMedicalScribeJob().GetMedicalScribeJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MedicalScribeJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetMedicalScribeJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MedicalScribeJobStatusMapper::GetNameForMedicalScribeJobStatus(
                     result.GetMedicalScribeJob().GetMedicalScribeJobStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetMedicalScribeJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilMedicalScribeJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetMedicalTranscriptionJobOutcome> WaitUntilMedicalTranscriptionJobCompleted(
      const Model::GetMedicalTranscriptionJobRequest& request) {
    using OutcomeT = Model::GetMedicalTranscriptionJobOutcome;
    using RequestT = Model::GetMedicalTranscriptionJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MedicalTranscriptionJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetMedicalTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                     result.GetMedicalTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MedicalTranscriptionJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetMedicalTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                     result.GetMedicalTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetMedicalTranscriptionJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilMedicalTranscriptionJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetMedicalVocabularyOutcome> WaitUntilMedicalVocabularyReady(
      const Model::GetMedicalVocabularyRequest& request) {
    using OutcomeT = Model::GetMedicalVocabularyOutcome;
    using RequestT = Model::GetMedicalVocabularyRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MedicalVocabularyReadyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("READY"),
        [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MedicalVocabularyReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetMedicalVocabulary(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilMedicalVocabularyReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetTranscriptionJobOutcome> WaitUntilTranscriptionJobCompleted(
      const Model::GetTranscriptionJobRequest& request) {
    using OutcomeT = Model::GetTranscriptionJobOutcome;
    using RequestT = Model::GetTranscriptionJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TranscriptionJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                     result.GetTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TranscriptionJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                     result.GetTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetTranscriptionJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilTranscriptionJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVocabularyOutcome> WaitUntilVocabularyReady(const Model::GetVocabularyRequest& request) {
    using OutcomeT = Model::GetVocabularyOutcome;
    using RequestT = Model::GetVocabularyRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VocabularyReadyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("READY"),
        [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VocabularyReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetVocabulary(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilVocabularyReady");
    return waiter.Wait(request);
  }
};
}  // namespace TranscribeService
}  // namespace Aws
