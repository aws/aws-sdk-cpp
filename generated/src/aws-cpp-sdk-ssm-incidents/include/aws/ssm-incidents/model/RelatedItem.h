/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ItemIdentifier.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Resources that responders use to triage and mitigate the
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/RelatedItem">AWS
   * API Reference</a></p>
   */
  class RelatedItem
  {
  public:
    AWS_SSMINCIDENTS_API RelatedItem() = default;
    AWS_SSMINCIDENTS_API RelatedItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RelatedItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique ID for a <code>RelatedItem</code>.</p>  <p>Don't specify
     * this parameter when you add a <code>RelatedItem</code> by using the
     * <a>UpdateRelatedItems</a> API action.</p> 
     */
    inline const Aws::String& GetGeneratedId() const { return m_generatedId; }
    inline bool GeneratedIdHasBeenSet() const { return m_generatedIdHasBeenSet; }
    template<typename GeneratedIdT = Aws::String>
    void SetGeneratedId(GeneratedIdT&& value) { m_generatedIdHasBeenSet = true; m_generatedId = std::forward<GeneratedIdT>(value); }
    template<typename GeneratedIdT = Aws::String>
    RelatedItem& WithGeneratedId(GeneratedIdT&& value) { SetGeneratedId(std::forward<GeneratedIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the related item.</p>
     */
    inline const ItemIdentifier& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = ItemIdentifier>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = ItemIdentifier>
    RelatedItem& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the related item.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    RelatedItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_generatedId;
    bool m_generatedIdHasBeenSet = false;

    ItemIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
