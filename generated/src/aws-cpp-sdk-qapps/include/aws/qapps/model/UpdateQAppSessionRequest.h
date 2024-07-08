/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/CardValue.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class UpdateQAppSessionRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API UpdateQAppSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQAppSession"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application environment
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateQAppSessionRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateQAppSessionRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateQAppSessionRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App session to provide input for.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline UpdateQAppSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline UpdateQAppSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline UpdateQAppSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input values to provide for the current state of the Q App session.</p>
     */
    inline const Aws::Vector<CardValue>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<CardValue>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<CardValue>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline UpdateQAppSessionRequest& WithValues(const Aws::Vector<CardValue>& value) { SetValues(value); return *this;}
    inline UpdateQAppSessionRequest& WithValues(Aws::Vector<CardValue>&& value) { SetValues(std::move(value)); return *this;}
    inline UpdateQAppSessionRequest& AddValues(const CardValue& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline UpdateQAppSessionRequest& AddValues(CardValue&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Vector<CardValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
