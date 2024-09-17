/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/CardInput.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The input for defining an Q App.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/AppDefinitionInput">AWS
   * API Reference</a></p>
   */
  class AppDefinitionInput
  {
  public:
    AWS_QAPPS_API AppDefinitionInput();
    AWS_QAPPS_API AppDefinitionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API AppDefinitionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cards that make up the Q App definition.</p>
     */
    inline const Aws::Vector<CardInput>& GetCards() const{ return m_cards; }
    inline bool CardsHasBeenSet() const { return m_cardsHasBeenSet; }
    inline void SetCards(const Aws::Vector<CardInput>& value) { m_cardsHasBeenSet = true; m_cards = value; }
    inline void SetCards(Aws::Vector<CardInput>&& value) { m_cardsHasBeenSet = true; m_cards = std::move(value); }
    inline AppDefinitionInput& WithCards(const Aws::Vector<CardInput>& value) { SetCards(value); return *this;}
    inline AppDefinitionInput& WithCards(Aws::Vector<CardInput>&& value) { SetCards(std::move(value)); return *this;}
    inline AppDefinitionInput& AddCards(const CardInput& value) { m_cardsHasBeenSet = true; m_cards.push_back(value); return *this; }
    inline AppDefinitionInput& AddCards(CardInput&& value) { m_cardsHasBeenSet = true; m_cards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The initial prompt displayed when the Q App is started.</p>
     */
    inline const Aws::String& GetInitialPrompt() const{ return m_initialPrompt; }
    inline bool InitialPromptHasBeenSet() const { return m_initialPromptHasBeenSet; }
    inline void SetInitialPrompt(const Aws::String& value) { m_initialPromptHasBeenSet = true; m_initialPrompt = value; }
    inline void SetInitialPrompt(Aws::String&& value) { m_initialPromptHasBeenSet = true; m_initialPrompt = std::move(value); }
    inline void SetInitialPrompt(const char* value) { m_initialPromptHasBeenSet = true; m_initialPrompt.assign(value); }
    inline AppDefinitionInput& WithInitialPrompt(const Aws::String& value) { SetInitialPrompt(value); return *this;}
    inline AppDefinitionInput& WithInitialPrompt(Aws::String&& value) { SetInitialPrompt(std::move(value)); return *this;}
    inline AppDefinitionInput& WithInitialPrompt(const char* value) { SetInitialPrompt(value); return *this;}
    ///@}
  private:

    Aws::Vector<CardInput> m_cards;
    bool m_cardsHasBeenSet = false;

    Aws::String m_initialPrompt;
    bool m_initialPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
