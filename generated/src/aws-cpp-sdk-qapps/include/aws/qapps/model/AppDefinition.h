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
    AWS_QAPPS_API AppDefinition();
    AWS_QAPPS_API AppDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API AppDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the app definition schema or specification.</p>
     */
    inline const Aws::String& GetAppDefinitionVersion() const{ return m_appDefinitionVersion; }
    inline bool AppDefinitionVersionHasBeenSet() const { return m_appDefinitionVersionHasBeenSet; }
    inline void SetAppDefinitionVersion(const Aws::String& value) { m_appDefinitionVersionHasBeenSet = true; m_appDefinitionVersion = value; }
    inline void SetAppDefinitionVersion(Aws::String&& value) { m_appDefinitionVersionHasBeenSet = true; m_appDefinitionVersion = std::move(value); }
    inline void SetAppDefinitionVersion(const char* value) { m_appDefinitionVersionHasBeenSet = true; m_appDefinitionVersion.assign(value); }
    inline AppDefinition& WithAppDefinitionVersion(const Aws::String& value) { SetAppDefinitionVersion(value); return *this;}
    inline AppDefinition& WithAppDefinitionVersion(Aws::String&& value) { SetAppDefinitionVersion(std::move(value)); return *this;}
    inline AppDefinition& WithAppDefinitionVersion(const char* value) { SetAppDefinitionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cards that make up the Q App, such as text input, file upload, or query
     * cards.</p>
     */
    inline const Aws::Vector<Card>& GetCards() const{ return m_cards; }
    inline bool CardsHasBeenSet() const { return m_cardsHasBeenSet; }
    inline void SetCards(const Aws::Vector<Card>& value) { m_cardsHasBeenSet = true; m_cards = value; }
    inline void SetCards(Aws::Vector<Card>&& value) { m_cardsHasBeenSet = true; m_cards = std::move(value); }
    inline AppDefinition& WithCards(const Aws::Vector<Card>& value) { SetCards(value); return *this;}
    inline AppDefinition& WithCards(Aws::Vector<Card>&& value) { SetCards(std::move(value)); return *this;}
    inline AppDefinition& AddCards(const Card& value) { m_cardsHasBeenSet = true; m_cards.push_back(value); return *this; }
    inline AppDefinition& AddCards(Card&& value) { m_cardsHasBeenSet = true; m_cards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether the Q App's definition can be edited by the
     * user.</p>
     */
    inline bool GetCanEdit() const{ return m_canEdit; }
    inline bool CanEditHasBeenSet() const { return m_canEditHasBeenSet; }
    inline void SetCanEdit(bool value) { m_canEditHasBeenSet = true; m_canEdit = value; }
    inline AppDefinition& WithCanEdit(bool value) { SetCanEdit(value); return *this;}
    ///@}
  private:

    Aws::String m_appDefinitionVersion;
    bool m_appDefinitionVersionHasBeenSet = false;

    Aws::Vector<Card> m_cards;
    bool m_cardsHasBeenSet = false;

    bool m_canEdit;
    bool m_canEditHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
