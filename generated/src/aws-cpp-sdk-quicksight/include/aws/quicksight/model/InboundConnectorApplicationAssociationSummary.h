/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>An association between an inbound connector and an access control
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InboundConnectorApplicationAssociationSummary">AWS
 * API Reference</a></p>
 */
class InboundConnectorApplicationAssociationSummary {
 public:
  AWS_QUICKSIGHT_API InboundConnectorApplicationAssociationSummary() = default;
  AWS_QUICKSIGHT_API InboundConnectorApplicationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API InboundConnectorApplicationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the associated access control application.</p>
   */
  inline const Aws::String& GetAccessControlApplicationArn() const { return m_accessControlApplicationArn; }
  inline bool AccessControlApplicationArnHasBeenSet() const { return m_accessControlApplicationArnHasBeenSet; }
  template <typename AccessControlApplicationArnT = Aws::String>
  void SetAccessControlApplicationArn(AccessControlApplicationArnT&& value) {
    m_accessControlApplicationArnHasBeenSet = true;
    m_accessControlApplicationArn = std::forward<AccessControlApplicationArnT>(value);
  }
  template <typename AccessControlApplicationArnT = Aws::String>
  InboundConnectorApplicationAssociationSummary& WithAccessControlApplicationArn(AccessControlApplicationArnT&& value) {
    SetAccessControlApplicationArn(std::forward<AccessControlApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the association was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  InboundConnectorApplicationAssociationSummary& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessControlApplicationArn;

  Aws::Utils::DateTime m_createdTime{};
  bool m_accessControlApplicationArnHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
