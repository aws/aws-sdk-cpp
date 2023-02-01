/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
   * <p>The following element is returned by the service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendCustomVerificationEmailResponse">AWS
   * API Reference</a></p>
   */
  class SendCustomVerificationEmailResult
  {
  public:
    AWS_SESV2_API SendCustomVerificationEmailResult();
    AWS_SESV2_API SendCustomVerificationEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API SendCustomVerificationEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline SendCustomVerificationEmailResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline SendCustomVerificationEmailResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline SendCustomVerificationEmailResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
