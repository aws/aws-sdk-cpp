/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/IntelligentTieringFilter.h>
#include <aws/s3/model/IntelligentTieringStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Tiering.h>
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
   * <p>Specifies the S3 Intelligent-Tiering configuration for an Amazon S3
   * bucket.</p> <p>For information about the S3 Intelligent-Tiering storage class,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
   * class for automatically optimizing frequently and infrequently accessed
   * objects</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/IntelligentTieringConfiguration">AWS
   * API Reference</a></p>
   */
  class IntelligentTieringConfiguration
  {
  public:
    AWS_S3_API IntelligentTieringConfiguration() = default;
    AWS_S3_API IntelligentTieringConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API IntelligentTieringConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID used to identify the S3 Intelligent-Tiering configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    IntelligentTieringConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a bucket filter. The configuration only includes objects that meet
     * the filter's criteria.</p>
     */
    inline const IntelligentTieringFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = IntelligentTieringFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = IntelligentTieringFilter>
    IntelligentTieringConfiguration& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the configuration.</p>
     */
    inline IntelligentTieringStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IntelligentTieringStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IntelligentTieringConfiguration& WithStatus(IntelligentTieringStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the S3 Intelligent-Tiering storage class tier of the
     * configuration.</p>
     */
    inline const Aws::Vector<Tiering>& GetTierings() const { return m_tierings; }
    inline bool TieringsHasBeenSet() const { return m_tieringsHasBeenSet; }
    template<typename TieringsT = Aws::Vector<Tiering>>
    void SetTierings(TieringsT&& value) { m_tieringsHasBeenSet = true; m_tierings = std::forward<TieringsT>(value); }
    template<typename TieringsT = Aws::Vector<Tiering>>
    IntelligentTieringConfiguration& WithTierings(TieringsT&& value) { SetTierings(std::forward<TieringsT>(value)); return *this;}
    template<typename TieringsT = Tiering>
    IntelligentTieringConfiguration& AddTierings(TieringsT&& value) { m_tieringsHasBeenSet = true; m_tierings.emplace_back(std::forward<TieringsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IntelligentTieringFilter m_filter;
    bool m_filterHasBeenSet = false;

    IntelligentTieringStatus m_status{IntelligentTieringStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tiering> m_tierings;
    bool m_tieringsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
