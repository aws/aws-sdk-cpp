/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/Card.h>
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
   * <p>The definition of the Q App, specifying the cards and flow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/AppDefinition">AWS
   * API Reference</a></p>
   */
  class AppDefinition
  {
  public:
    AWS_QAPPS_API AppDefinition() = default;
    AWS_QAPPS_API AppDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API AppDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the app definition schema or specification.</p>
     */
    inline const Aws::String& GetAppDefinitionVersion() const { return m_appDefinitionVersion; }
    inline bool AppDefinitionVersionHasBeenSet() const { return m_appDefinitionVersionHasBeenSet; }
    template<typename AppDefinitionVersionT = Aws::String>
    void SetAppDefinitionVersion(AppDefinitionVersionT&& value) { m_appDefinitionVersionHasBeenSet = true; m_appDefinitionVersion = std::forward<AppDefinitionVersionT>(value); }
    template<typename AppDefinitionVersionT = Aws::String>
    AppDefinition& WithAppDefinitionVersion(AppDefinitionVersionT&& value) { SetAppDefinitionVersion(std::forward<AppDefinitionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cards that make up the Q App, such as text input, file upload, or query
     * cards.</p>
     */
    inline const Aws::Vector<Card>& GetCards() const { return m_cards; }
    inline bool CardsHasBeenSet() const { return m_cardsHasBeenSet; }
    template<typename CardsT = Aws::Vector<Card>>
    void SetCards(CardsT&& value) { m_cardsHasBeenSet = true; m_cards = std::forward<CardsT>(value); }
    template<typename CardsT = Aws::Vector<Card>>
    AppDefinition& WithCards(CardsT&& value) { SetCards(std::forward<CardsT>(value)); return *this;}
    template<typename CardsT = Card>
    AppDefinition& AddCards(CardsT&& value) { m_cardsHasBeenSet = true; m_cards.emplace_back(std::forward<CardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether the Q App's definition can be edited by the
     * user.</p>
     */
    inline bool GetCanEdit() const { return m_canEdit; }
    inline bool CanEditHasBeenSet() const { return m_canEditHasBeenSet; }
    inline void SetCanEdit(bool value) { m_canEditHasBeenSet = true; m_canEdit = value; }
    inline AppDefinition& WithCanEdit(bool value) { SetCanEdit(value); return *this;}
    ///@}
  private:

    Aws::String m_appDefinitionVersion;
    bool m_appDefinitionVersionHasBeenSet = false;

    Aws::Vector<Card> m_cards;
    bool m_cardsHasBeenSet = false;

    bool m_canEdit{false};
    bool m_canEditHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
