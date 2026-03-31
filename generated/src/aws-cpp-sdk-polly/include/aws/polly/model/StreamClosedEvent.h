/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>Indicates that the synthesis stream is closed and provides summary
 * information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StreamClosedEvent">AWS
 * API Reference</a></p>
 */
class StreamClosedEvent {
 public:
  AWS_POLLY_API StreamClosedEvent() = default;
  AWS_POLLY_API StreamClosedEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API StreamClosedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of characters synthesized during the streaming session.</p>
   */
  inline int GetRequestCharacters() const { return m_requestCharacters; }
  inline bool RequestCharactersHasBeenSet() const { return m_requestCharactersHasBeenSet; }
  inline void SetRequestCharacters(int value) {
    m_requestCharactersHasBeenSet = true;
    m_requestCharacters = value;
  }
  inline StreamClosedEvent& WithRequestCharacters(int value) {
    SetRequestCharacters(value);
    return *this;
  }
  ///@}
 private:
  int m_requestCharacters{0};
  bool m_requestCharactersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
