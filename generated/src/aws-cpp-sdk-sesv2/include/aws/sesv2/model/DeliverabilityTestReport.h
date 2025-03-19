/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/DeliverabilityTestStatus.h>
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
   * <p>An object that contains metadata related to a predictive inbox placement
   * test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeliverabilityTestReport">AWS
   * API Reference</a></p>
   */
  class DeliverabilityTestReport
  {
  public:
    AWS_SESV2_API DeliverabilityTestReport() = default;
    AWS_SESV2_API DeliverabilityTestReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DeliverabilityTestReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    DeliverabilityTestReport& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name that helps you identify a predictive inbox placement test report.</p>
     */
    inline const Aws::String& GetReportName() const { return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    template<typename ReportNameT = Aws::String>
    void SetReportName(ReportNameT&& value) { m_reportNameHasBeenSet = true; m_reportName = std::forward<ReportNameT>(value); }
    template<typename ReportNameT = Aws::String>
    DeliverabilityTestReport& WithReportName(ReportNameT&& value) { SetReportName(std::forward<ReportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line for an email that you submitted in a predictive inbox
     * placement test.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    DeliverabilityTestReport& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sender address that you specified for the predictive inbox placement
     * test.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = Aws::String>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::String>
    DeliverabilityTestReport& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the predictive inbox placement test was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    DeliverabilityTestReport& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline DeliverabilityTestStatus GetDeliverabilityTestStatus() const { return m_deliverabilityTestStatus; }
    inline bool DeliverabilityTestStatusHasBeenSet() const { return m_deliverabilityTestStatusHasBeenSet; }
    inline void SetDeliverabilityTestStatus(DeliverabilityTestStatus value) { m_deliverabilityTestStatusHasBeenSet = true; m_deliverabilityTestStatus = value; }
    inline DeliverabilityTestReport& WithDeliverabilityTestStatus(DeliverabilityTestStatus value) { SetDeliverabilityTestStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    DeliverabilityTestStatus m_deliverabilityTestStatus{DeliverabilityTestStatus::NOT_SET};
    bool m_deliverabilityTestStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
