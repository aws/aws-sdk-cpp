/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingRequest.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

#include <utility>

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Model {

/**
 */
class GetFooRequest : public TestNewServiceSDKTestingRequest {
 public:
  AWS_TESTNEWSERVICESDKTESTING_API GetFooRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetFoo"; }

  AWS_TESTNEWSERVICESDKTESTING_API Aws::String SerializePayload() const override;

  AWS_TESTNEWSERVICESDKTESTING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetFooId() const { return m_fooId; }
  inline bool FooIdHasBeenSet() const { return m_fooIdHasBeenSet; }
  template <typename FooIdT = Aws::String>
  void SetFooId(FooIdT&& value) {
    m_fooIdHasBeenSet = true;
    m_fooId = std::forward<FooIdT>(value);
  }
  template <typename FooIdT = Aws::String>
  GetFooRequest& WithFooId(FooIdT&& value) {
    SetFooId(std::forward<FooIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fooId;
  bool m_fooIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
