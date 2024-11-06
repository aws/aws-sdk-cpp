/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/BatchGetPolicyErrorCode.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains the information about an error resulting from a
   * <code>BatchGetPolicy</code> API call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchGetPolicyErrorItem">AWS
   * API Reference</a></p>
   */
  class BatchGetPolicyErrorItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyErrorItem();
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyErrorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code that was returned.</p>
     */
    inline const BatchGetPolicyErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const BatchGetPolicyErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(BatchGetPolicyErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline BatchGetPolicyErrorItem& WithCode(const BatchGetPolicyErrorCode& value) { SetCode(value); return *this;}
    inline BatchGetPolicyErrorItem& WithCode(BatchGetPolicyErrorCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the policy store associated with the failed request.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }
    inline BatchGetPolicyErrorItem& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline BatchGetPolicyErrorItem& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline BatchGetPolicyErrorItem& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the policy associated with the failed request.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline BatchGetPolicyErrorItem& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline BatchGetPolicyErrorItem& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline BatchGetPolicyErrorItem& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchGetPolicyErrorItem& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchGetPolicyErrorItem& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchGetPolicyErrorItem& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    BatchGetPolicyErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
