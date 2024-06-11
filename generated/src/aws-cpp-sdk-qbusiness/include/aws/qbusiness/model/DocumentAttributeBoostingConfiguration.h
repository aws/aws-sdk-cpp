﻿/**
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
   * content that matches the boosted document attributes.</p>  <p>For
   * <code>STRING</code> and <code>STRING_LIST</code> type document attributes to be
   * used for boosting on the console and the API, they must be enabled for search
   * using the <a
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
    AWS_QBUSINESS_API DocumentAttributeBoostingConfiguration();
    AWS_QBUSINESS_API DocumentAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information on boosting <code>NUMBER</code> type document
     * attributes.</p>
     */
    inline const NumberAttributeBoostingConfiguration& GetNumberConfiguration() const{ return m_numberConfiguration; }
    inline bool NumberConfigurationHasBeenSet() const { return m_numberConfigurationHasBeenSet; }
    inline void SetNumberConfiguration(const NumberAttributeBoostingConfiguration& value) { m_numberConfigurationHasBeenSet = true; m_numberConfiguration = value; }
    inline void SetNumberConfiguration(NumberAttributeBoostingConfiguration&& value) { m_numberConfigurationHasBeenSet = true; m_numberConfiguration = std::move(value); }
    inline DocumentAttributeBoostingConfiguration& WithNumberConfiguration(const NumberAttributeBoostingConfiguration& value) { SetNumberConfiguration(value); return *this;}
    inline DocumentAttributeBoostingConfiguration& WithNumberConfiguration(NumberAttributeBoostingConfiguration&& value) { SetNumberConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on boosting <code>STRING</code> type document
     * attributes.</p>
     */
    inline const StringAttributeBoostingConfiguration& GetStringConfiguration() const{ return m_stringConfiguration; }
    inline bool StringConfigurationHasBeenSet() const { return m_stringConfigurationHasBeenSet; }
    inline void SetStringConfiguration(const StringAttributeBoostingConfiguration& value) { m_stringConfigurationHasBeenSet = true; m_stringConfiguration = value; }
    inline void SetStringConfiguration(StringAttributeBoostingConfiguration&& value) { m_stringConfigurationHasBeenSet = true; m_stringConfiguration = std::move(value); }
    inline DocumentAttributeBoostingConfiguration& WithStringConfiguration(const StringAttributeBoostingConfiguration& value) { SetStringConfiguration(value); return *this;}
    inline DocumentAttributeBoostingConfiguration& WithStringConfiguration(StringAttributeBoostingConfiguration&& value) { SetStringConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on boosting <code>DATE</code> type document
     * attributes.</p>
     */
    inline const DateAttributeBoostingConfiguration& GetDateConfiguration() const{ return m_dateConfiguration; }
    inline bool DateConfigurationHasBeenSet() const { return m_dateConfigurationHasBeenSet; }
    inline void SetDateConfiguration(const DateAttributeBoostingConfiguration& value) { m_dateConfigurationHasBeenSet = true; m_dateConfiguration = value; }
    inline void SetDateConfiguration(DateAttributeBoostingConfiguration&& value) { m_dateConfigurationHasBeenSet = true; m_dateConfiguration = std::move(value); }
    inline DocumentAttributeBoostingConfiguration& WithDateConfiguration(const DateAttributeBoostingConfiguration& value) { SetDateConfiguration(value); return *this;}
    inline DocumentAttributeBoostingConfiguration& WithDateConfiguration(DateAttributeBoostingConfiguration&& value) { SetDateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on boosting <code>STRING_LIST</code> type document
     * attributes.</p>
     */
    inline const StringListAttributeBoostingConfiguration& GetStringListConfiguration() const{ return m_stringListConfiguration; }
    inline bool StringListConfigurationHasBeenSet() const { return m_stringListConfigurationHasBeenSet; }
    inline void SetStringListConfiguration(const StringListAttributeBoostingConfiguration& value) { m_stringListConfigurationHasBeenSet = true; m_stringListConfiguration = value; }
    inline void SetStringListConfiguration(StringListAttributeBoostingConfiguration&& value) { m_stringListConfigurationHasBeenSet = true; m_stringListConfiguration = std::move(value); }
    inline DocumentAttributeBoostingConfiguration& WithStringListConfiguration(const StringListAttributeBoostingConfiguration& value) { SetStringListConfiguration(value); return *this;}
    inline DocumentAttributeBoostingConfiguration& WithStringListConfiguration(StringListAttributeBoostingConfiguration&& value) { SetStringListConfiguration(std::move(value)); return *this;}
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
