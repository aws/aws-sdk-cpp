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
 * <p>The content of the message template that applies to the WHATSAPP channel
 * subtype.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/WhatsAppMessageTemplateContent">AWS
 * API Reference</a></p>
 */
class WhatsAppMessageTemplateContent {
 public:
  AWS_QCONNECT_API WhatsAppMessageTemplateContent() = default;
  AWS_QCONNECT_API WhatsAppMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API WhatsAppMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The data.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  WhatsAppMessageTemplateContent& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
