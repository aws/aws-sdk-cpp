/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p> Indicates which Storage Lens group ARNs to include or exclude in the Storage
   * Lens group aggregation. You can only attach Storage Lens groups to your Storage
   * Lens dashboard if they're included in your Storage Lens group aggregation. If
   * this value is left null, then all Storage Lens groups are selected.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensGroupLevelSelectionCriteria">AWS
   * API Reference</a></p>
   */
  class StorageLensGroupLevelSelectionCriteria
  {
  public:
    AWS_S3CONTROL_API StorageLensGroupLevelSelectionCriteria() = default;
    AWS_S3CONTROL_API StorageLensGroupLevelSelectionCriteria(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupLevelSelectionCriteria& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Indicates which Storage Lens group ARNs to include in the Storage Lens group
     * aggregation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Vector<Aws::String>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Vector<Aws::String>>
    StorageLensGroupLevelSelectionCriteria& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    template<typename IncludeT = Aws::String>
    StorageLensGroupLevelSelectionCriteria& AddInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include.emplace_back(std::forward<IncludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates which Storage Lens group ARNs to exclude from the Storage Lens
     * group aggregation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = Aws::Vector<Aws::String>>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = Aws::Vector<Aws::String>>
    StorageLensGroupLevelSelectionCriteria& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
    template<typename ExcludeT = Aws::String>
    StorageLensGroupLevelSelectionCriteria& AddExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude.emplace_back(std::forward<ExcludeT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_include;
    bool m_includeHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclude;
    bool m_excludeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
