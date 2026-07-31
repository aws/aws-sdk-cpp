/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
 * <p>Contains summary information about a test.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestSummary">AWS
 * API Reference</a></p>
 */
class TestSummary {
 public:
  AWS_RESILIENCEHUBV2_API TestSummary() = default;
  AWS_RESILIENCEHUBV2_API TestSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the test.</p>
   */
  inline const Aws::String& GetTestId() const { return m_testId; }
  inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
  template <typename TestIdT = Aws::String>
  void SetTestId(TestIdT&& value) {
    m_testIdHasBeenSet = true;
    m_testId = std::forward<TestIdT>(value);
  }
  template <typename TestIdT = Aws::String>
  TestSummary& WithTestId(TestIdT&& value) {
    SetTestId(std::forward<TestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the test template the test was created from.</p>
   */
  inline const Aws::String& GetTestTemplateArn() const { return m_testTemplateArn; }
  inline bool TestTemplateArnHasBeenSet() const { return m_testTemplateArnHasBeenSet; }
  template <typename TestTemplateArnT = Aws::String>
  void SetTestTemplateArn(TestTemplateArnT&& value) {
    m_testTemplateArnHasBeenSet = true;
    m_testTemplateArn = std::forward<TestTemplateArnT>(value);
  }
  template <typename TestTemplateArnT = Aws::String>
  TestSummary& WithTestTemplateArn(TestTemplateArnT&& value) {
    SetTestTemplateArn(std::forward<TestTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the service the test belongs to.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  TestSummary& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of runs of the test.</p>
   */
  inline int GetTotalTestRuns() const { return m_totalTestRuns; }
  inline bool TotalTestRunsHasBeenSet() const { return m_totalTestRunsHasBeenSet; }
  inline void SetTotalTestRuns(int value) {
    m_totalTestRunsHasBeenSet = true;
    m_totalTestRuns = value;
  }
  inline TestSummary& WithTotalTestRuns(int value) {
    SetTotalTestRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of successful runs of the test.</p>
   */
  inline int GetSuccessfulTestRuns() const { return m_successfulTestRuns; }
  inline bool SuccessfulTestRunsHasBeenSet() const { return m_successfulTestRunsHasBeenSet; }
  inline void SetSuccessfulTestRuns(int value) {
    m_successfulTestRunsHasBeenSet = true;
    m_successfulTestRuns = value;
  }
  inline TestSummary& WithSuccessfulTestRuns(int value) {
    SetSuccessfulTestRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  TestSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testId;

  Aws::String m_testTemplateArn;

  Aws::String m_serviceArn;

  int m_totalTestRuns{0};

  int m_successfulTestRuns{0};

  Aws::Utils::DateTime m_creationTime{};
  bool m_testIdHasBeenSet = false;
  bool m_testTemplateArnHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_totalTestRunsHasBeenSet = false;
  bool m_successfulTestRunsHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
