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
 * <p>Metadata for a service system associated event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceSystemAssociatedMetadata">AWS
 * API Reference</a></p>
 */
class ServiceSystemAssociatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServiceSystemAssociatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServiceSystemAssociatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceSystemAssociatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the associated system.</p>
   */
  inline const Aws::String& GetSystemName() const { return m_systemName; }
  inline bool SystemNameHasBeenSet() const { return m_systemNameHasBeenSet; }
  template <typename SystemNameT = Aws::String>
  void SetSystemName(SystemNameT&& value) {
    m_systemNameHasBeenSet = true;
    m_systemName = std::forward<SystemNameT>(value);
  }
  template <typename SystemNameT = Aws::String>
  ServiceSystemAssociatedMetadata& WithSystemName(SystemNameT&& value) {
    SetSystemName(std::forward<SystemNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  ServiceSystemAssociatedMetadata& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemName;

  Aws::String m_systemArn;
  bool m_systemNameHasBeenSet = false;
  bool m_systemArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
