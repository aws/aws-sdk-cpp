/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/ExecutionStatus.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The current status and value of a card in an active Amazon Q App
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/CardStatus">AWS
   * API Reference</a></p>
   */
  class CardStatus
  {
  public:
    AWS_QAPPS_API CardStatus();
    AWS_QAPPS_API CardStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API CardStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the card.</p>
     */
    inline const ExecutionStatus& GetCurrentState() const{ return m_currentState; }
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }
    inline void SetCurrentState(const ExecutionStatus& value) { m_currentStateHasBeenSet = true; m_currentState = value; }
    inline void SetCurrentState(ExecutionStatus&& value) { m_currentStateHasBeenSet = true; m_currentState = std::move(value); }
    inline CardStatus& WithCurrentState(const ExecutionStatus& value) { SetCurrentState(value); return *this;}
    inline CardStatus& WithCurrentState(ExecutionStatus&& value) { SetCurrentState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value or result associated with the card.</p>
     */
    inline const Aws::String& GetCurrentValue() const{ return m_currentValue; }
    inline bool CurrentValueHasBeenSet() const { return m_currentValueHasBeenSet; }
    inline void SetCurrentValue(const Aws::String& value) { m_currentValueHasBeenSet = true; m_currentValue = value; }
    inline void SetCurrentValue(Aws::String&& value) { m_currentValueHasBeenSet = true; m_currentValue = std::move(value); }
    inline void SetCurrentValue(const char* value) { m_currentValueHasBeenSet = true; m_currentValue.assign(value); }
    inline CardStatus& WithCurrentValue(const Aws::String& value) { SetCurrentValue(value); return *this;}
    inline CardStatus& WithCurrentValue(Aws::String&& value) { SetCurrentValue(std::move(value)); return *this;}
    inline CardStatus& WithCurrentValue(const char* value) { SetCurrentValue(value); return *this;}
    ///@}
  private:

    ExecutionStatus m_currentState;
    bool m_currentStateHasBeenSet = false;

    Aws::String m_currentValue;
    bool m_currentValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
