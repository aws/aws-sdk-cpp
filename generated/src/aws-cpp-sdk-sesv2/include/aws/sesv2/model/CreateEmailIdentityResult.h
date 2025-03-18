/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/IdentityType.h>
#include <aws/sesv2/model/DkimAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>If the email identity is a domain, this object contains information about the
   * DKIM verification status for the domain.</p> <p>If the email identity is an
   * email address, this object is empty. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityResponse">AWS
   * API Reference</a></p>
   */
  class CreateEmailIdentityResult
  {
  public:
    AWS_SESV2_API CreateEmailIdentityResult() = default;
    AWS_SESV2_API CreateEmailIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API CreateEmailIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline CreateEmailIdentityResult& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the identity is verified. You can only send email
     * from verified email addresses or domains. For more information about verifying
     * identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline bool GetVerifiedForSendingStatus() const { return m_verifiedForSendingStatus; }
    inline void SetVerifiedForSendingStatus(bool value) { m_verifiedForSendingStatusHasBeenSet = true; m_verifiedForSendingStatus = value; }
    inline CreateEmailIdentityResult& WithVerifiedForSendingStatus(bool value) { SetVerifiedForSendingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity.</p>
     */
    inline const DkimAttributes& GetDkimAttributes() const { return m_dkimAttributes; }
    template<typename DkimAttributesT = DkimAttributes>
    void SetDkimAttributes(DkimAttributesT&& value) { m_dkimAttributesHasBeenSet = true; m_dkimAttributes = std::forward<DkimAttributesT>(value); }
    template<typename DkimAttributesT = DkimAttributes>
    CreateEmailIdentityResult& WithDkimAttributes(DkimAttributesT&& value) { SetDkimAttributes(std::forward<DkimAttributesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEmailIdentityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    bool m_verifiedForSendingStatus{false};
    bool m_verifiedForSendingStatusHasBeenSet = false;

    DkimAttributes m_dkimAttributes;
    bool m_dkimAttributesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
