﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/StatusReasonCode.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The reason for the current status of your subscription to the
   * standard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsStatusReason">AWS
   * API Reference</a></p>
   */
  class StandardsStatusReason
  {
  public:
    AWS_SECURITYHUB_API StandardsStatusReason() = default;
    AWS_SECURITYHUB_API StandardsStatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason code that represents the reason for the current status of a
     * standard subscription.</p>
     */
    inline StatusReasonCode GetStatusReasonCode() const { return m_statusReasonCode; }
    inline bool StatusReasonCodeHasBeenSet() const { return m_statusReasonCodeHasBeenSet; }
    inline void SetStatusReasonCode(StatusReasonCode value) { m_statusReasonCodeHasBeenSet = true; m_statusReasonCode = value; }
    inline StandardsStatusReason& WithStatusReasonCode(StatusReasonCode value) { SetStatusReasonCode(value); return *this;}
    ///@}
  private:

    StatusReasonCode m_statusReasonCode{StatusReasonCode::NOT_SET};
    bool m_statusReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
