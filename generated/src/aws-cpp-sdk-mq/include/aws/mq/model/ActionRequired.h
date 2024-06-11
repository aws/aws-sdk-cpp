/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Action required for a broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ActionRequired">AWS
   * API Reference</a></p>
   */
  class ActionRequired
  {
  public:
    AWS_MQ_API ActionRequired();
    AWS_MQ_API ActionRequired(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API ActionRequired& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code you can use to find instructions on the action required to resolve
     * your broker issue.</p>
     */
    inline const Aws::String& GetActionRequiredCode() const{ return m_actionRequiredCode; }
    inline bool ActionRequiredCodeHasBeenSet() const { return m_actionRequiredCodeHasBeenSet; }
    inline void SetActionRequiredCode(const Aws::String& value) { m_actionRequiredCodeHasBeenSet = true; m_actionRequiredCode = value; }
    inline void SetActionRequiredCode(Aws::String&& value) { m_actionRequiredCodeHasBeenSet = true; m_actionRequiredCode = std::move(value); }
    inline void SetActionRequiredCode(const char* value) { m_actionRequiredCodeHasBeenSet = true; m_actionRequiredCode.assign(value); }
    inline ActionRequired& WithActionRequiredCode(const Aws::String& value) { SetActionRequiredCode(value); return *this;}
    inline ActionRequired& WithActionRequiredCode(Aws::String&& value) { SetActionRequiredCode(std::move(value)); return *this;}
    inline ActionRequired& WithActionRequiredCode(const char* value) { SetActionRequiredCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the action required to resolve your broker issue.</p>
     */
    inline const Aws::String& GetActionRequiredInfo() const{ return m_actionRequiredInfo; }
    inline bool ActionRequiredInfoHasBeenSet() const { return m_actionRequiredInfoHasBeenSet; }
    inline void SetActionRequiredInfo(const Aws::String& value) { m_actionRequiredInfoHasBeenSet = true; m_actionRequiredInfo = value; }
    inline void SetActionRequiredInfo(Aws::String&& value) { m_actionRequiredInfoHasBeenSet = true; m_actionRequiredInfo = std::move(value); }
    inline void SetActionRequiredInfo(const char* value) { m_actionRequiredInfoHasBeenSet = true; m_actionRequiredInfo.assign(value); }
    inline ActionRequired& WithActionRequiredInfo(const Aws::String& value) { SetActionRequiredInfo(value); return *this;}
    inline ActionRequired& WithActionRequiredInfo(Aws::String&& value) { SetActionRequiredInfo(std::move(value)); return *this;}
    inline ActionRequired& WithActionRequiredInfo(const char* value) { SetActionRequiredInfo(value); return *this;}
    ///@}
  private:

    Aws::String m_actionRequiredCode;
    bool m_actionRequiredCodeHasBeenSet = false;

    Aws::String m_actionRequiredInfo;
    bool m_actionRequiredInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
