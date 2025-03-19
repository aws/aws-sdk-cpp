/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the segments associated with the service insertion
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ServiceInsertionSegments">AWS
   * API Reference</a></p>
   */
  class ServiceInsertionSegments
  {
  public:
    AWS_NETWORKMANAGER_API ServiceInsertionSegments() = default;
    AWS_NETWORKMANAGER_API ServiceInsertionSegments(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ServiceInsertionSegments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSendVia() const { return m_sendVia; }
    inline bool SendViaHasBeenSet() const { return m_sendViaHasBeenSet; }
    template<typename SendViaT = Aws::Vector<Aws::String>>
    void SetSendVia(SendViaT&& value) { m_sendViaHasBeenSet = true; m_sendVia = std::forward<SendViaT>(value); }
    template<typename SendViaT = Aws::Vector<Aws::String>>
    ServiceInsertionSegments& WithSendVia(SendViaT&& value) { SetSendVia(std::forward<SendViaT>(value)); return *this;}
    template<typename SendViaT = Aws::String>
    ServiceInsertionSegments& AddSendVia(SendViaT&& value) { m_sendViaHasBeenSet = true; m_sendVia.emplace_back(std::forward<SendViaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSendTo() const { return m_sendTo; }
    inline bool SendToHasBeenSet() const { return m_sendToHasBeenSet; }
    template<typename SendToT = Aws::Vector<Aws::String>>
    void SetSendTo(SendToT&& value) { m_sendToHasBeenSet = true; m_sendTo = std::forward<SendToT>(value); }
    template<typename SendToT = Aws::Vector<Aws::String>>
    ServiceInsertionSegments& WithSendTo(SendToT&& value) { SetSendTo(std::forward<SendToT>(value)); return *this;}
    template<typename SendToT = Aws::String>
    ServiceInsertionSegments& AddSendTo(SendToT&& value) { m_sendToHasBeenSet = true; m_sendTo.emplace_back(std::forward<SendToT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_sendVia;
    bool m_sendViaHasBeenSet = false;

    Aws::Vector<Aws::String> m_sendTo;
    bool m_sendToHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
