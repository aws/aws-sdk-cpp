/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A rule for configuring how Amazon Q responds when it encounters a a blocked
   * topic. You can configure a custom message to inform your end users that they
   * have asked about a restricted topic and suggest any next steps they should
   * take.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ContentBlockerRule">AWS
   * API Reference</a></p>
   */
  class ContentBlockerRule
  {
  public:
    AWS_QBUSINESS_API ContentBlockerRule();
    AWS_QBUSINESS_API ContentBlockerRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ContentBlockerRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline const Aws::String& GetSystemMessageOverride() const{ return m_systemMessageOverride; }

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline bool SystemMessageOverrideHasBeenSet() const { return m_systemMessageOverrideHasBeenSet; }

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline void SetSystemMessageOverride(const Aws::String& value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride = value; }

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline void SetSystemMessageOverride(Aws::String&& value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride = std::move(value); }

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline void SetSystemMessageOverride(const char* value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride.assign(value); }

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline ContentBlockerRule& WithSystemMessageOverride(const Aws::String& value) { SetSystemMessageOverride(value); return *this;}

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline ContentBlockerRule& WithSystemMessageOverride(Aws::String&& value) { SetSystemMessageOverride(std::move(value)); return *this;}

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline ContentBlockerRule& WithSystemMessageOverride(const char* value) { SetSystemMessageOverride(value); return *this;}

  private:

    Aws::String m_systemMessageOverride;
    bool m_systemMessageOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
