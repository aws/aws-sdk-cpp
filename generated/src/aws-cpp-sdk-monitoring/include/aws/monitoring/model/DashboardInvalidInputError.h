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
    AWS_CLOUDWATCH_API DashboardInvalidInputError() = default;
    AWS_CLOUDWATCH_API DashboardInvalidInputError(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API DashboardInvalidInputError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DashboardInvalidInputError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<DashboardValidationMessage>& GetDashboardValidationMessages() const { return m_dashboardValidationMessages; }
    inline bool DashboardValidationMessagesHasBeenSet() const { return m_dashboardValidationMessagesHasBeenSet; }
    template<typename DashboardValidationMessagesT = Aws::Vector<DashboardValidationMessage>>
    void SetDashboardValidationMessages(DashboardValidationMessagesT&& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages = std::forward<DashboardValidationMessagesT>(value); }
    template<typename DashboardValidationMessagesT = Aws::Vector<DashboardValidationMessage>>
    DashboardInvalidInputError& WithDashboardValidationMessages(DashboardValidationMessagesT&& value) { SetDashboardValidationMessages(std::forward<DashboardValidationMessagesT>(value)); return *this;}
    template<typename DashboardValidationMessagesT = DashboardValidationMessage>
    DashboardInvalidInputError& AddDashboardValidationMessages(DashboardValidationMessagesT&& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages.emplace_back(std::forward<DashboardValidationMessagesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<DashboardValidationMessage> m_dashboardValidationMessages;
    bool m_dashboardValidationMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
