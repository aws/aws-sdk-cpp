/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information about the phrases blocked from chat by your chat control
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/BlockedPhrasesConfiguration">AWS
   * API Reference</a></p>
   */
  class BlockedPhrasesConfiguration
  {
  public:
    AWS_QBUSINESS_API BlockedPhrasesConfiguration();
    AWS_QBUSINESS_API BlockedPhrasesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API BlockedPhrasesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedPhrases() const{ return m_blockedPhrases; }

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline bool BlockedPhrasesHasBeenSet() const { return m_blockedPhrasesHasBeenSet; }

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline void SetBlockedPhrases(const Aws::Vector<Aws::String>& value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases = value; }

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline void SetBlockedPhrases(Aws::Vector<Aws::String>&& value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases = std::move(value); }

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline BlockedPhrasesConfiguration& WithBlockedPhrases(const Aws::Vector<Aws::String>& value) { SetBlockedPhrases(value); return *this;}

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline BlockedPhrasesConfiguration& WithBlockedPhrases(Aws::Vector<Aws::String>&& value) { SetBlockedPhrases(std::move(value)); return *this;}

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline BlockedPhrasesConfiguration& AddBlockedPhrases(const Aws::String& value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases.push_back(value); return *this; }

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline BlockedPhrasesConfiguration& AddBlockedPhrases(Aws::String&& value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of phrases blocked from a Amazon Q web experience chat.</p>
     */
    inline BlockedPhrasesConfiguration& AddBlockedPhrases(const char* value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases.push_back(value); return *this; }


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
    inline BlockedPhrasesConfiguration& WithSystemMessageOverride(const Aws::String& value) { SetSystemMessageOverride(value); return *this;}

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline BlockedPhrasesConfiguration& WithSystemMessageOverride(Aws::String&& value) { SetSystemMessageOverride(std::move(value)); return *this;}

    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline BlockedPhrasesConfiguration& WithSystemMessageOverride(const char* value) { SetSystemMessageOverride(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_blockedPhrases;
    bool m_blockedPhrasesHasBeenSet = false;

    Aws::String m_systemMessageOverride;
    bool m_systemMessageOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
