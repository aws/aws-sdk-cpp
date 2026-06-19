/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/MQ_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MQ {
namespace Model {

/**
 * <p>Returns info about the resource share error after updating the
 * broker.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ResourceShareError">AWS
 * API Reference</a></p>
 */
class ResourceShareError {
 public:
  AWS_MQ_API ResourceShareError() = default;
  AWS_MQ_API ResourceShareError(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API ResourceShareError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code of the resource share.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  ResourceShareError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the resource share.</p>
   */
  inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
  inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
  template <typename ResourceShareArnT = Aws::String>
  void SetResourceShareArn(ResourceShareArnT&& value) {
    m_resourceShareArnHasBeenSet = true;
    m_resourceShareArn = std::forward<ResourceShareArnT>(value);
  }
  template <typename ResourceShareArnT = Aws::String>
  ResourceShareError& WithResourceShareArn(ResourceShareArnT&& value) {
    SetResourceShareArn(std::forward<ResourceShareArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the resource share.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  ResourceShareError& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_errorCode;

  Aws::String m_resourceShareArn;

  Aws::String m_status;
  bool m_errorCodeHasBeenSet = false;
  bool m_resourceShareArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace MQ
}  // namespace Aws
