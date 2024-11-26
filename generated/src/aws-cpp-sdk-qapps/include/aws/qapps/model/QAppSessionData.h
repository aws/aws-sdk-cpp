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
    AWS_QAPPS_API QAppSessionData();
    AWS_QAPPS_API QAppSessionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API QAppSessionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The card Id associated with the response submitted for a Q App session.</p>
     */
    inline const Aws::String& GetCardId() const{ return m_cardId; }
    inline bool CardIdHasBeenSet() const { return m_cardIdHasBeenSet; }
    inline void SetCardId(const Aws::String& value) { m_cardIdHasBeenSet = true; m_cardId = value; }
    inline void SetCardId(Aws::String&& value) { m_cardIdHasBeenSet = true; m_cardId = std::move(value); }
    inline void SetCardId(const char* value) { m_cardIdHasBeenSet = true; m_cardId.assign(value); }
    inline QAppSessionData& WithCardId(const Aws::String& value) { SetCardId(value); return *this;}
    inline QAppSessionData& WithCardId(Aws::String&& value) { SetCardId(std::move(value)); return *this;}
    inline QAppSessionData& WithCardId(const char* value) { SetCardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response submitted for a Q App session.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline QAppSessionData& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}
    inline QAppSessionData& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who submitted the response for a Q App session.</p>
     */
    inline const User& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const User& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(User&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline QAppSessionData& WithUser(const User& value) { SetUser(value); return *this;}
    inline QAppSessionData& WithUser(User&& value) { SetUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the submission.</p>
     */
    inline const Aws::String& GetSubmissionId() const{ return m_submissionId; }
    inline bool SubmissionIdHasBeenSet() const { return m_submissionIdHasBeenSet; }
    inline void SetSubmissionId(const Aws::String& value) { m_submissionIdHasBeenSet = true; m_submissionId = value; }
    inline void SetSubmissionId(Aws::String&& value) { m_submissionIdHasBeenSet = true; m_submissionId = std::move(value); }
    inline void SetSubmissionId(const char* value) { m_submissionIdHasBeenSet = true; m_submissionId.assign(value); }
    inline QAppSessionData& WithSubmissionId(const Aws::String& value) { SetSubmissionId(value); return *this;}
    inline QAppSessionData& WithSubmissionId(Aws::String&& value) { SetSubmissionId(std::move(value)); return *this;}
    inline QAppSessionData& WithSubmissionId(const char* value) { SetSubmissionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the session data is submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline QAppSessionData& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline QAppSessionData& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
