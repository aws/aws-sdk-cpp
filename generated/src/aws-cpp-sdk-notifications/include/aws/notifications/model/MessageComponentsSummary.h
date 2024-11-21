/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Contains the headline message component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/MessageComponentsSummary">AWS
   * API Reference</a></p>
   */
  class MessageComponentsSummary
  {
  public:
    AWS_NOTIFICATIONS_API MessageComponentsSummary();
    AWS_NOTIFICATIONS_API MessageComponentsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API MessageComponentsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A sentence long summary. For example, titles or an email subject line.</p>
     */
    inline const Aws::String& GetHeadline() const{ return m_headline; }
    inline bool HeadlineHasBeenSet() const { return m_headlineHasBeenSet; }
    inline void SetHeadline(const Aws::String& value) { m_headlineHasBeenSet = true; m_headline = value; }
    inline void SetHeadline(Aws::String&& value) { m_headlineHasBeenSet = true; m_headline = std::move(value); }
    inline void SetHeadline(const char* value) { m_headlineHasBeenSet = true; m_headline.assign(value); }
    inline MessageComponentsSummary& WithHeadline(const Aws::String& value) { SetHeadline(value); return *this;}
    inline MessageComponentsSummary& WithHeadline(Aws::String&& value) { SetHeadline(std::move(value)); return *this;}
    inline MessageComponentsSummary& WithHeadline(const char* value) { SetHeadline(value); return *this;}
    ///@}
  private:

    Aws::String m_headline;
    bool m_headlineHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
