﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/SSMOutput.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Output from validating an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/AppValidationOutput">AWS
   * API Reference</a></p>
   */
  class AppValidationOutput
  {
  public:
    AWS_SMS_API AppValidationOutput() = default;
    AWS_SMS_API AppValidationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API AppValidationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Output from using SSM to validate the application.</p>
     */
    inline const SSMOutput& GetSsmOutput() const { return m_ssmOutput; }
    inline bool SsmOutputHasBeenSet() const { return m_ssmOutputHasBeenSet; }
    template<typename SsmOutputT = SSMOutput>
    void SetSsmOutput(SsmOutputT&& value) { m_ssmOutputHasBeenSet = true; m_ssmOutput = std::forward<SsmOutputT>(value); }
    template<typename SsmOutputT = SSMOutput>
    AppValidationOutput& WithSsmOutput(SsmOutputT&& value) { SetSsmOutput(std::forward<SsmOutputT>(value)); return *this;}
    ///@}
  private:

    SSMOutput m_ssmOutput;
    bool m_ssmOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
