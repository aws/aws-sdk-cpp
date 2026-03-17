/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeLanguageModelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeLanguageModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ModelStatusMapper::GetNameForModelStatus(result.GetLanguageModel().GetModelStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeLanguageModelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ModelStatusMapper::GetNameForModelStatus(result.GetLanguageModel().GetModelStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeLanguageModelRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeLanguageModel(req);
    };
    Aws::Utils::Waiter<Model::DescribeLanguageModelRequest, Model::DescribeLanguageModelOutcome> waiter(120, 1, acceptors, operation,
                                                                                                        "WaitUntilLanguageModelCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetCallAnalyticsJobOutcome> WaitUntilCallAnalyticsJobCompleted(
      const Model::GetCallAnalyticsJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetCallAnalyticsJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetCallAnalyticsJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CallAnalyticsJobStatusMapper::GetNameForCallAnalyticsJobStatus(
                                      result.GetCallAnalyticsJob().GetCallAnalyticsJobStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetCallAnalyticsJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CallAnalyticsJobStatusMapper::GetNameForCallAnalyticsJobStatus(
                                      result.GetCallAnalyticsJob().GetCallAnalyticsJobStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetCallAnalyticsJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetCallAnalyticsJob(req);
    };
    Aws::Utils::Waiter<Model::GetCallAnalyticsJobRequest, Model::GetCallAnalyticsJobOutcome> waiter(10, 12, acceptors, operation,
                                                                                                    "WaitUntilCallAnalyticsJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetMedicalScribeJobOutcome> WaitUntilMedicalScribeJobCompleted(
      const Model::GetMedicalScribeJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetMedicalScribeJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetMedicalScribeJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MedicalScribeJobStatusMapper::GetNameForMedicalScribeJobStatus(
                                      result.GetMedicalScribeJob().GetMedicalScribeJobStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetMedicalScribeJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MedicalScribeJobStatusMapper::GetNameForMedicalScribeJobStatus(
                                      result.GetMedicalScribeJob().GetMedicalScribeJobStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetMedicalScribeJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetMedicalScribeJob(req);
    };
    Aws::Utils::Waiter<Model::GetMedicalScribeJobRequest, Model::GetMedicalScribeJobOutcome> waiter(10, 12, acceptors, operation,
                                                                                                    "WaitUntilMedicalScribeJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetMedicalTranscriptionJobOutcome> WaitUntilMedicalTranscriptionJobCompleted(
      const Model::GetMedicalTranscriptionJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetMedicalTranscriptionJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetMedicalTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                                      result.GetMedicalTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetMedicalTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                                      result.GetMedicalTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetMedicalTranscriptionJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetMedicalTranscriptionJob(req);
    };
    Aws::Utils::Waiter<Model::GetMedicalTranscriptionJobRequest, Model::GetMedicalTranscriptionJobOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilMedicalTranscriptionJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetMedicalVocabularyOutcome> WaitUntilMedicalVocabularyReady(
      const Model::GetMedicalVocabularyRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetMedicalVocabularyOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("READY"),
                         [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetMedicalVocabularyRequest& req) {
      return static_cast<DerivedClient*>(this)->GetMedicalVocabulary(req);
    };
    Aws::Utils::Waiter<Model::GetMedicalVocabularyRequest, Model::GetMedicalVocabularyOutcome> waiter(10, 12, acceptors, operation,
                                                                                                      "WaitUntilMedicalVocabularyReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetTranscriptionJobOutcome> WaitUntilTranscriptionJobCompleted(
      const Model::GetTranscriptionJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetTranscriptionJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                                      result.GetTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetTranscriptionJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(
                                      result.GetTranscriptionJob().GetTranscriptionJobStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetTranscriptionJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetTranscriptionJob(req);
    };
    Aws::Utils::Waiter<Model::GetTranscriptionJobRequest, Model::GetTranscriptionJobOutcome> waiter(10, 12, acceptors, operation,
                                                                                                    "WaitUntilTranscriptionJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVocabularyOutcome> WaitUntilVocabularyReady(const Model::GetVocabularyRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetVocabularyOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("READY"),
                         [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetVocabularyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::VocabularyStateMapper::GetNameForVocabularyState(result.GetVocabularyState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetVocabularyRequest& req) { return static_cast<DerivedClient*>(this)->GetVocabulary(req); };
    Aws::Utils::Waiter<Model::GetVocabularyRequest, Model::GetVocabularyOutcome> waiter(10, 12, acceptors, operation,
                                                                                        "WaitUntilVocabularyReady");
    return waiter.Wait(request);
  }
};
}  // namespace TranscribeService
}  // namespace Aws
