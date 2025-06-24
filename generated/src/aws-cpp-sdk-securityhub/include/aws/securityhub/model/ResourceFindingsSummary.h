/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ResourceSeverityBreakdown.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A list of summaries for all finding types on a resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceFindingsSummary">AWS
   * API Reference</a></p>
   */
  class ResourceFindingsSummary
  {
  public:
    AWS_SECURITYHUB_API ResourceFindingsSummary() = default;
    AWS_SECURITYHUB_API ResourceFindingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourceFindingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category or classification of the security finding.</p>
     */
    inline const Aws::String& GetFindingType() const { return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    template<typename FindingTypeT = Aws::String>
    void SetFindingType(FindingTypeT&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::forward<FindingTypeT>(value); }
    template<typename FindingTypeT = Aws::String>
    ResourceFindingsSummary& WithFindingType(FindingTypeT&& value) { SetFindingType(std::forward<FindingTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product associated with the security finding.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    ResourceFindingsSummary& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total count of security findings.</p>
     */
    inline int GetTotalFindings() const { return m_totalFindings; }
    inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
    inline void SetTotalFindings(int value) { m_totalFindingsHasBeenSet = true; m_totalFindings = value; }
    inline ResourceFindingsSummary& WithTotalFindings(int value) { SetTotalFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A breakdown of security findings by their severity levels.</p>
     */
    inline const ResourceSeverityBreakdown& GetSeverities() const { return m_severities; }
    inline bool SeveritiesHasBeenSet() const { return m_severitiesHasBeenSet; }
    template<typename SeveritiesT = ResourceSeverityBreakdown>
    void SetSeverities(SeveritiesT&& value) { m_severitiesHasBeenSet = true; m_severities = std::forward<SeveritiesT>(value); }
    template<typename SeveritiesT = ResourceSeverityBreakdown>
    ResourceFindingsSummary& WithSeverities(SeveritiesT&& value) { SetSeverities(std::forward<SeveritiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_findingType;
    bool m_findingTypeHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    int m_totalFindings{0};
    bool m_totalFindingsHasBeenSet = false;

    ResourceSeverityBreakdown m_severities;
    bool m_severitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
