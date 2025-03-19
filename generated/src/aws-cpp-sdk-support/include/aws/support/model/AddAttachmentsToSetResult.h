/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The ID and expiry time of the attachment set returned by the
   * <a>AddAttachmentsToSet</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSetResponse">AWS
   * API Reference</a></p>
   */
  class AddAttachmentsToSetResult
  {
  public:
    AWS_SUPPORT_API AddAttachmentsToSetResult() = default;
    AWS_SUPPORT_API AddAttachmentsToSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API AddAttachmentsToSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const { return m_attachmentSetId; }
    template<typename AttachmentSetIdT = Aws::String>
    void SetAttachmentSetId(AttachmentSetIdT&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::forward<AttachmentSetIdT>(value); }
    template<typename AttachmentSetIdT = Aws::String>
    AddAttachmentsToSetResult& WithAttachmentSetId(AttachmentSetIdT&& value) { SetAttachmentSetId(std::forward<AttachmentSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline const Aws::String& GetExpiryTime() const { return m_expiryTime; }
    template<typename ExpiryTimeT = Aws::String>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::String>
    AddAttachmentsToSetResult& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddAttachmentsToSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet = false;

    Aws::String m_expiryTime;
    bool m_expiryTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
