/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/AnalyticsFilter.h>
#include <aws/s3/model/StorageClassAnalysis.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies the configuration and any analyses for the analytics filter of an
   * Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AnalyticsConfiguration">AWS
   * API Reference</a></p>
   */
  class AnalyticsConfiguration
  {
  public:
    AWS_S3_API AnalyticsConfiguration() = default;
    AWS_S3_API AnalyticsConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API AnalyticsConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that identifies the analytics configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AnalyticsConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter used to describe a set of objects for analyses. A filter must have
     * exactly one prefix, one tag, or one conjunction (AnalyticsAndOperator). If no
     * filter is provided, all objects will be considered in any analysis.</p>
     */
    inline const AnalyticsFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = AnalyticsFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = AnalyticsFilter>
    AnalyticsConfiguration& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains data related to access patterns to be collected and made available
     * to analyze the tradeoffs between different storage classes. </p>
     */
    inline const StorageClassAnalysis& GetStorageClassAnalysis() const { return m_storageClassAnalysis; }
    inline bool StorageClassAnalysisHasBeenSet() const { return m_storageClassAnalysisHasBeenSet; }
    template<typename StorageClassAnalysisT = StorageClassAnalysis>
    void SetStorageClassAnalysis(StorageClassAnalysisT&& value) { m_storageClassAnalysisHasBeenSet = true; m_storageClassAnalysis = std::forward<StorageClassAnalysisT>(value); }
    template<typename StorageClassAnalysisT = StorageClassAnalysis>
    AnalyticsConfiguration& WithStorageClassAnalysis(StorageClassAnalysisT&& value) { SetStorageClassAnalysis(std::forward<StorageClassAnalysisT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AnalyticsFilter m_filter;
    bool m_filterHasBeenSet = false;

    StorageClassAnalysis m_storageClassAnalysis;
    bool m_storageClassAnalysisHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
