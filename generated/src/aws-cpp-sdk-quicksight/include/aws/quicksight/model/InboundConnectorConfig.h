/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InboundConnectorType.h>

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
 * <p>The configuration of an inbound connector, including its type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InboundConnectorConfig">AWS
 * API Reference</a></p>
 */
class InboundConnectorConfig {
 public:
  AWS_QUICKSIGHT_API InboundConnectorConfig() = default;
  AWS_QUICKSIGHT_API InboundConnectorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API InboundConnectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the inbound connector. You can't change the type after the
   * connector is created.</p>
   */
  inline InboundConnectorType GetInboundConnectorType() const { return m_inboundConnectorType; }
  inline bool InboundConnectorTypeHasBeenSet() const { return m_inboundConnectorTypeHasBeenSet; }
  inline void SetInboundConnectorType(InboundConnectorType value) {
    m_inboundConnectorTypeHasBeenSet = true;
    m_inboundConnectorType = value;
  }
  inline InboundConnectorConfig& WithInboundConnectorType(InboundConnectorType value) {
    SetInboundConnectorType(value);
    return *this;
  }
  ///@}
 private:
  InboundConnectorType m_inboundConnectorType{InboundConnectorType::NOT_SET};
  bool m_inboundConnectorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
