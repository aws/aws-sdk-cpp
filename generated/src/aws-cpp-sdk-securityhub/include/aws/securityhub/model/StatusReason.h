/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides additional context for the value of
   * <code>Compliance.Status</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StatusReason">AWS
   * API Reference</a></p>
   */
  class StatusReason
  {
  public:
    AWS_SECURITYHUB_API StatusReason();
    AWS_SECURITYHUB_API StatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A code that represents a reason for the control status. For the list of
     * status reason codes and their meanings, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-asff-compliance">Compliance
     * details for control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }
    inline StatusReason& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}
    inline StatusReason& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}
    inline StatusReason& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The corresponding description for the status reason code.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StatusReason& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StatusReason& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StatusReason& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
