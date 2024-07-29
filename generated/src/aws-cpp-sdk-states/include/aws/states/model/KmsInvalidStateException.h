/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/KmsKeyState.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>The KMS key is not in valid state, for example: Disabled or
   * Deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/KmsInvalidStateException">AWS
   * API Reference</a></p>
   */
  class KmsInvalidStateException
  {
  public:
    AWS_SFN_API KmsInvalidStateException();
    AWS_SFN_API KmsInvalidStateException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API KmsInvalidStateException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Current status of the KMS; key. For example: <code>DISABLED</code>,
     * <code>PENDING_DELETION</code>, <code>PENDING_IMPORT</code>,
     * <code>UNAVAILABLE</code>, <code>CREATING</code>.</p>
     */
    inline const KmsKeyState& GetKmsKeyState() const{ return m_kmsKeyState; }
    inline bool KmsKeyStateHasBeenSet() const { return m_kmsKeyStateHasBeenSet; }
    inline void SetKmsKeyState(const KmsKeyState& value) { m_kmsKeyStateHasBeenSet = true; m_kmsKeyState = value; }
    inline void SetKmsKeyState(KmsKeyState&& value) { m_kmsKeyStateHasBeenSet = true; m_kmsKeyState = std::move(value); }
    inline KmsInvalidStateException& WithKmsKeyState(const KmsKeyState& value) { SetKmsKeyState(value); return *this;}
    inline KmsInvalidStateException& WithKmsKeyState(KmsKeyState&& value) { SetKmsKeyState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline KmsInvalidStateException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline KmsInvalidStateException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline KmsInvalidStateException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    KmsKeyState m_kmsKeyState;
    bool m_kmsKeyStateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
