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
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyErrorItem() = default;
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyErrorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code that was returned.</p>
     */
    inline BatchGetPolicyErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(BatchGetPolicyErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline BatchGetPolicyErrorItem& WithCode(BatchGetPolicyErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the policy store associated with the failed request.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    BatchGetPolicyErrorItem& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the policy associated with the failed request.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    BatchGetPolicyErrorItem& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed error message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchGetPolicyErrorItem& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    BatchGetPolicyErrorCode m_code{BatchGetPolicyErrorCode::NOT_SET};
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
