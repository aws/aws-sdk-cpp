/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Metadata for a service function created event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceFunctionCreatedMetadata">AWS
 * API Reference</a></p>
 */
class ServiceFunctionCreatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServiceFunctionCreatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServiceFunctionCreatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceFunctionCreatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the created service function.</p>
   */
  inline const Aws::String& GetServiceFunctionId() const { return m_serviceFunctionId; }
  inline bool ServiceFunctionIdHasBeenSet() const { return m_serviceFunctionIdHasBeenSet; }
  template <typename ServiceFunctionIdT = Aws::String>
  void SetServiceFunctionId(ServiceFunctionIdT&& value) {
    m_serviceFunctionIdHasBeenSet = true;
    m_serviceFunctionId = std::forward<ServiceFunctionIdT>(value);
  }
  template <typename ServiceFunctionIdT = Aws::String>
  ServiceFunctionCreatedMetadata& WithServiceFunctionId(ServiceFunctionIdT&& value) {
    SetServiceFunctionId(std::forward<ServiceFunctionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the created service function.</p>
   */
  inline const Aws::String& GetServiceFunctionName() const { return m_serviceFunctionName; }
  inline bool ServiceFunctionNameHasBeenSet() const { return m_serviceFunctionNameHasBeenSet; }
  template <typename ServiceFunctionNameT = Aws::String>
  void SetServiceFunctionName(ServiceFunctionNameT&& value) {
    m_serviceFunctionNameHasBeenSet = true;
    m_serviceFunctionName = std::forward<ServiceFunctionNameT>(value);
  }
  template <typename ServiceFunctionNameT = Aws::String>
  ServiceFunctionCreatedMetadata& WithServiceFunctionName(ServiceFunctionNameT&& value) {
    SetServiceFunctionName(std::forward<ServiceFunctionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceFunctionId;

  Aws::String m_serviceFunctionName;
  bool m_serviceFunctionIdHasBeenSet = false;
  bool m_serviceFunctionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
