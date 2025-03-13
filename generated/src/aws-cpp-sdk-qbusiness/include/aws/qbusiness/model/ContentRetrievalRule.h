/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/EligibleDataSource.h>
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
   * <p>Rules for retrieving content from data sources connected to a Amazon Q
   * Business application for a specific topic control configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ContentRetrievalRule">AWS
   * API Reference</a></p>
   */
  class ContentRetrievalRule
  {
  public:
    AWS_QBUSINESS_API ContentRetrievalRule() = default;
    AWS_QBUSINESS_API ContentRetrievalRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ContentRetrievalRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies data sources in a Amazon Q Business application to use for content
     * generation.</p>
     */
    inline const Aws::Vector<EligibleDataSource>& GetEligibleDataSources() const { return m_eligibleDataSources; }
    inline bool EligibleDataSourcesHasBeenSet() const { return m_eligibleDataSourcesHasBeenSet; }
    template<typename EligibleDataSourcesT = Aws::Vector<EligibleDataSource>>
    void SetEligibleDataSources(EligibleDataSourcesT&& value) { m_eligibleDataSourcesHasBeenSet = true; m_eligibleDataSources = std::forward<EligibleDataSourcesT>(value); }
    template<typename EligibleDataSourcesT = Aws::Vector<EligibleDataSource>>
    ContentRetrievalRule& WithEligibleDataSources(EligibleDataSourcesT&& value) { SetEligibleDataSources(std::forward<EligibleDataSourcesT>(value)); return *this;}
    template<typename EligibleDataSourcesT = EligibleDataSource>
    ContentRetrievalRule& AddEligibleDataSources(EligibleDataSourcesT&& value) { m_eligibleDataSourcesHasBeenSet = true; m_eligibleDataSources.emplace_back(std::forward<EligibleDataSourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EligibleDataSource> m_eligibleDataSources;
    bool m_eligibleDataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
