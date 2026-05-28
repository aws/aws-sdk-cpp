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
class DeleteServiceFunctionRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API DeleteServiceFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceFunction"; }

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
  DeleteServiceFunctionRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the service function to delete.</p>
   */
  inline const Aws::String& GetServiceFunctionId() const { return m_serviceFunctionId; }
  inline bool ServiceFunctionIdHasBeenSet() const { return m_serviceFunctionIdHasBeenSet; }
  template <typename ServiceFunctionIdT = Aws::String>
  void SetServiceFunctionId(ServiceFunctionIdT&& value) {
    m_serviceFunctionIdHasBeenSet = true;
    m_serviceFunctionId = std::forward<ServiceFunctionIdT>(value);
  }
  template <typename ServiceFunctionIdT = Aws::String>
  DeleteServiceFunctionRequest& WithServiceFunctionId(ServiceFunctionIdT&& value) {
    SetServiceFunctionId(std::forward<ServiceFunctionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_serviceFunctionId;
  bool m_serviceArnHasBeenSet = false;
  bool m_serviceFunctionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
