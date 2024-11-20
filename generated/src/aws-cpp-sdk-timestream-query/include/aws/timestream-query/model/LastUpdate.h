/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/LastUpdateStatus.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Configuration object that contains the most recent account settings update,
   * visible only if settings have been updated previously.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/LastUpdate">AWS
   * API Reference</a></p>
   */
  class LastUpdate
  {
  public:
    AWS_TIMESTREAMQUERY_API LastUpdate();
    AWS_TIMESTREAMQUERY_API LastUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API LastUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of TimeStream Compute Units (TCUs) requested in the last account
     * settings update.</p>
     */
    inline int GetTargetQueryTCU() const{ return m_targetQueryTCU; }
    inline bool TargetQueryTCUHasBeenSet() const { return m_targetQueryTCUHasBeenSet; }
    inline void SetTargetQueryTCU(int value) { m_targetQueryTCUHasBeenSet = true; m_targetQueryTCU = value; }
    inline LastUpdate& WithTargetQueryTCU(int value) { SetTargetQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last update. Can be either <code>PENDING</code>,
     * <code>FAILED</code>, or <code>SUCCEEDED</code>.</p>
     */
    inline const LastUpdateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LastUpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LastUpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LastUpdate& WithStatus(const LastUpdateStatus& value) { SetStatus(value); return *this;}
    inline LastUpdate& WithStatus(LastUpdateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message describing the last account settings update status, visible
     * only if an error occurred.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline LastUpdate& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline LastUpdate& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline LastUpdate& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    int m_targetQueryTCU;
    bool m_targetQueryTCUHasBeenSet = false;

    LastUpdateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
