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
    AWS_QBUSINESS_API BlockedPhrasesConfiguration() = default;
    AWS_QBUSINESS_API BlockedPhrasesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API BlockedPhrasesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of phrases blocked from a Amazon Q Business web experience chat.</p>
     *  <p>Each phrase can contain a maximum of 36 characters. The list can
     * contain a maximum of 20 phrases.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetBlockedPhrases() const { return m_blockedPhrases; }
    inline bool BlockedPhrasesHasBeenSet() const { return m_blockedPhrasesHasBeenSet; }
    template<typename BlockedPhrasesT = Aws::Vector<Aws::String>>
    void SetBlockedPhrases(BlockedPhrasesT&& value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases = std::forward<BlockedPhrasesT>(value); }
    template<typename BlockedPhrasesT = Aws::Vector<Aws::String>>
    BlockedPhrasesConfiguration& WithBlockedPhrases(BlockedPhrasesT&& value) { SetBlockedPhrases(std::forward<BlockedPhrasesT>(value)); return *this;}
    template<typename BlockedPhrasesT = Aws::String>
    BlockedPhrasesConfiguration& AddBlockedPhrases(BlockedPhrasesT&& value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases.emplace_back(std::forward<BlockedPhrasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configured custom message displayed to an end user informing them that
     * they've used a blocked phrase during chat.</p>
     */
    inline const Aws::String& GetSystemMessageOverride() const { return m_systemMessageOverride; }
    inline bool SystemMessageOverrideHasBeenSet() const { return m_systemMessageOverrideHasBeenSet; }
    template<typename SystemMessageOverrideT = Aws::String>
    void SetSystemMessageOverride(SystemMessageOverrideT&& value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride = std::forward<SystemMessageOverrideT>(value); }
    template<typename SystemMessageOverrideT = Aws::String>
    BlockedPhrasesConfiguration& WithSystemMessageOverride(SystemMessageOverrideT&& value) { SetSystemMessageOverride(std::forward<SystemMessageOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_blockedPhrases;
    bool m_blockedPhrasesHasBeenSet = false;

    Aws::String m_systemMessageOverride;
    bool m_systemMessageOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
