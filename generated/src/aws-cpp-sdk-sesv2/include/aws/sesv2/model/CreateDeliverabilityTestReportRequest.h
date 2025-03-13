/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/EmailContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to perform a predictive inbox placement test. Predictive inbox
   * placement tests can help you predict how your messages will be handled by
   * various email providers around the world. When you perform a predictive inbox
   * placement test, you provide a sample message that contains the content that you
   * plan to send to your customers. We send that message to special email addresses
   * spread across several major email providers around the world. The test takes
   * about 24 hours to complete. When the test is complete, you can use the
   * <code>GetDeliverabilityTestReport</code> operation to view the results of the
   * test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDeliverabilityTestReportRequest">AWS
   * API Reference</a></p>
   */
  class CreateDeliverabilityTestReportRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateDeliverabilityTestReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeliverabilityTestReport"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique name that helps you to identify the predictive inbox placement test
     * when you retrieve the results.</p>
     */
    inline const Aws::String& GetReportName() const { return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    template<typename ReportNameT = Aws::String>
    void SetReportName(ReportNameT&& value) { m_reportNameHasBeenSet = true; m_reportName = std::forward<ReportNameT>(value); }
    template<typename ReportNameT = Aws::String>
    CreateDeliverabilityTestReportRequest& WithReportName(ReportNameT&& value) { SetReportName(std::forward<ReportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that the predictive inbox placement test email was sent
     * from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = Aws::String>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::String>
    CreateDeliverabilityTestReportRequest& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML body of the message that you sent when you performed the predictive
     * inbox placement test.</p>
     */
    inline const EmailContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = EmailContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = EmailContent>
    CreateDeliverabilityTestReportRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the predictive inbox placement test.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDeliverabilityTestReportRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDeliverabilityTestReportRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    EmailContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
