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
    AWS_NETWORKMANAGER_API ServiceInsertionSegments();
    AWS_NETWORKMANAGER_API ServiceInsertionSegments(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ServiceInsertionSegments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSendVia() const{ return m_sendVia; }

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline bool SendViaHasBeenSet() const { return m_sendViaHasBeenSet; }

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline void SetSendVia(const Aws::Vector<Aws::String>& value) { m_sendViaHasBeenSet = true; m_sendVia = value; }

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline void SetSendVia(Aws::Vector<Aws::String>&& value) { m_sendViaHasBeenSet = true; m_sendVia = std::move(value); }

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline ServiceInsertionSegments& WithSendVia(const Aws::Vector<Aws::String>& value) { SetSendVia(value); return *this;}

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline ServiceInsertionSegments& WithSendVia(Aws::Vector<Aws::String>&& value) { SetSendVia(std::move(value)); return *this;}

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline ServiceInsertionSegments& AddSendVia(const Aws::String& value) { m_sendViaHasBeenSet = true; m_sendVia.push_back(value); return *this; }

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline ServiceInsertionSegments& AddSendVia(Aws::String&& value) { m_sendViaHasBeenSet = true; m_sendVia.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of segments associated with the <code>send-via</code> action.</p>
     */
    inline ServiceInsertionSegments& AddSendVia(const char* value) { m_sendViaHasBeenSet = true; m_sendVia.push_back(value); return *this; }


    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSendTo() const{ return m_sendTo; }

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline bool SendToHasBeenSet() const { return m_sendToHasBeenSet; }

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline void SetSendTo(const Aws::Vector<Aws::String>& value) { m_sendToHasBeenSet = true; m_sendTo = value; }

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline void SetSendTo(Aws::Vector<Aws::String>&& value) { m_sendToHasBeenSet = true; m_sendTo = std::move(value); }

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline ServiceInsertionSegments& WithSendTo(const Aws::Vector<Aws::String>& value) { SetSendTo(value); return *this;}

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline ServiceInsertionSegments& WithSendTo(Aws::Vector<Aws::String>&& value) { SetSendTo(std::move(value)); return *this;}

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline ServiceInsertionSegments& AddSendTo(const Aws::String& value) { m_sendToHasBeenSet = true; m_sendTo.push_back(value); return *this; }

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline ServiceInsertionSegments& AddSendTo(Aws::String&& value) { m_sendToHasBeenSet = true; m_sendTo.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of segments associated with the <code>send-to</code> action.</p>
     */
    inline ServiceInsertionSegments& AddSendTo(const char* value) { m_sendToHasBeenSet = true; m_sendTo.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_sendVia;
    bool m_sendViaHasBeenSet = false;

    Aws::Vector<Aws::String> m_sendTo;
    bool m_sendToHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
