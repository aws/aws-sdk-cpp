/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>The limit on the number of requests per second was exceeded.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_VPCLATTICE_API ThrottlingException() = default;
    AWS_VPCLATTICE_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ThrottlingException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service quota that was exceeded.</p>
     */
    inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
    template<typename QuotaCodeT = Aws::String>
    void SetQuotaCode(QuotaCodeT&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::forward<QuotaCodeT>(value); }
    template<typename QuotaCodeT = Aws::String>
    ThrottlingException& WithQuotaCode(QuotaCodeT&& value) { SetQuotaCode(std::forward<QuotaCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds to wait before retrying.</p>
     */
    inline int GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
    inline void SetRetryAfterSeconds(int value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }
    inline ThrottlingException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service code.</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    ThrottlingException& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    int m_retryAfterSeconds{0};
    bool m_retryAfterSecondsHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
