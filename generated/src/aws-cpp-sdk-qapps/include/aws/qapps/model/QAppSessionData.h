/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/qapps/model/User.h>
#include <aws/core/utils/DateTime.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The response collected for a Amazon Q App session. This container represents
   * a single response to a Q App session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/QAppSessionData">AWS
   * API Reference</a></p>
   */
  class QAppSessionData
  {
  public:
    AWS_QAPPS_API QAppSessionData() = default;
    AWS_QAPPS_API QAppSessionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API QAppSessionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The card Id associated with the response submitted for a Q App session.</p>
     */
    inline const Aws::String& GetCardId() const { return m_cardId; }
    inline bool CardIdHasBeenSet() const { return m_cardIdHasBeenSet; }
    template<typename CardIdT = Aws::String>
    void SetCardId(CardIdT&& value) { m_cardIdHasBeenSet = true; m_cardId = std::forward<CardIdT>(value); }
    template<typename CardIdT = Aws::String>
    QAppSessionData& WithCardId(CardIdT&& value) { SetCardId(std::forward<CardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response submitted for a Q App session.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::Document>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::Document>
    QAppSessionData& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who submitted the response for a Q App session.</p>
     */
    inline const User& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = User>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = User>
    QAppSessionData& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the submission.</p>
     */
    inline const Aws::String& GetSubmissionId() const { return m_submissionId; }
    inline bool SubmissionIdHasBeenSet() const { return m_submissionIdHasBeenSet; }
    template<typename SubmissionIdT = Aws::String>
    void SetSubmissionId(SubmissionIdT&& value) { m_submissionIdHasBeenSet = true; m_submissionId = std::forward<SubmissionIdT>(value); }
    template<typename SubmissionIdT = Aws::String>
    QAppSessionData& WithSubmissionId(SubmissionIdT&& value) { SetSubmissionId(std::forward<SubmissionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the session data is submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    QAppSessionData& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cardId;
    bool m_cardIdHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;

    User m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_submissionId;
    bool m_submissionIdHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
