/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Provides additional information about an error that was returned by the
   * service. See the <code>errorCode</code> and <code>errorDetails</code> members
   * for more information about the error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/StorageGatewayError">AWS
   * API Reference</a></p>
   */
  class StorageGatewayError
  {
  public:
    AWS_STORAGEGATEWAY_API StorageGatewayError() = default;
    AWS_STORAGEGATEWAY_API StorageGatewayError(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API StorageGatewayError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional information about the error.</p>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline StorageGatewayError& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::Map<Aws::String, Aws::String>>
    StorageGatewayError& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    template<typename ErrorDetailsKeyT = Aws::String, typename ErrorDetailsValueT = Aws::String>
    StorageGatewayError& AddErrorDetails(ErrorDetailsKeyT&& key, ErrorDetailsValueT&& value) {
      m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(std::forward<ErrorDetailsKeyT>(key), std::forward<ErrorDetailsValueT>(value)); return *this;
    }
    ///@}
  private:

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
