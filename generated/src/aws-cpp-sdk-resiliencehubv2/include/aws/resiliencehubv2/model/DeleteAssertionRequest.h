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
class DeleteAssertionRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API DeleteAssertionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAssertion"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  DeleteAssertionRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the assertion to delete.</p>
   */
  inline const Aws::String& GetAssertionId() const { return m_assertionId; }
  inline bool AssertionIdHasBeenSet() const { return m_assertionIdHasBeenSet; }
  template <typename AssertionIdT = Aws::String>
  void SetAssertionId(AssertionIdT&& value) {
    m_assertionIdHasBeenSet = true;
    m_assertionId = std::forward<AssertionIdT>(value);
  }
  template <typename AssertionIdT = Aws::String>
  DeleteAssertionRequest& WithAssertionId(AssertionIdT&& value) {
    SetAssertionId(std::forward<AssertionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_assertionId;
  bool m_serviceArnHasBeenSet = false;
  bool m_assertionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
