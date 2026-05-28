/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class CreateServiceFunctionResourcesRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API CreateServiceFunctionResourcesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateServiceFunctionResources"; }

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
  CreateServiceFunctionResourcesRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the service function to associate resources with.</p>
   */
  inline const Aws::String& GetServiceFunctionId() const { return m_serviceFunctionId; }
  inline bool ServiceFunctionIdHasBeenSet() const { return m_serviceFunctionIdHasBeenSet; }
  template <typename ServiceFunctionIdT = Aws::String>
  void SetServiceFunctionId(ServiceFunctionIdT&& value) {
    m_serviceFunctionIdHasBeenSet = true;
    m_serviceFunctionId = std::forward<ServiceFunctionIdT>(value);
  }
  template <typename ServiceFunctionIdT = Aws::String>
  CreateServiceFunctionResourcesRequest& WithServiceFunctionId(ServiceFunctionIdT&& value) {
    SetServiceFunctionId(std::forward<ServiceFunctionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resources to associate with the service function.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  CreateServiceFunctionResourcesRequest& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Aws::String>
  CreateServiceFunctionResourcesRequest& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_serviceFunctionId;

  Aws::Vector<Aws::String> m_resources;
  bool m_serviceArnHasBeenSet = false;
  bool m_serviceFunctionIdHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
