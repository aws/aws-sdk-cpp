/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p> Information about a single NDI® sender, including its name. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/NdiSourceInfo">AWS
 * API Reference</a></p>
 */
class NdiSourceInfo {
 public:
  AWS_MEDIACONNECT_API NdiSourceInfo() = default;
  AWS_MEDIACONNECT_API NdiSourceInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API NdiSourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The name of the upstream NDI sender. </p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  NdiSourceInfo& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceName;
  bool m_sourceNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
