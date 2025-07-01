/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/NumberAttributeBoostingConfiguration.h>
#include <aws/qbusiness/model/StringAttributeBoostingConfiguration.h>
#include <aws/qbusiness/model/DateAttributeBoostingConfiguration.h>
#include <aws/qbusiness/model/StringListAttributeBoostingConfiguration.h>
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
   * <p>Provides information on boosting supported Amazon Q Business document
   * attribute types. When an end user chat query matches document attributes that
   * have been boosted, Amazon Q Business prioritizes generating responses from
   * content that matches the boosted document attributes.</p> <p>In version 2,
   * boosting uses numeric values (ONE, TWO) to indicate priority tiers that
   * establish clear hierarchical relationships between boosted attributes. This
   * allows for more precise control over how different attributes influence search
   * results.</p>  <p>For <code>STRING</code> and <code>STRING_LIST</code> type
   * document attributes to be used for boosting on the console and the API, they
   * must be enabled for search using the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeConfiguration.html">DocumentAttributeConfiguration</a>
   * object of the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_UpdateIndex.html">UpdateIndex</a>
   * API. If you haven't enabled searching on these attributes, you can't boost
   * attributes of these data types on either the console or the API.</p> 
   * <p>For more information on how boosting document attributes work in Amazon Q
   * Business, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API DocumentAttributeBoostingConfiguration() = default;
    AWS_QBUSINESS_API DocumentAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information on boosting <code>NUMBER</code> type document
     * attributes.</p> <p> <code>NUMBER</code> attributes are not supported when using
     * <code>NativeIndexConfiguration</code> version 2, which focuses on
     * <code>DATE</code> attributes for recency and <code>STRING</code> attributes for
     * source prioritization.</p>
     */
    inline const NumberAttributeBoostingConfiguration& GetNumberConfiguration() const { return m_numberConfiguration; }
    inline bool NumberConfigurationHasBeenSet() const { return m_numberConfigurationHasBeenSet; }
    template<typename NumberConfigurationT = NumberAttributeBoostingConfiguration>
    void SetNumberConfiguration(NumberConfigurationT&& value) { m_numberConfigurationHasBeenSet = true; m_numberConfiguration = std::forward<NumberConfigurationT>(value); }
    template<typename NumberConfigurationT = NumberAttributeBoostingConfiguration>
    DocumentAttributeBoostingConfiguration& WithNumberConfiguration(NumberConfigurationT&& value) { SetNumberConfiguration(std::forward<NumberConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on boosting <code>STRING</code> type document
     * attributes.</p> <p>Version 2 assigns priority tiers to <code>STRING</code>
     * attributes, establishing clear hierarchical relationships with other boosted
     * attributes.</p>
     */
    inline const StringAttributeBoostingConfiguration& GetStringConfiguration() const { return m_stringConfiguration; }
    inline bool StringConfigurationHasBeenSet() const { return m_stringConfigurationHasBeenSet; }
    template<typename StringConfigurationT = StringAttributeBoostingConfiguration>
    void SetStringConfiguration(StringConfigurationT&& value) { m_stringConfigurationHasBeenSet = true; m_stringConfiguration = std::forward<StringConfigurationT>(value); }
    template<typename StringConfigurationT = StringAttributeBoostingConfiguration>
    DocumentAttributeBoostingConfiguration& WithStringConfiguration(StringConfigurationT&& value) { SetStringConfiguration(std::forward<StringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on boosting <code>DATE</code> type document
     * attributes.</p> <p>Version 2 assigns priority tiers to <code>DATE</code>
     * attributes, establishing clear hierarchical relationships with other boosted
     * attributes.</p>
     */
    inline const DateAttributeBoostingConfiguration& GetDateConfiguration() const { return m_dateConfiguration; }
    inline bool DateConfigurationHasBeenSet() const { return m_dateConfigurationHasBeenSet; }
    template<typename DateConfigurationT = DateAttributeBoostingConfiguration>
    void SetDateConfiguration(DateConfigurationT&& value) { m_dateConfigurationHasBeenSet = true; m_dateConfiguration = std::forward<DateConfigurationT>(value); }
    template<typename DateConfigurationT = DateAttributeBoostingConfiguration>
    DocumentAttributeBoostingConfiguration& WithDateConfiguration(DateConfigurationT&& value) { SetDateConfiguration(std::forward<DateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on boosting <code>STRING_LIST</code> type document
     * attributes.</p> <p> <code>STRING_LIST</code> attributes are not supported when
     * using <code>NativeIndexConfiguration</code> version 2, which focuses on
     * <code>DATE</code> attributes for recency and <code>STRING</code> attributes for
     * source prioritization.</p>
     */
    inline const StringListAttributeBoostingConfiguration& GetStringListConfiguration() const { return m_stringListConfiguration; }
    inline bool StringListConfigurationHasBeenSet() const { return m_stringListConfigurationHasBeenSet; }
    template<typename StringListConfigurationT = StringListAttributeBoostingConfiguration>
    void SetStringListConfiguration(StringListConfigurationT&& value) { m_stringListConfigurationHasBeenSet = true; m_stringListConfiguration = std::forward<StringListConfigurationT>(value); }
    template<typename StringListConfigurationT = StringListAttributeBoostingConfiguration>
    DocumentAttributeBoostingConfiguration& WithStringListConfiguration(StringListConfigurationT&& value) { SetStringListConfiguration(std::forward<StringListConfigurationT>(value)); return *this;}
    ///@}
  private:

    NumberAttributeBoostingConfiguration m_numberConfiguration;
    bool m_numberConfigurationHasBeenSet = false;

    StringAttributeBoostingConfiguration m_stringConfiguration;
    bool m_stringConfigurationHasBeenSet = false;

    DateAttributeBoostingConfiguration m_dateConfiguration;
    bool m_dateConfigurationHasBeenSet = false;

    StringListAttributeBoostingConfiguration m_stringListConfiguration;
    bool m_stringListConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
