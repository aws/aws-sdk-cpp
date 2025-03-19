/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  class ContactCenterActivity
  {
  public:
    AWS_PINPOINT_API ContactCenterActivity() = default;
    AWS_PINPOINT_API ContactCenterActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ContactCenterActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the next activity to perform after the this
     * activity.</p>
     */
    inline const Aws::String& GetNextActivity() const { return m_nextActivity; }
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }
    template<typename NextActivityT = Aws::String>
    void SetNextActivity(NextActivityT&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::forward<NextActivityT>(value); }
    template<typename NextActivityT = Aws::String>
    ContactCenterActivity& WithNextActivity(NextActivityT&& value) { SetNextActivity(std::forward<NextActivityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
