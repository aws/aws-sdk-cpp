/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class StopTestRunRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API StopTestRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopTestRun"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the test run to stop.</p>
   */
  inline const Aws::String& GetTestRunId() const { return m_testRunId; }
  inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
  template <typename TestRunIdT = Aws::String>
  void SetTestRunId(TestRunIdT&& value) {
    m_testRunIdHasBeenSet = true;
    m_testRunId = std::forward<TestRunIdT>(value);
  }
  template <typename TestRunIdT = Aws::String>
  StopTestRunRequest& WithTestRunId(TestRunIdT&& value) {
    SetTestRunId(std::forward<TestRunIdT>(value));
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
  StopTestRunRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testRunId;

  Aws::String m_serviceArn;
  bool m_testRunIdHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
