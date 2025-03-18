/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/Sender.h>
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
   * <p>A message in a conversation, used as input for generating an Amazon Q App
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ConversationMessage">AWS
   * API Reference</a></p>
   */
  class ConversationMessage
  {
  public:
    AWS_QAPPS_API ConversationMessage() = default;
    AWS_QAPPS_API ConversationMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API ConversationMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text content of the conversation message.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    ConversationMessage& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the conversation message.</p>
     */
    inline Sender GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Sender value) { m_typeHasBeenSet = true; m_type = value; }
    inline ConversationMessage& WithType(Sender value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Sender m_type{Sender::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
