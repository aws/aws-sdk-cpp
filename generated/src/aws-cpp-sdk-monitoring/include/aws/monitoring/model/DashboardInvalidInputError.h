/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/DashboardValidationMessage.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Some part of the dashboard data is invalid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DashboardInvalidInputError">AWS
   * API Reference</a></p>
   */
  class DashboardInvalidInputError
  {
  public:
    AWS_CLOUDWATCH_API DashboardInvalidInputError();
    AWS_CLOUDWATCH_API DashboardInvalidInputError(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API DashboardInvalidInputError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DashboardInvalidInputError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DashboardInvalidInputError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DashboardInvalidInputError& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::Vector<DashboardValidationMessage>& GetDashboardValidationMessages() const{ return m_dashboardValidationMessages; }

    
    inline bool DashboardValidationMessagesHasBeenSet() const { return m_dashboardValidationMessagesHasBeenSet; }

    
    inline void SetDashboardValidationMessages(const Aws::Vector<DashboardValidationMessage>& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages = value; }

    
    inline void SetDashboardValidationMessages(Aws::Vector<DashboardValidationMessage>&& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages = std::move(value); }

    
    inline DashboardInvalidInputError& WithDashboardValidationMessages(const Aws::Vector<DashboardValidationMessage>& value) { SetDashboardValidationMessages(value); return *this;}

    
    inline DashboardInvalidInputError& WithDashboardValidationMessages(Aws::Vector<DashboardValidationMessage>&& value) { SetDashboardValidationMessages(std::move(value)); return *this;}

    
    inline DashboardInvalidInputError& AddDashboardValidationMessages(const DashboardValidationMessage& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages.push_back(value); return *this; }

    
    inline DashboardInvalidInputError& AddDashboardValidationMessages(DashboardValidationMessage&& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<DashboardValidationMessage> m_dashboardValidationMessages;
    bool m_dashboardValidationMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
