/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Contains the name and value of a tag that you apply to an email. You can use
   * message tags when you publish email sending events. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/MessageTag">AWS
   * API Reference</a></p>
   */
  class MessageTag
  {
  public:
    AWS_PINPOINTEMAIL_API MessageTag() = default;
    AWS_PINPOINTEMAIL_API MessageTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API MessageTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MessageTag& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    MessageTag& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
