/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Captures detailed error information for EC2 instance
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/EC2InstanceError">AWS
   * API Reference</a></p>
   */
  class EC2InstanceError
  {
  public:
    AWS_WORKSPACESINSTANCES_API EC2InstanceError() = default;
    AWS_WORKSPACESINSTANCES_API EC2InstanceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API EC2InstanceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique error code identifying the specific EC2 instance error.</p>
     */
    inline const Aws::String& GetEC2ErrorCode() const { return m_eC2ErrorCode; }
    inline bool EC2ErrorCodeHasBeenSet() const { return m_eC2ErrorCodeHasBeenSet; }
    template<typename EC2ErrorCodeT = Aws::String>
    void SetEC2ErrorCode(EC2ErrorCodeT&& value) { m_eC2ErrorCodeHasBeenSet = true; m_eC2ErrorCode = std::forward<EC2ErrorCodeT>(value); }
    template<typename EC2ErrorCodeT = Aws::String>
    EC2InstanceError& WithEC2ErrorCode(EC2ErrorCodeT&& value) { SetEC2ErrorCode(std::forward<EC2ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of exception encountered during EC2 instance operation.</p>
     */
    inline const Aws::String& GetEC2ExceptionType() const { return m_eC2ExceptionType; }
    inline bool EC2ExceptionTypeHasBeenSet() const { return m_eC2ExceptionTypeHasBeenSet; }
    template<typename EC2ExceptionTypeT = Aws::String>
    void SetEC2ExceptionType(EC2ExceptionTypeT&& value) { m_eC2ExceptionTypeHasBeenSet = true; m_eC2ExceptionType = std::forward<EC2ExceptionTypeT>(value); }
    template<typename EC2ExceptionTypeT = Aws::String>
    EC2InstanceError& WithEC2ExceptionType(EC2ExceptionTypeT&& value) { SetEC2ExceptionType(std::forward<EC2ExceptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed description of the EC2 instance error.</p>
     */
    inline const Aws::String& GetEC2ErrorMessage() const { return m_eC2ErrorMessage; }
    inline bool EC2ErrorMessageHasBeenSet() const { return m_eC2ErrorMessageHasBeenSet; }
    template<typename EC2ErrorMessageT = Aws::String>
    void SetEC2ErrorMessage(EC2ErrorMessageT&& value) { m_eC2ErrorMessageHasBeenSet = true; m_eC2ErrorMessage = std::forward<EC2ErrorMessageT>(value); }
    template<typename EC2ErrorMessageT = Aws::String>
    EC2InstanceError& WithEC2ErrorMessage(EC2ErrorMessageT&& value) { SetEC2ErrorMessage(std::forward<EC2ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eC2ErrorCode;
    bool m_eC2ErrorCodeHasBeenSet = false;

    Aws::String m_eC2ExceptionType;
    bool m_eC2ExceptionTypeHasBeenSet = false;

    Aws::String m_eC2ErrorMessage;
    bool m_eC2ErrorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
