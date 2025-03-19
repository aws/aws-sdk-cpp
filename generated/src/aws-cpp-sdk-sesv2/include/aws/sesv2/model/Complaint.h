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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>Information about a <code>Complaint</code> event.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Complaint">AWS
   * API Reference</a></p>
   */
  class Complaint
  {
  public:
    AWS_SESV2_API Complaint() = default;
    AWS_SESV2_API Complaint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Complaint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Can either be <code>null</code> or <code>OnAccountSuppressionList</code>. If
     * the value is <code>OnAccountSuppressionList</code>, SES accepted the message,
     * but didn't attempt to send it because it was on the account-level suppression
     * list. </p>
     */
    inline const Aws::String& GetComplaintSubType() const { return m_complaintSubType; }
    inline bool ComplaintSubTypeHasBeenSet() const { return m_complaintSubTypeHasBeenSet; }
    template<typename ComplaintSubTypeT = Aws::String>
    void SetComplaintSubType(ComplaintSubTypeT&& value) { m_complaintSubTypeHasBeenSet = true; m_complaintSubType = std::forward<ComplaintSubTypeT>(value); }
    template<typename ComplaintSubTypeT = Aws::String>
    Complaint& WithComplaintSubType(ComplaintSubTypeT&& value) { SetComplaintSubType(std::forward<ComplaintSubTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the <code>Feedback-Type</code> field from the feedback report
     * received from the ISP. </p>
     */
    inline const Aws::String& GetComplaintFeedbackType() const { return m_complaintFeedbackType; }
    inline bool ComplaintFeedbackTypeHasBeenSet() const { return m_complaintFeedbackTypeHasBeenSet; }
    template<typename ComplaintFeedbackTypeT = Aws::String>
    void SetComplaintFeedbackType(ComplaintFeedbackTypeT&& value) { m_complaintFeedbackTypeHasBeenSet = true; m_complaintFeedbackType = std::forward<ComplaintFeedbackTypeT>(value); }
    template<typename ComplaintFeedbackTypeT = Aws::String>
    Complaint& WithComplaintFeedbackType(ComplaintFeedbackTypeT&& value) { SetComplaintFeedbackType(std::forward<ComplaintFeedbackTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_complaintSubType;
    bool m_complaintSubTypeHasBeenSet = false;

    Aws::String m_complaintFeedbackType;
    bool m_complaintFeedbackTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
