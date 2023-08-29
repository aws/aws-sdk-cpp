/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to return information about a message.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetMessageInsightsRequest">AWS
   * API Reference</a></p>
   */
  class GetMessageInsightsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetMessageInsightsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMessageInsights"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline GetMessageInsightsRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline GetMessageInsightsRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p> A <code>MessageId</code> is a unique identifier for a message, and is
     * returned when sending emails through Amazon SES. </p>
     */
    inline GetMessageInsightsRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
