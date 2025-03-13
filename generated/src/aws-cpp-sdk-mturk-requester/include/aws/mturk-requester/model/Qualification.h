/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mturk-requester/model/Locale.h>
#include <aws/mturk-requester/model/QualificationStatus.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p>The Qualification data structure represents a Qualification assigned to a
   * user, including the Qualification type and the value (score).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/Qualification">AWS
   * API Reference</a></p>
   */
  class Qualification
  {
  public:
    AWS_MTURK_API Qualification() = default;
    AWS_MTURK_API Qualification(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Qualification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const { return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    template<typename QualificationTypeIdT = Aws::String>
    void SetQualificationTypeId(QualificationTypeIdT&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::forward<QualificationTypeIdT>(value); }
    template<typename QualificationTypeIdT = Aws::String>
    Qualification& WithQualificationTypeId(QualificationTypeIdT&& value) { SetQualificationTypeId(std::forward<QualificationTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    Qualification& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time the Qualification was granted to the Worker. If the
     * Worker's Qualification was revoked, and then re-granted based on a new
     * Qualification request, GrantTime is the date and time of the last call to the
     * AcceptQualificationRequest operation.</p>
     */
    inline const Aws::Utils::DateTime& GetGrantTime() const { return m_grantTime; }
    inline bool GrantTimeHasBeenSet() const { return m_grantTimeHasBeenSet; }
    template<typename GrantTimeT = Aws::Utils::DateTime>
    void SetGrantTime(GrantTimeT&& value) { m_grantTimeHasBeenSet = true; m_grantTime = std::forward<GrantTimeT>(value); }
    template<typename GrantTimeT = Aws::Utils::DateTime>
    Qualification& WithGrantTime(GrantTimeT&& value) { SetGrantTime(std::forward<GrantTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value (score) of the Qualification, if the Qualification has an integer
     * value.</p>
     */
    inline int GetIntegerValue() const { return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline Qualification& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Locale& GetLocaleValue() const { return m_localeValue; }
    inline bool LocaleValueHasBeenSet() const { return m_localeValueHasBeenSet; }
    template<typename LocaleValueT = Locale>
    void SetLocaleValue(LocaleValueT&& value) { m_localeValueHasBeenSet = true; m_localeValue = std::forward<LocaleValueT>(value); }
    template<typename LocaleValueT = Locale>
    Qualification& WithLocaleValue(LocaleValueT&& value) { SetLocaleValue(std::forward<LocaleValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the Qualification. Valid values are Granted | Revoked.</p>
     */
    inline QualificationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(QualificationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Qualification& WithStatus(QualificationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::Utils::DateTime m_grantTime{};
    bool m_grantTimeHasBeenSet = false;

    int m_integerValue{0};
    bool m_integerValueHasBeenSet = false;

    Locale m_localeValue;
    bool m_localeValueHasBeenSet = false;

    QualificationStatus m_status{QualificationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
