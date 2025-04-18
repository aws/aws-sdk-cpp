/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>

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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The configuration for a <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_amazon-q-connect_SendMessage.html">SendMessage</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageConfiguration">AWS
   * API Reference</a></p>
   */
  class MessageConfiguration
  {
  public:
    AWS_QCONNECT_API MessageConfiguration() = default;
    AWS_QCONNECT_API MessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Generates a filler response when tool selection is <code>QUESTION</code>.</p>
     */
    inline bool GetGenerateFillerMessage() const { return m_generateFillerMessage; }
    inline bool GenerateFillerMessageHasBeenSet() const { return m_generateFillerMessageHasBeenSet; }
    inline void SetGenerateFillerMessage(bool value) { m_generateFillerMessageHasBeenSet = true; m_generateFillerMessage = value; }
    inline MessageConfiguration& WithGenerateFillerMessage(bool value) { SetGenerateFillerMessage(value); return *this;}
    ///@}
  private:

    bool m_generateFillerMessage{false};
    bool m_generateFillerMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
