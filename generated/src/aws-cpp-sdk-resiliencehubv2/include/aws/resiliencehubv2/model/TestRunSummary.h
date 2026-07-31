/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AccountTargeting.h>
#include <aws/resiliencehubv2/model/TestRunStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains summary information about a test run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunSummary">AWS
 * API Reference</a></p>
 */
class TestRunSummary {
 public:
  AWS_RESILIENCEHUBV2_API TestRunSummary() = default;
  AWS_RESILIENCEHUBV2_API TestRunSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the test run.</p>
   */
  inline const Aws::String& GetTestRunId() const { return m_testRunId; }
  inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
  template <typename TestRunIdT = Aws::String>
  void SetTestRunId(TestRunIdT&& value) {
    m_testRunIdHasBeenSet = true;
    m_testRunId = std::forward<TestRunIdT>(value);
  }
  template <typename TestRunIdT = Aws::String>
  TestRunSummary& WithTestRunId(TestRunIdT&& value) {
    SetTestRunId(std::forward<TestRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the test run.</p>
   */
  inline TestRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TestRunSummary& WithStatus(TestRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test run started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  TestRunSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test run ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  TestRunSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the test template the test run was based on.</p>
   */
  inline const Aws::String& GetTestTemplateArn() const { return m_testTemplateArn; }
  inline bool TestTemplateArnHasBeenSet() const { return m_testTemplateArnHasBeenSet; }
  template <typename TestTemplateArnT = Aws::String>
  void SetTestTemplateArn(TestTemplateArnT&& value) {
    m_testTemplateArnHasBeenSet = true;
    m_testTemplateArn = std::forward<TestTemplateArnT>(value);
  }
  template <typename TestTemplateArnT = Aws::String>
  TestRunSummary& WithTestTemplateArn(TestTemplateArnT&& value) {
    SetTestTemplateArn(std::forward<TestTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the service the test run belongs to.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  TestRunSummary& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable reason for test run failure. Only present when the status is
   * FAILED or ERROR.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  TestRunSummary& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this test run targets a single account or multiple
   * accounts.</p>
   */
  inline AccountTargeting GetAccountTargeting() const { return m_accountTargeting; }
  inline bool AccountTargetingHasBeenSet() const { return m_accountTargetingHasBeenSet; }
  inline void SetAccountTargeting(AccountTargeting value) {
    m_accountTargetingHasBeenSet = true;
    m_accountTargeting = value;
  }
  inline TestRunSummary& WithAccountTargeting(AccountTargeting value) {
    SetAccountTargeting(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_testRunId;

  TestRunStatus m_status{TestRunStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::String m_testTemplateArn;

  Aws::String m_serviceArn;

  Aws::String m_errorMessage;

  AccountTargeting m_accountTargeting{AccountTargeting::NOT_SET};
  bool m_testRunIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_testTemplateArnHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_accountTargetingHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
