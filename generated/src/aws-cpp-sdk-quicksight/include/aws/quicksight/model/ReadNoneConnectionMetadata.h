/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Read-only metadata for connections that do not require authentication
 * credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadNoneConnectionMetadata">AWS
 * API Reference</a></p>
 */
class ReadNoneConnectionMetadata {
 public:
  AWS_QUICKSIGHT_API ReadNoneConnectionMetadata() = default;
  AWS_QUICKSIGHT_API ReadNoneConnectionMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ReadNoneConnectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base endpoint URL for connections that do not require authentication.</p>
   */
  inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
  inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
  template <typename BaseEndpointT = Aws::String>
  void SetBaseEndpoint(BaseEndpointT&& value) {
    m_baseEndpointHasBeenSet = true;
    m_baseEndpoint = std::forward<BaseEndpointT>(value);
  }
  template <typename BaseEndpointT = Aws::String>
  ReadNoneConnectionMetadata& WithBaseEndpoint(BaseEndpointT&& value) {
    SetBaseEndpoint(std::forward<BaseEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseEndpoint;
  bool m_baseEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
