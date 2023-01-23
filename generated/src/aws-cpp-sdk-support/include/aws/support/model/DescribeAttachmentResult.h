/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/Attachment.h>
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
   * <p>The content and file name of the attachment returned by the
   * <a>DescribeAttachment</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachmentResponse">AWS
   * API Reference</a></p>
   */
  class DescribeAttachmentResult
  {
  public:
    AWS_SUPPORT_API DescribeAttachmentResult();
    AWS_SUPPORT_API DescribeAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This object includes the attachment content and file name.</p> <p>In the
     * previous response syntax, the value for the <code>data</code> parameter appears
     * as <code>blob</code>, which is represented as a base64-encoded string. The value
     * for <code>fileName</code> is the name of the attachment, such as
     * <code>troubleshoot-screenshot.png</code>.</p>
     */
    inline const Attachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>This object includes the attachment content and file name.</p> <p>In the
     * previous response syntax, the value for the <code>data</code> parameter appears
     * as <code>blob</code>, which is represented as a base64-encoded string. The value
     * for <code>fileName</code> is the name of the attachment, such as
     * <code>troubleshoot-screenshot.png</code>.</p>
     */
    inline void SetAttachment(const Attachment& value) { m_attachment = value; }

    /**
     * <p>This object includes the attachment content and file name.</p> <p>In the
     * previous response syntax, the value for the <code>data</code> parameter appears
     * as <code>blob</code>, which is represented as a base64-encoded string. The value
     * for <code>fileName</code> is the name of the attachment, such as
     * <code>troubleshoot-screenshot.png</code>.</p>
     */
    inline void SetAttachment(Attachment&& value) { m_attachment = std::move(value); }

    /**
     * <p>This object includes the attachment content and file name.</p> <p>In the
     * previous response syntax, the value for the <code>data</code> parameter appears
     * as <code>blob</code>, which is represented as a base64-encoded string. The value
     * for <code>fileName</code> is the name of the attachment, such as
     * <code>troubleshoot-screenshot.png</code>.</p>
     */
    inline DescribeAttachmentResult& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>This object includes the attachment content and file name.</p> <p>In the
     * previous response syntax, the value for the <code>data</code> parameter appears
     * as <code>blob</code>, which is represented as a base64-encoded string. The value
     * for <code>fileName</code> is the name of the attachment, such as
     * <code>troubleshoot-screenshot.png</code>.</p>
     */
    inline DescribeAttachmentResult& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}

  private:

    Attachment m_attachment;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
