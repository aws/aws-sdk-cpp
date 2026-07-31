/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestSourceInput.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class PutTestSourcesRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API PutTestSourcesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutTestSources"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the test to add sources to.</p>
   */
  inline const Aws::String& GetTestId() const { return m_testId; }
  inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
  template <typename TestIdT = Aws::String>
  void SetTestId(TestIdT&& value) {
    m_testIdHasBeenSet = true;
    m_testId = std::forward<TestIdT>(value);
  }
  template <typename TestIdT = Aws::String>
  PutTestSourcesRequest& WithTestId(TestIdT&& value) {
    SetTestId(std::forward<TestIdT>(value));
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
  PutTestSourcesRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monitoring sources to add or update.</p>
   */
  inline const Aws::Vector<TestSourceInput>& GetTestSources() const { return m_testSources; }
  inline bool TestSourcesHasBeenSet() const { return m_testSourcesHasBeenSet; }
  template <typename TestSourcesT = Aws::Vector<TestSourceInput>>
  void SetTestSources(TestSourcesT&& value) {
    m_testSourcesHasBeenSet = true;
    m_testSources = std::forward<TestSourcesT>(value);
  }
  template <typename TestSourcesT = Aws::Vector<TestSourceInput>>
  PutTestSourcesRequest& WithTestSources(TestSourcesT&& value) {
    SetTestSources(std::forward<TestSourcesT>(value));
    return *this;
  }
  template <typename TestSourcesT = TestSourceInput>
  PutTestSourcesRequest& AddTestSources(TestSourcesT&& value) {
    m_testSourcesHasBeenSet = true;
    m_testSources.emplace_back(std::forward<TestSourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testId;

  Aws::String m_serviceArn;

  Aws::Vector<TestSourceInput> m_testSources;
  bool m_testIdHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_testSourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
