/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ManagedStorageType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The managed configuration of a model package group.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ManagedConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedConfiguration {
 public:
  AWS_SAGEMAKER_API ManagedConfiguration() = default;
  AWS_SAGEMAKER_API ManagedConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ManagedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The storage type of the model package.</p>
   */
  inline ManagedStorageType GetManagedStorageType() const { return m_managedStorageType; }
  inline bool ManagedStorageTypeHasBeenSet() const { return m_managedStorageTypeHasBeenSet; }
  inline void SetManagedStorageType(ManagedStorageType value) {
    m_managedStorageTypeHasBeenSet = true;
    m_managedStorageType = value;
  }
  inline ManagedConfiguration& WithManagedStorageType(ManagedStorageType value) {
    SetManagedStorageType(value);
    return *this;
  }
  ///@}
 private:
  ManagedStorageType m_managedStorageType{ManagedStorageType::NOT_SET};
  bool m_managedStorageTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
