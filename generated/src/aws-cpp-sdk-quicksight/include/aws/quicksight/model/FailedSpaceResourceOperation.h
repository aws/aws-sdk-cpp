/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SpaceQuickSightResourceDetails.h>
#include <aws/quicksight/model/SpaceQuickSightResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A resource operation that failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FailedSpaceResourceOperation">AWS
 * API Reference</a></p>
 */
class FailedSpaceResourceOperation {
 public:
  AWS_QUICKSIGHT_API FailedSpaceResourceOperation() = default;
  AWS_QUICKSIGHT_API FailedSpaceResourceOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FailedSpaceResourceOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the resource.</p>
   */
  inline SpaceQuickSightResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(SpaceQuickSightResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline FailedSpaceResourceOperation& WithResourceType(SpaceQuickSightResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the resource.</p>
   */
  inline const SpaceQuickSightResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
  inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
  template <typename ResourceDetailsT = SpaceQuickSightResourceDetails>
  void SetResourceDetails(ResourceDetailsT&& value) {
    m_resourceDetailsHasBeenSet = true;
    m_resourceDetails = std::forward<ResourceDetailsT>(value);
  }
  template <typename ResourceDetailsT = SpaceQuickSightResourceDetails>
  FailedSpaceResourceOperation& WithResourceDetails(ResourceDetailsT&& value) {
    SetResourceDetails(std::forward<ResourceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message that describes why the operation failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  FailedSpaceResourceOperation& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  SpaceQuickSightResourceType m_resourceType{SpaceQuickSightResourceType::NOT_SET};

  SpaceQuickSightResourceDetails m_resourceDetails;

  Aws::String m_errorMessage;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceDetailsHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
