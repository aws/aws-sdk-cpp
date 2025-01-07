/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>Contains information on the event destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppBusinessAccountEventDestination">AWS
   * API Reference</a></p>
   */
  class WhatsAppBusinessAccountEventDestination
  {
  public:
    AWS_SOCIALMESSAGING_API WhatsAppBusinessAccountEventDestination();
    AWS_SOCIALMESSAGING_API WhatsAppBusinessAccountEventDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WhatsAppBusinessAccountEventDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the event destination.</p>
     */
    inline const Aws::String& GetEventDestinationArn() const{ return m_eventDestinationArn; }
    inline bool EventDestinationArnHasBeenSet() const { return m_eventDestinationArnHasBeenSet; }
    inline void SetEventDestinationArn(const Aws::String& value) { m_eventDestinationArnHasBeenSet = true; m_eventDestinationArn = value; }
    inline void SetEventDestinationArn(Aws::String&& value) { m_eventDestinationArnHasBeenSet = true; m_eventDestinationArn = std::move(value); }
    inline void SetEventDestinationArn(const char* value) { m_eventDestinationArnHasBeenSet = true; m_eventDestinationArn.assign(value); }
    inline WhatsAppBusinessAccountEventDestination& WithEventDestinationArn(const Aws::String& value) { SetEventDestinationArn(value); return *this;}
    inline WhatsAppBusinessAccountEventDestination& WithEventDestinationArn(Aws::String&& value) { SetEventDestinationArn(std::move(value)); return *this;}
    inline WhatsAppBusinessAccountEventDestination& WithEventDestinationArn(const char* value) { SetEventDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * is able to import phone numbers and write events.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline WhatsAppBusinessAccountEventDestination& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline WhatsAppBusinessAccountEventDestination& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline WhatsAppBusinessAccountEventDestination& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_eventDestinationArn;
    bool m_eventDestinationArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
