/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>An annotation that provides additional context or metadata.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/Annotation">AWS
 * API Reference</a></p>
 */
class Annotation {
 public:
  AWS_QCONNECT_API Annotation() = default;
  AWS_QCONNECT_API Annotation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Annotation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The title of the annotation.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  Annotation& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A hint indicating that the annotation contains potentially destructive
   * content.</p>
   */
  inline bool GetDestructiveHint() const { return m_destructiveHint; }
  inline bool DestructiveHintHasBeenSet() const { return m_destructiveHintHasBeenSet; }
  inline void SetDestructiveHint(bool value) {
    m_destructiveHintHasBeenSet = true;
    m_destructiveHint = value;
  }
  inline Annotation& WithDestructiveHint(bool value) {
    SetDestructiveHint(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  bool m_destructiveHint{false};
  bool m_titleHasBeenSet = false;
  bool m_destructiveHintHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
