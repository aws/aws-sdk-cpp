/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Passthrough.h>

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
 * <p>The configuration settings for the program number.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ProgramNumberConfiguration">AWS
 * API Reference</a></p>
 */
class ProgramNumberConfiguration {
 public:
  AWS_MEDIACONNECT_API ProgramNumberConfiguration() = default;
  AWS_MEDIACONNECT_API ProgramNumberConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ProgramNumberConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The program number configuration that passes through the program number from
   * the source.</p>
   */
  inline const Passthrough& GetPassthrough() const { return m_passthrough; }
  inline bool PassthroughHasBeenSet() const { return m_passthroughHasBeenSet; }
  template <typename PassthroughT = Passthrough>
  void SetPassthrough(PassthroughT&& value) {
    m_passthroughHasBeenSet = true;
    m_passthrough = std::forward<PassthroughT>(value);
  }
  template <typename PassthroughT = Passthrough>
  ProgramNumberConfiguration& WithPassthrough(PassthroughT&& value) {
    SetPassthrough(std::forward<PassthroughT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The program number to use for the router output.</p>
   */
  inline int GetSet() const { return m_set; }
  inline bool SetHasBeenSet() const { return m_setHasBeenSet; }
  inline void SetSet(int value) {
    m_setHasBeenSet = true;
    m_set = value;
  }
  inline ProgramNumberConfiguration& WithSet(int value) {
    SetSet(value);
    return *this;
  }
  ///@}
 private:
  Passthrough m_passthrough;

  int m_set{0};
  bool m_passthroughHasBeenSet = false;
  bool m_setHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
