/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>

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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Used to enable or disable email sending for messages that use this
   * configuration set in the current Amazon Web Services Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendingOptions">AWS
   * API Reference</a></p>
   */
  class SendingOptions
  {
  public:
    AWS_SESV2_API SendingOptions();
    AWS_SESV2_API SendingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SendingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }

    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline SendingOptions& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}

  private:

    bool m_sendingEnabled;
    bool m_sendingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
