/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>This exception contains a list of messages that might contain one or more
   * error messages. Each error message indicates one error in the change
   * batch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/InvalidChangeBatch">AWS
   * API Reference</a></p>
   */
  class InvalidChangeBatch
  {
  public:
    AWS_ROUTE53_API InvalidChangeBatch();
    AWS_ROUTE53_API InvalidChangeBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API InvalidChangeBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetMessages() const{ return m_messages; }

    /**
     * <p/>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMessages(const Aws::Vector<Aws::String>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p/>
     */
    inline void SetMessages(Aws::Vector<Aws::String>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p/>
     */
    inline InvalidChangeBatch& WithMessages(const Aws::Vector<Aws::String>& value) { SetMessages(value); return *this;}

    /**
     * <p/>
     */
    inline InvalidChangeBatch& WithMessages(Aws::Vector<Aws::String>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline InvalidChangeBatch& AddMessages(const Aws::String& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline InvalidChangeBatch& AddMessages(Aws::String&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline InvalidChangeBatch& AddMessages(const char* value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidChangeBatch& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidChangeBatch& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidChangeBatch& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
